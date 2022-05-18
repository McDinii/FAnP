//main

//#include <iostream>
//#include <fstream>
//using namespace std;
//const unsigned int NAME_SIZE = 30;
//const unsigned int CITY_SIZE = 20;
//
//struct Address
//{
//	char name[NAME_SIZE];
//	char city[CITY_SIZE];
//	Address* next;
//	Address* prev;
//};
//
////-----------------------------------------------------------
//void insert(Address* e, Address** phead, Address** plast) //���������� � ����� ������
//{
//	Address* p = *plast;
//	if (*plast == NULL)
//	{
//		e->next = NULL;
//		e->prev = NULL;
//		*plast = e;
//		*phead = e;
//		return;
//	}
//	else
//	{
//		p->next = e;
//		e->next = NULL;
//		e->prev = p;
//		*plast = e;
//	}
//}
//
////-----------------------------------------------------------
//Address* setElement() // �������� �������� � ���� ��� �������� � ����������
//{
//	Address* temp = new Address();
//	if (!temp)
//	{
//		cerr << "������ ��������� ������ ������";
//		return NULL;
//	}
//	cout << "������� ���: ";
//	cin >> temp->name;
//	cout << "������� �����: ";
//	cin >> temp->city;
//	temp->next = NULL;
//	temp->prev = NULL;
//	return temp;
//}
//
////-----------------------------------------------------------
//void outputList(Address** phead, Address** plast) //����� ������ �� �����
//{
//	Address* t = *phead;
//	while (t)
//	{
//		cout << t->name << ' ' << t->city << endl;
//		t = t->next;
//	}
//	cout << "" << endl;
//}
////-----------------------------------------------------------
//void find(char name[NAME_SIZE], Address** phead) // ����� ����� � ������
//{
//	Address* t = *phead;
//	while (t)
//	{
//		if (!strcmp(name, t->name)) break;
//		t = t->next;
//	}
//	if (!t)
//		cerr << "��� �� �������" << endl;
//	else
//		cout << t->name << ' ' << t->city << endl;
//}
////-----------------------------------------------------------
//void delet(char name[NAME_SIZE], Address** phead, Address** plast)// �������� �������� �� �����
//{
//	struct Address* t = *phead;
//	while (t)
//	{
//		if (!strcmp(name, t->name)) break;
//		t = t->next;
//	}
//	if (!t)
//		cerr << "��� �� �������" << endl;
//	else
//	{
//		if (*phead == t)
//		{
//			*phead = t->next;
//			if (*phead)
//				(*phead)->prev = NULL;
//			else
//				*plast = NULL;
//		}
//		else
//		{
//			t->prev->next = t->next;
//			if (t != *plast)
//				t->next->prev = t->prev;
//			else
//				*plast = t->prev;
//		}
//		delete t;
//		cout << "������� ������" << endl;
//	}
//}
////-----------------------------------------------------------
//void writeToFile(Address** phead) //������ � ����
//{
//	struct Address* t = *phead;
//	ofstream file1("Lip.txt");
//	if (file1.fail())
//	{
//		cerr << "���� �� �����������" << endl;
//		exit(1);
//	}
//	cout << "���������� � ����" << endl;
//	while (t)
//	{
//		file1 << t->name << " " << t->city << endl;
//		t = t->next;
//	}
//	file1.close();
//}
////---------------------------------------------------------------
//void fromFile(Address** phead)
//{
//
//	char buf[256];
//	ifstream file2("Lip.txt");
//	if (file2.fail())
//	{
//		cout << "\n ������ �������� �����";
//		exit(1);
//	}
//	while (!file2.eof())
//	{
//		file2.getline(buf, 256);
//		if (strlen(buf))
//			cout << " " << buf;
//		cout << endl;
//	}
//
//	file2.close();
//}
//void delm(Address** phead, Address** plast,Address** phead2, Address** plast2)
//{
//
//	Address* t = *plast;
//	Address* t2 = *phead2;
//	t2->prev = t;
//	t->next = t2;
//	while (t) {
//		if (t->next == NULL) {
//			cout << t->city << endl;
//		}
//		t = t->next;
//	}
//
//
//}
//int main()
//{
//	Address* head = NULL;
//	Address* last = NULL;
//	Address* head2 = NULL;
//	Address* last2 = NULL;
//	setlocale(LC_CTYPE, "Rus");
//	int choice;
//	char s[80]; int c;
//	cout << endl;
//	cout << "1. ���� � ������" << endl;
//	cout << "11. ���� � ������ L" << endl;
//	cout << "2. �������� �����" << endl;
//	cout << "3. ����� �� ����� ������" << endl;
//	cout << "4. �����" << endl;
//	cout << "5. � ����" << endl;
//	cout << "6. �� �����" << endl;
//	cout << "7. ���������� � ����� ������ ���� ��������� ������ L" << endl;
//	cout << "� ����� �������� ���������� �������� ��������� ������" << endl;
//	cout << "8. �����" << endl;
//	cout << endl;
//	for (;;)
//	{
//		cout << "��� �����: ";
//		cin >> choice;
//		switch (choice)
//		{
//		case 1: insert(setElement(), &head, &last);
//			
//			break;
//		case 11:
//			insert(setElement(), &head2, &last2); break;
//		case 2: { char dname[NAME_SIZE];
//			cout << "������� ���: ";
//			cin >> dname;
//			delet(dname, &head, &last);
//		}
//			  break;
//		case 3: outputList(&head, &last);
//			break;
//		case 4: { char fname[NAME_SIZE];
//			cout << "������� ���: ";
//			cin >> fname;
//			find(fname, &head);
//		}
//			  break;
//		case 5: {
//			writeToFile(&head);
//		}
//			  break;
//		case 6: {
//			fromFile(&head);
//		}
//			  break;
//		case 7: {
//			delm(&head, &last,&head2,&last2);
//		}
//			  break;
//		case 8: exit(0);
//		default: exit(1);
//		}
//	}
//	return 0;
//}


