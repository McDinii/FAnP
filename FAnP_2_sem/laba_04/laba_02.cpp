//�������������.������� �������������,
//�������� ��������, ���� ��������.����� �� �������.

#include <iostream>      
#include <fstream>
#include <string>
#include <stdio.h>
# define str_len 25
# define size 3  
using namespace std;
void enter_new();
void del();
void find(char Name[]);
void out();
typedef struct Exam
{
	char examName[str_len];
	char day[str_len];
	char month[str_len];
	char lastName[str_len];

} ex;
struct Exam list_of_student[size];
struct Exam bad;
FILE* f; FILE* f1; FILE* f2; errno_t err;
int current_size = 0; int choice;
int main()
{
	char name[str_len];
	setlocale(LC_ALL, "Russian");
	cout << "�������:" << endl;
	cout << "1-��� �������� ������" << endl;
	cout << "2-��� ����� ����� ������" << endl;
	cout << "3-��� ������ �� ���������" << endl;
	cout << "4-��� ������ ������(��)" << endl;
	cout << "5-��� ������" << endl;
	cin >> choice;
	do
	{
		switch (choice)
		{
		case 1:  del();	break;
		case 2:  enter_new();  break;
		case 3:  
			cout << "������� �������" << endl;
			cin >> name;
			find(name);  break;
		case 4:  out();	break;
		}
	} while (choice != 5);
}
void enter_new()
{
	cout << "���� ����������" << endl;
	ex buf = { ' ', ' ', ' ', ' ',' '};
	if (!fopen_s(&f, "main.bin", "ab")) {
			if (current_size < size)
			{	cout << "������ ����� ";
				cout << current_size + 1;
				cout << endl << "������� " << endl;
				cin >> buf.lastName;
				cout << "���� �������� " << endl;
				cin >> buf.day;
				cout << "����� ��������  " << endl;
				cin >> buf.month;
				cout << "�������� ��������  " << endl;
				cin >> buf.examName;
				fwrite(&buf, sizeof(buf), 1, f);
				current_size++;
			}

		else {
			cout << "������� ������������ ���-�� �����" << endl;
			cout << "��� ������?" << endl;
			cin >> choice;
		}
		fclose(f);
	}
	else {
		cout << "������ �������� �����";
		return;
	}
	
}
void del()
{
	ex buf;
	bool non = false;
	int chv2;
	char name[str_len];
	cout << "������� 1 - ��� �������� ���������� ������������ ������� \n 2 - ��� �������� ���� ����������\n";
	cin >> chv2;
	switch (chv2) {
	case 1: {
		cout << "\n ������� �������\n";
		cin >> name;
		errno_t err;
		err = fopen_s(&f, "main.bin", "rb");
		if (err != 0)
		{
			perror("������ �������� �����");
			return;
		}
		errno_t err1;
		err1 = fopen_s(&f1, "temp.bin", "ab");
		if (err1 != 0)
		{
			perror("������ �������� �����");
			return;
		}
		fread(&buf, sizeof(buf), 1, f);
		while (!feof(f)) {
			if (strcmp(name, buf.lastName) != 0) {
				fwrite(&buf, sizeof(buf), 1, f1);
				fread(&buf, sizeof(buf), 1, f);
			}
			else {
				fread(&buf, sizeof(buf), 1, f);
				non = true;
			}
		}
		if (non == false) {
			cout << "���������� �� �������" << endl;
		}
		else {
			current_size--;
		}
		fclose(f);
		fclose(f1);
		remove("main.bin");
		rename("temp.bin", "main.bin");
		break;

	}
	case 2: {
		errno_t err3, err4;
		err3 = fopen_s(&f, "main.bin", "rb");
		if (err3 != 0)
		{
			perror("������ �������� �����");
			return;
		}
		err4 = fopen_s(&f2, "temp2.bin", "ab");
		if (err4 != 0)
		{
			perror("������ �������� �����");
			return;
		}
		fclose(f);
		fclose(f2);
		remove("main.bin");
		rename("temp2.bin", "main.bin");
		fclose(f);
		fclose(f2);
		current_size = 0;
		break;
	}
	}

	cout << endl << "��� ������?" << endl;
	cin >> choice;

}
void find(char Name[])
{
	bool non = false;
	ex buf;
	if (!fopen_s(&f, "main.bin", "rb")) 
	{
		cout << "\n�������     |   �������     |   ����     |  �����\n";
		fread(&buf, sizeof(buf), 1, f);
		while (!feof(f))
		{
			if (strcmp(Name, buf.lastName) == 0) {
				non = true;
				cout << buf.lastName << "\t\t" << buf.examName << "\t\t" << buf.day << "\t    " << buf.month << endl;
				break;
			}
			else { fread(&buf, sizeof(buf), 1, f); }
		}
		if (non == false) {
			cout << "���������� �� �������" << endl;
		}
	
		fclose(f);
	}
	else
	{
		cout << "������ �������� �����";
		return;
	}
	cout << endl << "��� ������?" << endl;
	cin >> choice;
	
}
void out()
{
	cout << endl;
	ex buf;
	if (!fopen_s(&f, "main.bin", "rb")) {
		cout << "\n�������     |   �������     |   ����     |  �����\n";
		fread(&buf, sizeof(buf), 1, f);
		current_size = 0;
		while (!feof(f))
		{
			cout << buf.lastName << "\t\t" << buf.examName << "\t\t" << buf.day << "\t    " << buf.month << endl;
			fread(&buf, sizeof(buf), 1, f);
			current_size++;
		}
		cout << endl;
		fclose(f);
	}
	else
	{
		cout << "������ �������� �����";
		return;
	}

	cout << endl << "��� ������?" << endl;
	cin >> choice;

	
}









