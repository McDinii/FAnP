#include <iostream>
#include "myStack.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	int choice; char x;
	Stack* myStk = new Stack; //��������� ������ ��� �����
	myStk = NULL;             //������������� ������� ��������	
	for (;;)
	{
		cout << "�������� �������:" << endl;
		cout << "1 - ���������� �������� � ����" << endl;
		cout << "2 - ���������� �������� �� �����" << endl;
		cout << "3 - ������ � ����" << endl;
		cout << "4 - ������ �� �����" << endl;
		cout << "5 - ����� ����� � ��������" << endl;
		cout << "6 - �������� �������������� ��������" << endl;
		cout << "7 - dop1" << endl;
		cout << "8 - �����" << endl;
		cin >> choice;
		switch (choice)
		{
		case 1: cout << "������� �������: " << endl;
			cin >> x;
			push(x, myStk); break;
		case 2: x = pop(myStk);
			if (x != -1)
				cout << "����������� �������: " << x << endl;
			break;
		case 3: toFile(myStk);  break;
		case 4: fromFile(myStk); break;
		case 5: cout << "���� ����: " << endl;
			show(myStk); break;
		case 6:
			del(myStk); break;
		case 7: {
			setlocale(LC_ALL, "Rus");
			char a[20];
			char b[20] = "";
			cout << "������� ������ � ������ ����������� ���������: "; cin >> a;
			if (strlen(a) % 2 != 0)
			{
				cout << "----" << endl;
			}
			else
			{
				int j = 1;
				for (int i = 0; i < strlen(a); i++)
				{
					if (i < strlen(a) / 2)
					{
						b[i] = a[strlen(a) / 2 - i - 1];
					}
					else
					{
						b[i] = a[strlen(a) - j];
						j++;
					}
				}

			}
			cout << b << endl;
		break;
		}
		case 8: return 0; break;
		}
	}
	return 0;
}