/*1 ���
��������� ������, ���������� �������
deleteList (�������� ������) � �������
countList (������� ����� ��������� ������).
� ���������� ������ �������� ����������
� ������������ �� ����� ��������� �� ������������
������ � 4. ������� ��������� � ���� ����.
������� �����. �.�.�., ��� ����� (�������,
�������� � �. �.), ����� �����, �����
�� �����, ���� ��������-�� ���������.
����� �� ������ �����.
*/

//#include <iostream>
//#include "List.h"
//using namespace std;
//void insert(address* e, address** phead, address** plast)
//{
//	address* p = *plast;
//	if (*plast == NULL)
//	{
//		e->next = NULL;
//		e->prev = NULL;
//		*plast = e;
//		*phead = e;
//		return;
//	}
//	else
//	{
//		p->next = e;
//		e->next = NULL;
//		e->prev = p;
//		*plast = e;
//	}
//}
////-----------------------------------------------------------
//address* setelement()
//{
//	address* temp = new address();
//	if (!temp)
//	{
//		cerr << "������ ��������� ������ ������";
//		return NULL;
//	}
//	cout << "������� �������: ";
//	cin >> temp->surname;
//	cout << "������� ���: ";
//	cin >> temp->name;
//	cout << "������� ��������: ";
//	cin >> temp->parentname;
//	cout << "������� ��� �����: ";
//	cin >> temp->type;
//	cout << "������� ����� �����: ";
//	cin >> temp->number;
//	cout << "������� ����� �� �����: ";
//	cin >> temp->sum;
//	cout << "������� ���� ���������� ���������: ";
//	cin >> temp->date;
//	temp->next = NULL;
//	temp->prev = NULL;
//	return temp;
//}
//void outputlist(address** phead, address** plast)
//{
//	address* t = *phead;
//	if (t == NULL)
//	{
//		cout << "������ ����!" << endl;
//	}
//	while (t)
//	{
//		cout << "�������:" << t->surname << endl;
//		cout << "���:" << t->name << endl;
//		cout << "��������:" << t->parentname << endl;
//		cout << "��� �����:" << t->type << endl;
//		cout << "����� �����:" << t->number << endl;
//		cout << "����� �� �����:" << t->sum << endl;
//		cout << "���� ���������� ����������:" << t->date << endl;
//		t = t->next;
//	}
//	cout << "" << endl;
//}
//void find(char number[NAME_SIZE], address** phead)
//{
//	address* t = *phead;
//	while (t)
//	{
//		if (!strcmp(number, t->number)) break;
//		t = t->next;
//	}
//	if (!t)
//		cerr << "��� �� �������" << endl;
//	else
//		cout << "�������:" << t->surname << endl;
//	cout << "���:" << t->name << endl;
//	cout << "��������:" << t->parentname << endl;
//	cout << "��� �����:" << t->type << endl;
//	cout << "����� �����:" << t->number << endl;
//	cout << "����� �� �����:" << t->sum << endl;
//	cout << "���� ���������� ����������:" << t->date << endl;
//}
//void countlist(address** phead, address** plast)
//{
//	address* t = *phead;
//	int i = 0;
//	while (t != NULL)
//	{
//		i++;
//		t = t->next;
//	}
//	cout << "���������� ���������=" << i << endl;
//}
//void delall(address** phead, address** plast)
//{
//	address* t = *phead;
//	while (t != NULL)
//	{
//
//		if (*phead == t)
//		{
//			*phead = t->next;
//			if (*phead)
//				(*phead)->prev = NULL;
//			else
//				*plast = NULL;
//		}
//		else
//		{
//			t->prev->next = t->next;
//			if (t != *plast)
//				t->next->prev = t->prev;
//			else
//				*plast = t->prev;
//		}
//		t = t->next;
//		delete t;
//	}
//	cout << "������ ������!" << endl;
//}
//int main()
//{
//	address* head = NULL;
//	address* last = NULL;
//	setlocale(LC_CTYPE, "rus");
//	int choice;
//	char s[80]; int c;
//	cout << endl;
//	cout << "1. ���� ��������" << endl;
//	cout << "2. ����� �� �����" << endl;
//	cout << "3. �����" << endl;
//	cout << "4. ���������� ���������" << endl;
//	cout << "5. �������� ������" << endl;
//	cout << "6. �����" << endl;
//	cout << endl;
//	for (;;)
//	{
//		cout << "��� �����: ";
//		cin >> choice;
//		switch (choice)
//		{
//		case 1: insert(setelement(), &head, &last);
//			break;
//		case 2: outputlist(&head, &last);
//			break;
//		case 3: { char fnumber[NAME_SIZE];
//			cout << "������� �����: ";
//			cin >> fnumber;
//			find(fnumber, &head);
//		}
//			  break;
//		case 4: {
//
//			countlist(&head, &last);
//		}
//			  break;
//		case 5: {
//			delall(&head, &last);
//		}
//			  break;
//		case 6: exit(0);
//		default: exit(1);
//		}
//	}
//	return 0;
//}


