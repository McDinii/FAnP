#include<iostream>
#include<tchar.h>
#include"laba_08.h"
#include<fstream>
#include <string>
using namespace std;

void create(Queue** begin, Queue** end, char p)
{
	Queue* t = new Queue;
	t->next = NULL;
	if (*begin == NULL)
		*begin = *end = t;
	else
	{	
		t->info = p;
		(*end)->next = t;
		*end = t;
	}
}
void view(Queue* begin)
{
	setlocale(LC_CTYPE, "RUSSIAN");
	Queue* t = begin;
	if (t == NULL)
	{
		cout << "Empty\n";
		return;
	}
	else
		while (t != NULL)
		{
			cout << t->info << endl;
			t = t->next;
		}
}
//void etolon(Queue* begin, char stndrt)
//{
//	Queue* t = begin;
//	
//	if (t == NULL)
//	{
//		cout << "Empty\n"; return;
//	}
//	else
//	{
//		stndrt = t->info;
//		while (t != NULL)
//		{
//			if (t->info >= stndrt)
//			{
//				stndrt = t->info;
//			}
//			t = t->next;
//		}
//	}
//	cout << "stndrt element is  = " << stndrt << endl;
//}
void size(Queue* begin)
{
	setlocale(LC_CTYPE, "RUSSIAN");
	Queue* t = begin;
	int sz = 0;
	if (t == NULL)
	{
		cout << "Empty\n";
		return;
	}
	else
		while (t != NULL)
		{
			t->info;
			t = t->next;
			sz++;
		}
	cout << "Size is =" << sz << endl;
}
void del3(Queue** begin, int addit )
{
	Queue* t;
	int check,i = 0;
	if (addit != 0  ){
		check = addit;
		while (*begin != NULL && i != check)
		{
			t = *begin;
			*begin = (*begin)->next;
			delete t;
			i++;
		}
	}
	else {
		cout << "Enter how much to delete= "; cin >> check; cout << endl;
		while (*begin != NULL && i != check)
		{
			t = *begin;
			*begin = (*begin)->next;
			delete t;
			i++;
		}
	}

}
void delAll(Queue** begin)
{
	Queue* t;
	while (*begin != NULL)
	{
		t = *begin;
		*begin = (*begin)->next;
		delete t;
	}
}