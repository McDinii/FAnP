////15 var
#include <iostream>
#include <tchar.h>
#include "laba_08.h"
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	Queue* begin = NULL, *end, *t;
	t = new Queue;
	char p;
	int max_size, choice;
	int current_size = 0;
	cout << "\n������� ������������ ������ �������="; cin >> max_size;
	cout << "������� ������ ������� �������= "; cin >> p;
	t->info = p;
	t->next = NULL;
	begin = end = t;
	char stndrt;
	cout << "Enter the standart= "; cin >> stndrt;
	cout << endl;
	for (;;)
	{
		cout << "�������� �������:" << endl;
		cout << "1 - ���������� �������� � �������" << endl;
		cout << "2 - ����� �������" << endl;
		cout << "3 -������ ������� " << endl;
		cout << "4 -�������� n ���������" << endl;
		cout << "5 - �������� ��������� ������� " << endl;
		cout << "6 - �����" << endl;
		
		cin >> choice;
		switch (choice)
		{

		case 1:
			if (current_size < max_size) {
				cout << "Enter symbol= ";
				cin >> p;
				if (p == stndrt) {
					int todel = 2;
					create(&begin, &end, p);
					del3(&begin, todel);
				}
				else {
					create(&begin, &end, p );
				}
				current_size++;
			}
			
			break;
		case 2:
			cout << "\n�������� �������: \n";
			if (begin == NULL)
				cout << "��� ���������" << endl;
			else
				view(begin);
			break;
		case 3:
			if (begin == NULL)
				cout << "��� ���������" << endl;
			else
				size(begin);
			break;
		case 4:
			del3(&begin, 0);
			break;
		case 5:
			delAll(&begin);
			break;
		case 6:
			return 0;
			break;
		}
	}
	return 0;
}