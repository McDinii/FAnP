//main

//#include <stdio.h>
//#include <iostream>
//#include <cmath>
//using namespace std;
//
//float  t_4(int n, float x)
//{	
//	
//	if (n == 1){
//		return 	 cos(x);
//	}
//	else {
//		return  cos(n * x)+ t_4(n - 1, x) ;
//	}
//
//}
//int  t_5(int x) {
//	
//		if (x > 100) {
//			return x+10;
//		}
//		else {
//			return t_5(t_5(x+4));
//		}
//}
//int main(void)
//{
//	float y = 0;
//	int check = 1;
//	setlocale(LC_CTYPE, "Rus");
//	int choice; int n; float  x; int x2;
//	cout << endl;
//	cout << "1. number 4 " << endl;
//	cout << "11. number 5" << endl;
//	cout << "8. �����" << endl;
//	cout << endl;
//	for (;;)
//	{
//		cout << endl;
//		cout << "��� �����: ";
//		cin >> choice;
//		switch (choice)
//		{
//		case 1:
//			cout << "ENter n" << endl;
//			cin >> n;
//			cout << "ENter x" << endl;
//			cin >> x; 
//			cout << t_4(n,x);
//			break;
//		case 11: {
//			cout << "ENter x" << endl;
//			cin >> x2;
//			cout << t_5(x2) << endl;
//			break; }
//		case 8: exit(0);
//		default: exit(1);
//		}
//	}
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

//2. ������� ������� � ������������� �������, �
//��������� �� � ����������. ��������� �����������
//����� ��������� � ������� ���, ����� � �� ������
//��� ���������� ���������� �������.
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

//3. ���������� ���������� ����� f, ����������� �� ������,
//���������� � ��������� ���� g, �������� ��� ���� � �����
//������ ������ ��� �������� � ��� ����� (� �����������
//��������� ��������� �������, ��� ����� ����, ��� � �����
//��������� ����� ������). ������������ �������.
//
//#include <iostream>
//#include <sstream>
//#include <fstream>
//#include <string>
//#include <cctype>
//#include <iomanip>
//using namespace std;
//struct Node1 {
//	char Letter;
//	Node1* next;
//};
//
//struct Queue1 {
//	Node1* head;
//	Node1* tail;
//};
//
//struct Node2 {
//	char Number;
//	Node2* next;
//};
//
//struct Queue2 {
//	Node2* head;
//	Node2* tail;
//};
//void CreateQueue1(Queue1* Liter) {
//	Liter->head = new Node1();
//	Liter->head->next = NULL;
//	Liter->tail = Liter->head;
//}
//
//void CreateQueue2(Queue2* Number) {
//	Number->head = new Node2();
//	Number->head->next = NULL;
//	Number->tail = Number->head;
//}
//void symbol(Queue1* Liter, Queue2* Number) {
//	ifstream file("f.txt");
//	string Temp;
//	char Symbol;
//	int TempInt;
//	getline(file, Temp);
//	cout << "�������� ������:" << Temp << endl;
//	for (int i = 0; i < Temp.length(); i++) {
//		Symbol = Temp[i];
//		if ((Symbol >= 97 && Symbol <= 122) || (Symbol >= 65 && Symbol <= 90)) {
//			Liter->tail->next = new Node1;
//			Liter->tail = Liter->tail->next;
//			Liter->tail->Letter = Symbol;
//			Liter->tail->next = NULL;
//		}
//		if (Symbol >= 48 && Symbol <= 57) {
//			Number->tail->next = new Node2();
//			Number->tail = Number->tail->next;
//			Number->tail->Number = Symbol;
//			Number->tail->next = NULL;
//		}
//	}
//	Node1* Temp1 = Liter->head->next;
//	Node2* Temp2 = Number->head->next;
//	cout << "�����:" << endl;
//	while (Temp1) {
//		cout << Temp1->Letter;
//		Temp1 = Temp1->next;
//	}
//	cout << endl;
//	cout << "�����:" << endl;
//	while (Temp2) {
//		cout << Temp2->Number;
//		Temp2 = Temp2->next;
//	}
//	cout << endl;
//	file.close();
//
//	ofstream File("g.txt");
//	Temp1 = Liter->head->next;
//	Temp2 = Number->head->next;
//	while (Temp1) {
//		File << Temp1->Letter;
//		Temp1 = Temp1->next;
//	}
//	while (Temp2) {
//		File << Temp2->Number;
//		Temp2 = Temp2->next;
//	}
//	File.close();
//	cout << "������ �������� � ����" << endl;
//}
//int main() {
//	setlocale(LC_ALL, "rus");
//	Queue1 Q1;
//	Queue2 Q2;
//	CreateQueue1(&Q1);
//	CreateQueue2(&Q2);
//	symbol(&Q1, &Q2);
//}