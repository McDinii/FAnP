#include <iostream>
#include <fstream>
#include "myStack.h"
using namespace std;
int len=0; 
char arr[100];

void push(char x, Stack*& myStk)   //���������� �������� � � ����	
{
	Stack* e = new Stack;    //��������� ������ ��� ������ ��������
	e->data = x;             //������ �������� x � ���� data 
	e->next = myStk;         //������� ������� �� ��������� ������� 
	myStk = e; 
	len++;						//����� ������� �� ������� ������
}

void del(Stack*& myStk) {
	Stack* del = myStk;

	char check[80];
	if (del == NULL)
		cout << "���� ����!" << endl;
	int i = 0;
	
	while (del != NULL) {
		arr[i] = del->data;
		del = del->next;
		i++;
	}
	del = myStk;
	int j = 0; 
	while (del->next != NULL) {
			for (int k = j + 1; k < len; k++) {
				if (arr[k] == arr[j]) {
					cout << "����������: " << arr[k] << endl;
					delete del;
					
				}
			}
			myStk = myStk->next;
			j++;
	}
	delete del;
}

char pop(Stack*& myStk)   //���������� (��������) �������� �� �����
{
	len--;
	if (myStk == NULL)
	{
		cout << "���� ����!" << endl;
		return -1;               //���� ���� ���� - ������� (-1) 
	}
	else
	{
		Stack* e = myStk;     //�-���������� ��� �������� ������ ��������
		char x = myStk->data;  //������ �������� �� ���� data � �����. x 
		if (myStk)
			myStk = myStk->next;   //������� �������
		delete e;
		return x;
	}
}

void toFile(Stack*& myStk) //������ � ����
{
	Stack* e = myStk;
	Stack buf;
	ofstream frm("mStack.dat");
	if (frm.fail())
	{
		cout << "\n ������ �������� �����";
		exit(1);
	}
	while (e)
	{
		buf = *e;
		frm.write((char*)&buf, sizeof(Stack));
		e = e->next;
	}
	frm.close();
	cout << "���� ������� � ���� mStack.dat\n";
}

void fromFile(Stack*& myStk)          //���������� �� �����
{
	Stack buf, * p = nullptr, * e = nullptr;
	ifstream frm("mStack.dat"); //��� ���� 
	if (frm.fail())
	{
		cout << "\n ������ �������� �����";
		exit(1);
	}
	frm.seekg(0); // ��� ������� � �����
	frm.read((char*)&buf, sizeof(Stack));
	while (!frm.eof())
	{
		push(buf.data, e);
		frm.read((char*)&buf, sizeof(Stack));
	}
	frm.close();
	while (e != NULL)
	{
		buf.data = pop(e);
		push(buf.data, p);
		myStk = p;
	}
	cout << "\n���� ������ �� ����� mStack.dat\n\n";
}

void show(Stack*& myStk)  //����� ����� � ��������
{
	if (myStk == NULL)
		cout << "���� ����!" << endl;
	while (myStk != NULL)
		cout << pop(myStk) << " ";
	cout << endl;
}
