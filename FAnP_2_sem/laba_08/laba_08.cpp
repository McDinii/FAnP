////15 var
//#include <iostream>
//#include <tchar.h>
//#include "laba_08.h"
//#include <fstream>
//#include <string>
//#include <iomanip>
//using namespace std;
//
//int main()
//{
//	setlocale(LC_ALL, "Rus");
//	Queue* begin = NULL, *end, *t;
//	t = new Queue;
//	char p;
//	int max_size, choice;
//	int current_size = 0;
//	cout << "\n������� ������������ ������ �������="; cin >> max_size;
//	cout << "������� ������ ������� �������= "; cin >> p;
//	t->info = p;
//	t->next = NULL;
//	begin = end = t;
//	char stndrt;
//	cout << "Enter the standart= "; cin >> stndrt;
//	cout << endl;
//	for (;;)
//	{
//		cout << "�������� �������:" << endl;
//		cout << "1 - ���������� �������� � �������" << endl;
//		cout << "2 - ����� �������" << endl;
//		cout << "3 -������ ������� " << endl;
//		cout << "4 -�������� n ���������" << endl;
//		cout << "5 - �������� ��������� ������� " << endl;
//		cout << "6 - �����" << endl;
//		
//		cin >> choice;
//		switch (choice)
//		{
//
//		case 1:
//			if (current_size < max_size) {
//				cout << "Enter symbol= ";
//				cin >> p;
//				if (p == stndrt) {
//					int todel = 2;
//					create(&begin, &end, p);
//					del3(&begin, todel);
//				}
//				else {
//					create(&begin, &end, p );
//				}
//				current_size++;
//			}
//			
//			break;
//		case 2:
//			cout << "\n�������� �������: \n";
//			if (begin == NULL)
//				cout << "��� ���������" << endl;
//			else
//				view(begin);
//			break;
//		case 3:
//			if (begin == NULL)
//				cout << "��� ���������" << endl;
//			else
//				size(begin);
//			break;
//		case 4:
//			del3(&begin, 0);
//			break;
//		case 5:
//			delAll(&begin);
//			break;
//		case 6:
//			return 0;
//			break;
//		}
//	}
//	return 0;
//}

////dop1

///*1. � ���������� 1 �������� ������, � ������� 
//����������� ������� �� ������ ������������ ������
//� ������������ ����������. �� ������ ������� �������
//����������� �������, ������� ������������ ������� 
//� ������ ����������.*/
#include<iostream>
using namespace std;
struct Item
{
	int data;
	Item* next;
};
Item* head, * tail;

bool isNull(void)    //�������� �� �������
{
	return (head == nullptr);
}
void deletFirst()   //���������� �������� �� ������
{
	if (isNull())
		cout << "������� �����" << endl;
	else
	{
		Item* p = head;
		head = head->next;
		delete p;
	}
}
void deletlast()   //���������� �������� �� ������
{
	if (isNull())
		cout << "������� �����" << endl;
	else
	{
		Item* p;
		tail->data = NULL;

	}
}
void getFromHead()  //��������� �������� �� ������
{
	if (isNull())
		cout << "������� �����" << endl;
	else
		cout << "������ = " << head->data << endl;
}
void getFromTail()  //��������� �������� �� �����
{
	if (isNull())
		cout << "������� �����" << endl;
	else
		cout << "����� = " << tail->data << endl;
}
void insertToQueue(int x)  //���������� �������� � ������� 
{
	Item* p = new Item;      //����� ��������� 
	p->data = x;
	p->next = nullptr;
	Item* v = new Item;      //��������� ��� ������ �����
	Item* p1 = new Item;
	Item* p2 = new Item;
	int i = 0;               //������ 
	if (isNull())
		head = tail = p;
	else
	{
		p2 = head; p1 = head; // !!!����� ����������� ���� LiFo ���������� ����� ��������� p2 ��� ������, FiFo ��������
		while (p1 != nullptr)  //���� ������� �� ����������
		{
			if (i == 1) //����� ���������� ��� ���������� LiFo
			{
				if (i == 1)
				{
					if (x > p1->data)  //����� ������, ��� � �������
					{
						v->data = x;
						v->next = p1;
						p2->next = v;
						return;
					}
					if (x == p1->data)
					{
						v->data = x;
						v->next = p1->next;
						p1->next = v;
						return;
					}
					p2 = p2->next;
				}
				if (x > p1->data)
				{
					v->data = x;
					v->next = p1;
					head = v;
					return;
				}
				if (p1->next == nullptr)
				{
					v->data = x;
					v->next = nullptr;
					tail->next = v;
					tail = v;
					return;
				}
				i = 1;

				p1 = p1->next;      // ��������� �����
			}
			else // else ����������� ��� ���������� ������� LiFo
			{
				if (x >= p1->data)
				{
					v->data = x;
					v->next = p2;
					head = v;
					return;
				}
			}
			p1 = p1->next; //����� ���������� ��� ���������� LiFo
			i = 1;
		}
		if (p1 == NULL) // ��������� ��� ��������� LiFo
		{
			v->data = x;
			v->next = tail;
			p2->next = v;
		}
	}
}

