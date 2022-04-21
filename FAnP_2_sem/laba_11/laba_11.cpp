#include <iostream>
using namespace std;
struct Tree          //������
{
	int key;         //����
	char text[5];    //����� - �� ����� 4 ����
	Tree* Left, * Right;
};

Tree* makeTree(Tree* Root);       //�������� ������
Tree* list(int i, char* s);       //�������� ������ ��������
Tree* insertElem(Tree* Root, int key, char* s);  //���������� ������ ��������
Tree* search(Tree* n, int key);   //����� �������� �� ����� 
Tree* delet(Tree* Root, int key); //�������� �������� �� �����
int view(Tree* t, int level);    //����� ������ 
int count(Tree* t);  //������� ���������� ������ �������
int countL(Tree* t);  //������� ���������� ����� ������ 
int countALL(Tree* t);  //������� ���������� ������
int var2(Tree* t, int level);  //������� ���������� ����
bool delAll(Tree* t);             //������� ������

int c = 0;  int kR = 0;  int kL = 0;     //���������� ����
Tree* Root = NULL; 	//��������� �� ������

void main()
{
	setlocale(LC_ALL, "Russian");
	int key, choice, n;
	Tree* rc; char s[5], letter;
	for (;;)
	{
		cout << "1 -	�������� ������\n";
		cout << "2 -	���������� ��������\n";
		cout << "3 -	����� �� �����\n";
		cout << "4 -	�������� ��������\n";
		cout << "5 -	����� ������\n";
		cout << "6 -	������� ���������� ������ ����� ( ��� 15)\n";
		cout << "66 -	����� ������ ������� ( ��� 2)\n";
		cout << "666 -	���-�� ����� ������� ( ��� 5)\n";
		cout << "6666 -	���-�� ���� ������� ( ��� 7)\n";
		cout << "7 -	������� ������\n";
		cout << "8 -	�����\n";
		cout << "��� �����?\n";
		cin >> choice;
		cout << "\n";
		switch (choice)
		{
		case 1:  Root = makeTree(Root);	break;
		case 2:  cout << "\n������� ����: ";
			cin >> key;
			cout << "������� �����: ";
			cin >> s;
			insertElem(Root, key, s); break;
		case 3:  cout << "\n������� ����: ";
			cin >> key;
			rc = search(Root, key);
			cout << "��������� �����= ";
			puts(rc->text); break;
		case 4:  cout << "\n������� ��������� ����: ";
			cin >> key;
			Root = delet(Root, key);  break;
		case 5:  if (Root->key >= 0)
		{
			cout << "������ ��������� �� 90 ����. �����" << endl;
			view(Root, 0);
		}
			  else cout << "������ ������\n"; break;
		case 6:
			n = count(Root);
			cout << " ������ � ������ ����� ( ��� �����) = " << n << endl; break;
		case 666:
			n = countL(Root);
			cout << " ������� � ����� ����� ( ��� �����) = " << n << endl; break;
		case 6666:
			n = countALL(Root);
			cout << " ������� ����� =  " << n << endl; break;
		case 66:

			if (Root->key >= 0)
			{
				cout << "������ ������ ������ ���������� �� 90 ����. �����" << endl;
				var2(Root, 0);
			}
			else cout << "������ ������\n"; break;

		case 7:  delAll(Root); break;
		case 8:  exit(0);
		}
	}
}

Tree* makeTree(Tree* Root)    //�������� ������
{
	int key; char s[5];
	cout << "����� ����� - ������������� �����\n\n";
	if (Root == NULL)	// ���� ������ �� �������
	{
		cout << "������� ���� �����: "; cin >> key;
		cout << "������� ����� �����: "; cin >> s;
		Root = list(key, s);	// ��������� ��������� �� ������
	}
	while (1)                //���������� ���������
	{
		cout << "\n������� ����: ";  cin >> key;
		if (key < 0) break;       //������� ������ (���� < 0)   
		cout << "������� �����: ";  cin >> s;
		insertElem(Root, key, s);
	}
	return Root;
}