//=======================================================



/////*2
////������ ������� ������ ��������� �������� �������,
////���, ��������, ��� ��������, ����, ����� ������, 
////������ �� ���� ���������. ����������� ��������� 
////�� �����, ������ �������� ������ ����� ������ 
////������������� � �������-��� �������. ����� �������
////���� ������ ������ �� ������� ��������. ���������� 
////������ �������� �������� � ����-�� �������� ���������. 
////��� ������ ������ ����� ������� � ����� ������
////������������ ��������.*/
////
//

//#include <iomanip>
//#include "List1.h"
//#include <iostream>
//using namespace std;
//void insert(Address* e, Address** phead, Address** plast)
//{
//	Address* p = *plast;
//	if (*plast == NULL)
//	{
//		e->next = NULL;
//		e->prev = NULL;
//		*plast = e;
//		*phead = e;
//		return;
//	}
//	else
//	{
//		p->next = e;
//		e->next = NULL;
//		e->prev = p;
//		*plast = e;
//	}
//}
////-----------------------------------------------------------
//Address* setElement()
//{
//	Address* temp = new Address();
//	if (!temp)
//	{
//		cerr << "������ ��������� ������ ������";
//		return NULL;
//	}
//	cout << "������� �������: ";
//	cin >> temp->surname;
//	cout << "������� ���: ";
//	cin >> temp->name;
//	cout << "������� ��������: ";
//	cin >> temp->parentname;
//	cout << "������� ���� ��������: " << endl;;
//	cout << "������� ����:";
//	cin >> temp->day;
//	cout << endl;
//	cout << "������� �����:";
//	cin >> temp->month;
//	cout << endl;
//	cout << "������� ���:";
//	cin >> temp->year;
//	cout << endl;
//	cout << "������� ����� �����: ";
//	cin >> temp->course;
//	cout << "������� ����� ������: ";
//	cin >> temp->group;
//	cout << "������� ������ �� ���������: " << endl;
//	cout << "����������:";
//	cin >> temp->math;
//	cout << endl;
//	cout << "����:";
//	cin >> temp->OAIP;
//	cout << endl;
//	cout << "���������� ����:";
//	cin >> temp->English;
//	cout << endl;
//	cout << "��:";
//	cin >> temp->Yap;
//	cout << endl;
//	cout << "���:";
//	cin >> temp->Kyar;
//	cout << endl;
//	temp->next = NULL;
//	temp->prev = NULL;
//	return temp;
//}
//void outputList(Address** phead, Address** plast)
//{
//	Address* t = *phead;
//	if (t == NULL)
//	{
//		cout << "������ ����!" << endl;
//	}
//	while (t)
//	{
//
//		cout << "--------------------------------------------------" << endl;
//		cout << "�������:" << t->surname << endl;
//		cout << "���:" << t->name << endl;
//		cout << "��������:" << t->parentname << endl;
//		cout << "���� ��������:" << t->day << "." << t->month << "." << t->year << endl;
//		cout << "����:" << t->course << endl;
//		cout << "������:" << t->group << endl;
//		cout << "������:" << endl;
//		cout << "����������:" << t->math << endl;
//		cout << "����:" << t->OAIP << endl;
//		cout << "���������� ����:" << t->English << endl;
//		cout << "��:" << t->Yap << endl;
//		cout << "���:" << t->Kyar << endl;
//		t = t->next;
//
//	}
//}
//void outputFirstCourse(Address** phead, Address** plast)
//{
//	int i = 0;
//	Address* t = *phead;
//	if (t == NULL)
//	{
//		cout << "������ ����!" << endl;
//	}
//	cout << "---------------------�������� 1 �����-------------------" << endl;
//	if (strcmp(t->surname, (t->next)->surname) > 0)
//	{
//		t = t->next;
//		t->next = t->prev;
//		t->prev = t;
//	}
//	while (i != 2)
//	{
//
//
//		if (t->course == 1)
//		{
//			cout << "--------------------------------------------------" << endl;
//			cout << "�������:" << t->surname << endl;
//			cout << "���:" << t->name << endl;
//			cout << "��������:" << t->parentname << endl;
//			cout << "���� ��������:" << t->day << "." << t->month << "." << t->year << endl;
//			cout << "����:" << t->course << endl;
//			cout << "������:" << t->group << endl;
//			cout << "������:" << endl;
//			cout << "����������:" << t->math << endl;
//			cout << "����:" << t->OAIP << endl;
//			cout << "���������� ����:" << t->English << endl;
//			cout << "��:" << t->Yap << endl;
//			cout << "���:" << t->Kyar << endl;
//			t = t->next;
//		}
//		else
//		{
//			t = t->next;
//		}
//
//		i++;
//	}
//}
//void outputSecondCourse(Address** phead, Address** plast)
//{
//	Address* t = *phead;
//	if (t == NULL)
//	{
//		cout << "������ ����!" << endl;
//	}
//	cout << "--------------------�������� 2 �����----------------" << endl;
//	while (t)
//	{
//		if (t->course == 2)
//		{
//			cout << "--------------------------------------------------" << endl;
//			cout << "�������:" << t->surname << endl;
//			cout << "���:" << t->name << endl;
//			cout << "��������:" << t->parentname << endl;
//			cout << "���� ��������:" << t->day << "." << t->month << "." << t->year << endl;
//			cout << "����:" << t->course << endl;
//			cout << "������:" << t->group << endl;
//			cout << "������:" << endl;
//			cout << "����������:" << t->math << endl;
//			cout << "����:" << t->OAIP << endl;
//			cout << "���������� ����:" << t->English << endl;
//			cout << "��:" << t->Yap << endl;
//			cout << "���:" << t->Kyar << endl;
//			t = t->next;
//		}
//		else
//			t = t->next;
//
//	}
//}
//void outputThirdCourse(Address** phead, Address** plast)
//{
//	Address* t = *phead;
//	if (t == NULL)
//	{
//		cout << "������ ����!" << endl;
//	}
//	cout << "--------------------�������� 3 �����----------------" << endl;
//	while (t)
//	{
//		if (t->course == 3)
//		{
//			cout << "--------------------------------------------------" << endl;
//			cout << "�������:" << t->surname << endl;
//			cout << "���:" << t->name << endl;
//			cout << "��������:" << t->parentname << endl;
//			cout << "���� ��������:" << t->day << "." << t->month << "." << t->year << endl;
//			cout << "����:" << t->course << endl;
//			cout << "������:" << t->group << endl;
//			cout << "������:" << endl;
//			cout << "����������:" << t->math << endl;
//			cout << "����:" << t->OAIP << endl;
//			cout << "���������� ����:" << t->English << endl;
//			cout << "��:" << t->Yap << endl;
//			cout << "���:" << t->Kyar << endl;
//			t = t->next;
//		}
//		else
//			t = t->next;
//
//	}
//}
//void outputFourthCourse(Address** phead, Address** plast)
//{
//	Address* t = *phead;
//	if (t == NULL)
//	{
//		cout << "������ ����!" << endl;
//	}
//	cout << "--------------------�������� 4 �����----------------" << endl;
//	while (t)
//	{
//		if (t->course == 4)
//		{
//			cout << "--------------------------------------------------" << endl;
//			cout << "�������:" << t->surname << endl;
//			cout << "���:" << t->name << endl;
//			cout << "��������:" << t->parentname << endl;
//			cout << "���� ��������:" << t->day << "." << t->month << "." << t->year << endl;
//			cout << "����:" << t->course << endl;
//			cout << "������:" << t->group << endl;
//			cout << "������:" << endl;
//			cout << "����������:" << t->math << endl;
//			cout << "����:" << t->OAIP << endl;
//			cout << "���������� ����:" << t->English << endl;
//			cout << "��:" << t->Yap << endl;
//			cout << "���:" << t->Kyar << endl;
//			t = t->next;
//		}
//		else
//			t = t->next;
//
//	}
//}
//void studentOld(Address** phead, Address** plast)
//{
//	int old = 0;
//	Address* tmp = *phead;
//	old = tmp->year;
//	while (tmp)
//	{
//
//		if (tmp->year < old)
//		{
//			old = tmp->year;
//		}
//		tmp = tmp->next;
//
//	}
//	Address* t = *phead;
//	while (t)
//	{
//		if (t->year == old)
//		{
//			cout << "������� �������=" << t->surname << endl;
//		}
//		t = t->next;
//	}
//
//}
//void studentYoung(Address** phead, Address** plast)
//{
//	int young = 0;
//	Address* tmp = *phead;
//	young = tmp->year;
//	while (tmp)
//	{
//
//		if (tmp->year > young)
//		{
//			young = tmp->year;
//		}
//		tmp = tmp->next;
//
//	}
//	Address* t = *phead;
//	while (t)
//	{
//		if (t->year == young)
//		{
//			cout << "������� �������=" << t->surname << endl;
//		}
//		t = t->next;
//	}
//}
//void average(Address** phead, Address** plast)
//{
//	float average1 = 0, average2 = 0, average3 = 0;
//	Address* t = *phead;
//	while (t)
//	{
//		average1 = (t->English + t->math + t->Kyar + t->Yap + t->OAIP) / 5;
//		cout << "�������:" << t->surname << " " << "������� ����=" << average1 << endl;
//		t = t->next;
//		average2 = (t->English + t->math + t->Kyar + t->Yap + t->OAIP) / 5;
//		cout << "�������:" << t->surname << " " << "������� ����=" << average2 << endl;
//		t = t->next;
//
//	}
//	Address* emp = *phead;
//	while (emp)
//	{
//		if (average1 >= average2 && average1 >= average3)
//		{
//			cout << "Best students:" << emp->surname << endl;
//		}
//		emp = emp->next;
//		if (average2 >= average1 && average2 >= average3)
//		{
//			cout << "Best students:" << emp->surname << endl;
//		}
//		emp = emp->next;
//
//
//	}
//}
//int main()
//{
//	Address* head = NULL;
//	Address* last = NULL;
//	setlocale(LC_CTYPE, "Rus");
//	int choice;
//	char s[80]; int c;
//	cout << endl;
//	cout << "1. ���� ��������" << endl;
//	cout << "2. ������� �������" << endl;
//	cout << "3. ������� �������" << endl;
//	cout << "4. ������ ������" << endl;
//	cout << "5. ����� ������" << endl;
//	cout << "6. 1 ����" << endl;
//	cout << "7. 2 ����" << endl;
//	cout << "8. 3 ����" << endl;
//	cout << "9. 4 ����" << endl;
//	cout << "10. �����" << endl;
//	cout << endl;
//	for (;;)
//	{
//		cout << "��� �����: ";
//		cin >> choice;
//		switch (choice)
//		{
//		case 1: insert(setElement(), &head, &last);
//			break;
//		case 2: studentOld(&head, &last);
//			break;
//		case 3: studentYoung(&head, &last);
//			break;
//		case 4: average(&head, &last);
//			break;
//		case 5: outputList(&head, &last);
//			break;
//		case 6: outputFirstCourse(&head, &last);
//			break;
//		case 7:
//			outputSecondCourse(&head, &last);
//			break;
//		case 8:
//			outputThirdCourse(&head, &last);
//			break;
//		case 9:
//			outputFourthCourse(&head, &last);
//			break;
//		case 10: exit(0);
//		default: exit(1);
//		}
//	}
//	return 0;
//}



