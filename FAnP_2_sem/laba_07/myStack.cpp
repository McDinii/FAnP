#include <iostream>
#include <fstream>
#include "myStack.h"
using namespace std;
int len=0; 
char arr[100];

void push(char x, Stack*& myStk)   //Добавление элемента х в стек	
{
	Stack* e = new Stack;    //выделение памяти для нового элемента
	e->data = x;             //запись элемента x в поле data 
	e->next = myStk;         //перенос вершины на следующий элемент 
	myStk = e; 
	len++;						//сдвиг вершины на позицию вперед
}

void del(Stack*& myStk) {
	Stack* del = myStk;

	char check[80];
	if (del == NULL)
		cout << "Стек пуст!" << endl;
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
					cout << "Повторился: " << arr[k] << endl;
					delete del;
					
				}
			}
			myStk = myStk->next;
			j++;
	}
	delete del;
}

char pop(Stack*& myStk)   //Извлечение (удаление) элемента из стека
{
	len--;
	if (myStk == NULL)
	{
		cout << "Стек пуст!" << endl;
		return -1;               //если стек пуст - возврат (-1) 
	}
	else
	{
		Stack* e = myStk;     //е-переменная для хранения адреса элемента
		char x = myStk->data;  //запись элемента из поля data в перем. x 
		if (myStk)
			myStk = myStk->next;   //перенос вершины
		delete e;
		return x;
	}
}

void toFile(Stack*& myStk) //Запись в файл
{
	Stack* e = myStk;
	Stack buf;
	ofstream frm("mStack.dat");
	if (frm.fail())
	{
		cout << "\n Ошибка открытия файла";
		exit(1);
	}
	while (e)
	{
		buf = *e;
		frm.write((char*)&buf, sizeof(Stack));
		e = e->next;
	}
	frm.close();
	cout << "Стек записан в файл mStack.dat\n";
}

void fromFile(Stack*& myStk)          //Считывание из файла
{
	Stack buf, * p = nullptr, * e = nullptr;
	ifstream frm("mStack.dat"); //Лох дима 
	if (frm.fail())
	{
		cout << "\n Ошибка открытия файла";
		exit(1);
	}
	frm.seekg(0); // уст позиции в файле
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
	cout << "\nСтек считан из файла mStack.dat\n\n";
}

void show(Stack*& myStk)  //Вывод стека с очисткой
{
	if (myStk == NULL)
		cout << "Стек пуст!" << endl;
	while (myStk != NULL)
		cout << pop(myStk) << " ";
	cout << endl;
}
