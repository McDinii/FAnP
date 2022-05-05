//1. ���� �������� a ���������� ���� �� ������� ���������� ��������.
//�������� �  ���������� �������� b, ��������� �� �������� ������ �������� �������� a,
//���������� � �������� �������, ����� ������� ���� ������� ������ �������� �� - ������ a,
//����� ���������� � �������� �������(��������, ��� � = ������� b ������ ���� ����� �������).
//2. ������� ���� � ������������� �������������� �����.
//��������� ��� ������� �����, ��������� �� �����.
//������������ �� ������ ���������� �����.
//������� ����� � ����� ��������� ����� �������� ������ �����.

#include <iostream>
#include <cmath>
#include <string>
#include <fstream>

using namespace std;
struct stack
{
	int ind;
	stack* next;
};
struct Stack
{
	char data;     //�������������� �������
	Stack* next;	 //��������� �� ��������� �������
	Stack* head;	 //��������� �� ������ 
};
void show(Stack*& myStk);
char pop(Stack*& myStk);
void push(char x, Stack*& myStk);
void toFile(Stack*& myStk);
void fromFile(Stack*& myStk);
void del(Stack*& myStk);
void length(stack** el, int n)
{
	stack* i = new stack;
	i->ind = n;
	i->next = *el;
	*el = i;
}
void out(stack* el)
{
	stack* i = el;
	if (el == NULL)
	{
		cout << "������ ����";
		return;
	}
	while (i != NULL)
	{
		cout << i->ind << endl;
		i = i->next;
	}
}
int main()
{
	setlocale(LC_CTYPE, "Russian");
	int choice2;
	for (;;) {
		cout << "�������� �������:" << endl;
		cout << "7 - dop1" << endl;
		cout << "77 - dop2" << endl;
		cout << "0 - exit" << endl;

		cin >> choice2;

		switch (choice2) {
		case 7: {char str[20];
			int dl;
			Stack* myStk = new Stack; //��������� ������ ��� �����
			myStk->head = NULL;       //������������� ������� �������� 
			while (strlen(str) % 2 != 0) {
				cout << "������ � ������ ����������� ��������" << endl;
				cin >> str;
			}
			dl = strlen(str);
			for (int i = (dl / 2); i < dl; i++) {
				push(str[i], myStk);
			}
			for (int i = 0; i < (dl / 2); i++) {
				push(str[i], myStk);
			}
			show(myStk);
			break; 
		}
		case 77: {
			int min = 256, j = 0;
			setlocale(LC_CTYPE, "Russian");
			stack* el = NULL;
			ifstream file1("5.txt");
			char str[255];
			int n;
			while (!file1.eof())
			{
				file1.getline(str, 255);
				n = strlen(str);
				length(&el, n);
				if (n < min)
				{
					min = n;
					j++;
				}
			}
			file1.close();
			out(el);
			cout << endl;
			cout << "����� ����� ��������� ������:" << min << endl;
			cout << "Ÿ �����:" << j << endl;
			break; };

		case 0:return 0; break;
		}
	}
}