#include <fstream>
#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;
void task1();
void task2();//��������
void var2();
void var5();
void var8();
int main()
{
    setlocale(LC_ALL, "rus");
	int choice;
	do
	{
		cout << endl;
		cout << "�������� ������� ������" << endl;
		cout << "151 - 15�� ������� 1 ������� " << endl;
		cout << "152 - 15�� ������� 2 ������� " << endl;
		cout << "2 - 2�� �������" << endl;
		cout << "5 - 5�� �������" << endl;
		cout << "8 - 8�� �������" << endl;
		cout << "0 - end" << endl;
		cin >> choice;
		switch (choice)
		{
		case 151: task1(); break;
		case 152: task2();
	
			break;
		case 2: var2();
			break;
		case 5: var5();
			break;
		case 8:  var8(); break;
		}
	} while (choice != 0);
	
}
void task1() {
	/*	����������� �� ����� FILE1 � ���� FILE2 ��� ������, � �������
		���������� �� ����� ����
		���������� ����.���������� ����� �����, � ������� ������ ����� ����.
	*/
	char buff[1024];
	fstream f,f2;
	string path1 = "FILE1.txt", path2 = "FILE2.txt", str, * arr;
	f.open(path1, fstream::in | fstream::out);
	if (!f.is_open())
		cout << "���� �� ����� ���� ������!\n";
	else
	{

		while (!f.eof()) {

			while (getline(f, str)) {
				str += ' ';
				int  count = 0;
				int i = 0;
				while ( str[i] != '\0') {
					if (str[i] == ' ' || str[i] == '\0')
						count++;
					i++;
				}

				arr = new string[count];
				int  k = 0, u = 0;
				bool check = false;
				string buf;
				buf = ' ';	
					for (int t = 0, j = 0; t <= i; t++) {
						if (str[t] != ' ') {
							buf += str[t];
						}
						else{
							arr[j] = buf; 
							j++;
							buf = ' ';
						}
					}

				
					for (; k <= count; k++) {
						f2.open(path2, fstream::in | fstream::out | fstream::app);
						for (u = k + 1; u < count; u++) {
						
							if (arr[k] == arr[u]) {
								if (!f2.is_open()) {
									cout << "Fail" << endl;
								}
								else {
									str += '\n';
									f2 << str;
									str = "";
								}
								check = true;
								break;
							}
						}f2.close();
						if (check) {
							break;
						}
					}
				
				cout << count << endl;
				delete[] arr;
			}
		}
		f.close();
	}
}

	
	void task2(void)
	{
		/*������ � ���������� ������ ��������, ��������� �� ����,
		����������� ���������, � �������� �� � ����.���������
		�� ����� ������ � ������� ��� �����, ������� �������� ����� ���.*/
		string buff, trash;
		getline(cin, buff);
		getline(cin, buff);
		setlocale(0, "Rus");
		
		
		ofstream fout("file11.txt");
		if (fout.fail())
		{
			cout << "\n ������ �������� �����";
			exit(1);
		}
		else {
			cout << "open"<<endl;
			fout << buff ;
		}

		fout.close();
		string path1 = "file11.txt";
		fstream fin;
		string str , *arr;
		fin.open(path1, fstream::in | fstream::out);
		if (!fin.is_open())
		{
			cout << "\n ������ �������� �����";
			exit(1);
		}
		else {
			getline(fin, str);
					str += ' ';
					int  count = 0;
					int i = 0;
					while (str[i] != '\0') {
						if (str[i] == ' ' || str[i] == '\0')
							count++;
						i++;
					}

					arr = new string[count];
					int  k = 0, u = 0;
					string buf;
					buf = "";
					for (int t = 0, j = 0; t <= i; t++) {
						if (str[t] != ' ') {
							buf += str[t];
						}
						else {
							arr[j] = buf;
							j++;
							buf = "";
						}
					}


					for (; k < count; k++) {
							string check = arr[k];
							for (int p = 0; p < arr[k].length(); p++) {
								if (check[p] == 'x') {
									cout << check << " ";
									break;
								}
							}
					}
					delete[] arr;
			
			fin.close();
			}
		
	}
	void var2() {
		/*����������� � ���� FILE2 ������ �� ����d�� �� FILE1, 
		������� ���������� � ����� ���.���������� ����������
		���� � FILE2.*/
		char buff[1024];

		fstream f, f2;
		string path1 = "FILE11var_2.txt", path2 = "FILE12var_2.txt", str, * arr;
		f.open(path1, fstream::in | fstream::out);
		if (!f.is_open())
			cout << "���� �� ����� ���� ������!\n";
		else
		{

			while (!f.eof()) {

				while (getline(f, str)) {
					str += ' ';
					int  count = 0;
					int i = 0;
					if (str[0] == 'A') {
						while (str[i] != '\0') {
							if (str[i] == ' ' || str[i] == '\0')
								count++;
							i++;
						}
						cout << "���-�� ���� � c����� " << count << endl;
						arr = new string[count];
						int  k = 0, u = 0;
						string buf;
						buf = ' ';
						for (int t = 0, j = 0; t <= i; t++) {
							if (str[t] != ' ') {
								buf += str[t];
							}
							else {
								arr[j] = buf;
								j++;
								buf = ' ';
							}
						}


													f2.open(path2, fstream::in | fstream::out | fstream::app);
							
									if (!f2.is_open()) {
										cout << "Fail" << endl;
									}
									else {
										str += '\n';
										f2 << str;
										str = "";
									}
							f2.close();
						
						
						delete[] arr;
					}
					
				}

			}
			f.close();
		}
}
	void var5() {
		/*������ � ���������� ������ ��������, ��������� 
		�� ����� ���� � �����, � �������� �� � ����.�����
		- ���� �� ����� ������ � ������� ����� �������� ������.*/
		string buff, trash;
		getline(cin, buff);
		getline(cin, buff);
		setlocale(0, "Rus");


		ofstream fout("file13.txt");
		if (fout.fail())
		{
			cout << "\n ������ �������� �����";
			exit(1);
		}
		else {
			cout << "open" << endl;
			fout << buff;
		}

		fout.close();
		string path1 = "file13.txt";
		fstream fin;
		string str, * arr;
		fin.open(path1, fstream::in | fstream::out);
		if (!fin.is_open())
		{
			cout << "\n ������ �������� �����";
			exit(1);
		}
		else {
			getline(fin, str);
			str += ' ';
			int  count = 0;
			int i = 0;
			while (str[i] != '\0') {
				if (str[i] == ' ' || str[i] == '\0')
					count++;
				i++;
			}

			arr = new string[count];
			int  k = 0, u = 0;
			string buf;
			buf = "";
			for (int t = 0, j = 0; t <= i; t++) {
				if (str[t] != ' ') {
					buf += str[t];
				}
				else {
					arr[j] = buf;
					j++;
					buf = "";
				}
			}

			int min = 10e9, index ;
			for (; k < count; k++) {
				
				if (arr[k].length() < min )  
				{
					min = arr[k].length();
					index = k;
				}
			}
			cout << "����� �������� ������: " << arr[index] << endl;
			cout<< "� ������:" << min; 
			delete[] arr;

			fin.close();
		}

	}
	void var8() {
		/*����������� �� ����� FILE1 � ���� FILE2 ��� ������,
		������� �������� ������ 
		���� �����.���������� ���������� �������� � ����� FILE2*/
		char buff[1024];

		fstream f, f2;
		string path1 = "FILE14var_11.txt", path2 = "FILE15var_11.txt", str;
		f.open(path1, fstream::in | fstream::out);
		if (!f.is_open())
			cout << "���� �� ����� ���� ������!\n";
		else
		{

			while (!f.eof()) {
				int symbols = 0;
				while (getline(f, str)) {
					str += ' ';
					int  count = 0,  i = 0;
					
					while (str[i] != '\0') {
						if (str[i] == ' ' || str[i] == '\0') {
							count++;
						}
						i++;
					}
					
					/*arr = new string[count];
					int  k = 0, u = 0;
					bool check = false;
					string buf;
					buf = ' ';
					for (int t = 0, j = 0; t <= i; t++) {
						if (str[t] != ' ') {
							buf += str[t];
						}
						else {
							arr[j] = buf;
							j++;
							buf = ' ';
						}
					}*/


					if (count == 1) {
						symbols += i - count;
					 
 						f2.open(path2, fstream::in | fstream::out | fstream::app);
						
								if (!f2.is_open()) {
									cout << "Fail" << endl;
								}
								else {
									str += '\n';
									f2 << str;
									str = "";
								}
						f2.close();
					}
					
					/*delete[] arr;*/
					
				}cout << "���-�� �������� � FILE2 = " << symbols << endl;
			}
			f.close();
			
		}
	}