//===========================================================


///*3 ��� 
//N �������  �������������  �� �����.  
//����� ������ �� �������, ������� ������� k-��, 
//������ ���� ����� ��������. ���������� ������� �
//������� ����� �� �����. ������������ �������� ������.*/
#include <iostream>
#include <conio.h>
using namespace std;

struct Node
{
	int x;
	Node* Next;
	Node* Prev;
};

struct List
{
	Node* Head = NULL, * Tail = NULL;
	int size = 0;
	void Add(int x);
	bool del(int k);
	void Show(int size);
	int Count();
};



int List::Count()
{
	return size;
}

void List::Add(int x)
{
	size++;
	Node* temp = new Node;
	temp->Next = Head;
	temp->x = x;

	if (Head != NULL)
	{
		Tail->Next = temp;
		Tail = temp;
	}
	else Head = Tail = temp;
}

bool List::del(int k)
{
	if (Head == NULL) {
		cout << "������ ����" << endl;
		return false;
	}
	else
		Node* temp = new Node;
	Node* temp = Tail;
	while (Head != Tail)
	{
		for (int i = 1; i < k; i++)
		{
			temp = temp->Next;
			Node* buf = temp->Next;
			cout << buf->x << " ";
			if (buf == Head)
			{
				Head = buf->Next;
			}
			if (buf == Tail)
			{
				Tail = temp;
			}
			temp->Next = buf->Next;
			delete buf;
		}
	}
	return true;
}

void List::Show(int temp)
{
	Node* tempHead = Head;

	temp = size;
	while (temp != 0)
	{
		cout << tempHead->x << " ";
		tempHead = tempHead->Next;
		temp--;
	}
}
void main()
{
	setlocale(LC_ALL, "Russian");
	int n, k;
	List lst;
	cout << "������� ���-�� ��������� � ������" << endl;
	cin >> n;
	for (int i = 1; i < n + 1; i++)
	{
		lst.Add(i);
	}
	cout << "������:" << endl;
	lst.Show(lst.Count());
	cout << endl;
	cout << "������� k:" << endl;
	cin >> k;
	cout << endl;
	cout << "������� ��������:";
	lst.del(k);
}