Tree* list(int i, char* s)     //�������� ������ ��������
{
	Tree* t = new Tree[sizeof(Tree)];
	t->key = i;
	for (i = 0; i < 5; i++)
		*((t->text) + i) = *(s + i);
	t->Left = t->Right = NULL;
	return t;
}
Tree* Prev;
Tree* insertElem(Tree* t, int key, char* s)  //���������� ������ ��������
{
	// Prev - ������� ����� �������
	int find = 0;        // ������� ������
	while (t && !find)
	{
		Prev = t;
		if (key == t->key)
			find = 1;	   //����� ������ ���� ���������
		else
			if (key < t->key)
				t = t->Left;
			else
				t = t->Right;
	}
	if (!find)              //������� ����� � ������� Prev
	{
		t = list(key, s);           //��������� ����� ���� 
		if (key < Prev->key)     // � �������������� ���� 
			Prev->Left = t;     //������� �� ����� �����,
		else
			Prev->Right = t;    // ���� �� ������ 
	}
	return t;
}

Tree* delet(Tree* Root, int key)  //�������� �������� �� �����
{	// Del, Prev_Del - ��������� ������� � ��� ����������;
	// R, Prev_R - �������, �� ������� ���������� ���������, � ��� ��������; 
	Tree* Del, * Prev_Del, * R, * Prev_R;
	Del = Root;
	Prev_Del = NULL;
	while (Del != NULL && Del->key != key)//����� �������� � ��� �������� 
	{
		Prev_Del = Del;
		if (Del->key > key)
			Del = Del->Left;
		else
			Del = Del->Right;
	}
	if (Del == NULL)              // ������� �� ������
	{
		puts("\n��� ������ �����");
		return Root;
	}
	if (Del->Right == NULL)     // ����� �������� R ��� ������
		R = Del->Left;
	else
		if (Del->Left == NULL)
			R = Del->Right;
		else
		{
			Prev_R = Del;      //����� ������ ������� �������� � ����� ���������
			R = Del->Left;
			while (R->Right != NULL)
			{
				Prev_R = R;
				R = R->Right;
			}
			if (Prev_R == Del) // ������ ������� ��� ������ R � ��� �������� Prev_R 
				R->Right = Del->Right;
			else
			{
				R->Right = Del->Right;
				Prev_R->Right = R->Left;
				R->Left = Prev_R;
			}
		}
	if (Del == Root) Root = R;	//�������� ����� � ������ ��� �� R
	else
		// ��������� R �������������� � �������� ���������� ����
		if (Del->key < Prev_Del->key)
			Prev_Del->Left = R;  //�� ����� ����� 
		else
			Prev_Del->Right = R;	//�� ������ �����
	int tmp = Del->key;
	cout << "\n������ ������� � ������ " << tmp << endl;
	delete Del;
	return Root;
}

Tree* search(Tree* n, int key)  //����� �������� �� ����� 
{
	Tree* rc = n;
	if (rc != NULL)
	{
		if (key < (key, n->key))
			rc = search(n->Left, key);
		else
			if (key > (key, n->key))
				rc = search(n->Right, key);
	}
	else
		cout << "��� ������ ��������\n";
	return rc;
}


int count(Tree* t) //������� ���������� ����
{

	if (t)
	{
		count(t->Right);
		if (*(t->text))
			kR++;
	}

	return kR - 1;
}

int countL(Tree* t) //var5 ������� ���������� ����
{

	if (t)
	{
		countL(t->Left);
		if (*(t->text))
			kL++;

	}
	return kL - 1;
}
int countALL(Tree* t) //va7 ������� ���������� ������� ������ 
{

	return kL + kR - 1;
}

int var2(Tree* t, int level) //������� ���������� ����
{
	if (t)
	{
		puts("������->");
		view(t->Right, level + 1);	//����� ������� ���������
		for (int i = 0; i < level; i++)
			cout << "   ";
		int tm = t->key;
		cout << tm << ' ';
		puts(t->text);
		return 0;
	}
	return 1;
}

int view(Tree* t, int level) //����� ������ 
{
	if (t)
	{
		view(t->Right, level + 1);	//����� ������� ���������

		for (int i = 0; i < level; i++)
			cout << "   ";
		int tm = t->key;
		cout << tm << ' ';

		puts(t->text);
		view(t->Left, level + 1);	//����� ������ ���������
		return 0;
	}
	return 1;
}

bool delAll(Tree* t) //������� ������
{
	if (t != NULL)
	{
		delAll(t->Left);
		delAll(t->Right);
		delete t;
		return true;
	}
	return false;
}
