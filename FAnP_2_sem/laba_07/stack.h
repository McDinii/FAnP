#pragma once
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