void printQueue()             //����� �������
{
	int g;
	Item* p = new Item;
	if (isNull())
		cout << "������� �����" << endl;
	else
	{
		cout << "������� = ";
		p = head;
		while (!isNull())
		{
			if (p != nullptr)
			{
				g = p->data;
				if (g == 0) {

				}
				else { cout << p->data << " "; cout << "->"; }
				p = p->next;
			}
			else
			{
				cout << "NULL" << endl;
				return;
			}
		}
	}
}

void clrQueue()           //������� �������
{
	while (!isNull()) deletFirst();
}
int main()
{
	setlocale(LC_CTYPE, "Russian");
	int i = 1, choice = 1, z; head = nullptr;  tail = nullptr;
	while (choice != 0)
	{
		cout << "1 - �������� �������" << endl;
		cout << "2 - �������� ������� � ������" << endl;
		cout << "3 - ������� ������� � ������" << endl;
		cout << "4 - ������� ��������" << endl;
		cout << "5 - �������� �������" << endl;
		cout << "6 - �������� ������� � �����" << endl;
		cout << "0 - �����" << endl;
		cout << "�������� ��������  ";  cin >> choice;
		switch (choice)
		{
		case 1: cout << "������� �������:  "; cin >> z;
			insertToQueue(z); printQueue();  break;
		case 2: getFromHead(); break;
		case 3: deletFirst();  break;
		case 4: printQueue();  break;
		case 5: clrQueue();    break;
		case 6: getFromTail(); break;
		case 7: deletlast(); break;
		}
	}
	return 0;
}



//dop2
/*2. ������� ������� � ������������� �������, �
��������� �� � ����������. ��������� �����������
����� ��������� � ������� ���, ����� � �� ������
��� ���������� ���������� �������.*/

//#include <iostream>
//#include <iomanip>
//
//using namespace std;
//
//struct Node {
//	float Number;
//	Node* next;
//};
//
//struct Queue {
//	int size = 0;
//	Node* head;
//	Node* tail;
//};
//void CreateQueue(Queue* Q) {
//	Q->head = new Node();
//	Q->head->next = NULL;
//	Q->tail = Q->head;
//	Q->size = 0;
//}
//void AddElem(Queue* Q) {
//	float newElem;
//	cout << "������� �������:" << endl;
//	cin >> newElem;
//	cout << endl;
//	Q->tail->next = new Node();
//	Q->tail = Q->tail->next;
//	Q->tail->Number = newElem;
//	Q->tail->next = NULL;
//	Q->size++;
//}
//int OutQueue(Queue* Q) {
//	if (Q->head == Q->tail) {
//		cout << "������� �����" << endl;
//		return 0;
//	}
//	else {
//		Node* Temp = Q->head->next;
//		cout << endl;
//		while (Temp) {
//			cout << Temp->Number << endl;
//			Temp = Temp->next;
//		}
//	}
//}
//int Shift(Queue* Q) {
//	if (Q->head == Q->tail) {
//		cout << "������� �����" << endl;
//		return 0;
//	}
//	else {
//		float max = 0;
//		Node* Temp = Q->head->next;
//		while (Temp) {
//			if (Temp->Number > max)
//				max = Temp->Number;
//			Temp = Temp->next;
//		}
//		cout << "���������� ��������:" << max << endl;
//		cout << "������� �� �������:" << endl;
//		Temp = Q->head;
//		Temp->Number = max;
//		cout << Temp->Number << endl;
//		while (Temp) {
//			if (Temp->Number != max) cout << Temp->Number << endl;
//			Temp = Temp->next;
//		}
//		cout << endl << endl;
//	}
//}
//
//int main()
//{
//	setlocale(LC_CTYPE, "Russian");
//	Queue t;
//	int choice;
//	CreateQueue(&t);
//	for (;;)
//	{
//		cout << "�������� �������:" << endl;
//		cout << "1 - ���������� �������� � �������" << endl;
//		cout << "2 - ����� �������" << endl;
//		cout << "3 - ����������� �����" << endl;
//		cout << "4 - �����" << endl;
//		cin >> choice;
//		switch (choice)
//		{
//
//		case 1:
//			AddElem(&t);
//			break;
//		case 2:
//			OutQueue(&t);
//			break;
//		case 3:
//			Shift(&t);
//			break;
//		case 4:
//			return 0;
//			break;
//
//		}
//	}
//}

//dop3
/*3. ���������� ���������� ����� f, ����������� �� ������,
���������� � ��������� ���� g, �������� ��� ���� � �����
������ ������ ��� �������� � ��� ����� (� �����������
��������� ��������� �������, ��� ����� ����, ��� � �����
��������� ����� ������). ������������ �������.*/

