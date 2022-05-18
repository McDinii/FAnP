//#include <tchar.h>
//#include "tree.h"
//#include <fstream>
//using namespace std;
//int main()
//{
//	setlocale(0, "Russian");
//	int key, choice, n, z = 0;
//	Tree* rc;
//	int c = 0;
//	Tree* Root = NULL;
//	for (;;)
//	{
//		cout << endl;
//		cout << "1 -создание дерева\n";
//		cout << "2 -прямой(нисходящий) обход\n";
//		cout << "3 -симметричный(смешанный) обход \n";
//		cout << "4 -обратный(восходящий) обход\n";
//		cout << "5 -вывод по уровням\n";
//		cout << "6 -Проверка на сбалансированность\n";
//		cout << "7 -удаление дерева\n";
//		cout << "ваш выбор?\n";
//		cin >> choice;
//		cout << "\n";
//		switch (choice)
//		{
//		case 1: Root = makeTree(Root); break;
//		case 2: if (Root->key >= 0)
//			view(Root);
//			  else cout << "Дерево пустое\n"; break;
//		case 3: if (Root->key >= 0)
//			view2(Root);
//			  else cout << "Дерево пустое\n"; break;
//		case 4: if (Root->key >= 0)
//			view3(Root);
//			  else cout << "Дерево пустое\n"; break;
//		case 5:
//			cout << "\nКорень:\n";
//			printLevel(Root, 0);
//			cout << "\n1 Уровень:\n";
//			printLevel(Root, 1);
//			cout << "\n2 Уровень:\n";
//			printLevel(Root, 2);
//			cout << "\n3 Уровень:\n";
//			printLevel(Root, 3);
//			break;
//
//		case 6:
//			if (isBalanced(Root))
//				cout << "Дерево сбалансированно";
//			else
//				cout << "Дерево несбалансированно";
//			break;
//		case 7: delAll(Root); break;
//
//		case 8: exit(0);
//		}
//	}
//}

//1. Оператор мобильной связи организовал базу данных абонентов, 
//содержащую сведения о телефонах, их владельцах и используемых тарифах,
//в виде бинарного дерева.Разработать программу, которая обеспечивает 
//начальное формирование базы данных в виде бинарного дерева; производит
//вывод всей базы данных; поиск владельца по номеру телефона; выводит 
//наиболее востребованный тариф(по наибольшему числу абонентов).


#include <iostream>
using namespace std;
struct Tree
{
	int key;
	char number[20];
	char surname[20];
	char tarif[20];
	Tree* Left, * Right;
};

Tree* makeTree(Tree* Root);
Tree* list(int i, char* s, char* number, char* t);
Tree* insertElem(Tree* Root, int key, char* s, char* number, char* t);
void view(Tree* t, int level);
void search(Tree* n, char* number);
string popularTarif(Tree* n);
void delAll(Tree* t);


int c = 0;
int t1 = 0, t2 = 0, t3 = 0;
Tree* Root = NULL;
void main()
{
	setlocale(0, "Russian");
	int key, choice, n;
	Tree* rc; char s[20], t[20], number[20];
	string ans;
	for (;;)
	{
		cout << "1 -создание дерева\n";
		cout << "2 -добавление элемента\n";
		cout << "3 -вывод дерева\n";
		cout << "4 -поиск по номеру \n";
		cout << "5 -популярный тариф \n";
		cout << "6 -удаление дерева \n";
		cout << "7 -выход\n";
		cout << "ваш выбор?\n";
		cin >> choice;
		cout << "\n";
		switch (choice)
		{
		case 1: Root = makeTree(Root); break;
		case 2: cout << "\nвведите ключ: "; cin >> key;
			cout << "введите фамилию: "; cin >> s;
			cout << "введите номер: "; cin >> number;
			cout << "введите тариф: "; cin >> t;
			insertElem(Root, key, s, number, t); break;
		case 3: if (Root->key >= 0)
		{
			cout << "дерево :" << endl;
			view(Root, 0);
		}
			  else cout << "дерево пустое\n"; break;

		case 4: cout << "\nвведите номер: ";
			cin >> number;
			cout << "Абонент:";
			search(Root, number);
			cout << endl;
			break;

		case 5:
			cout << "популярный тариф:";
			ans = popularTarif(Root);
			cout << ans << endl;
			break;
		case 6: delAll(Root); break;

		case 7: exit(0);
		}
	}
}

Tree* makeTree(Tree* Root)
{
	int key; char s[20], t[20], number[20];
	cout << "Конец ввода 0 ключ\n\n";
	if (Root == NULL)
	{
		cout << "введите ключ корня: "; cin >> key;
		cout << "введите фамилию абонента: "; cin >> s;
		cout << "введите номер абонента: "; cin >> number;
		cout << "введите тариф абонента: "; cin >> t;
		Root = list(key, s, number, t);
	}
	while (1)
	{
		cout << "\nвведите ключ: "; cin >> key;
		if (key == 0) break;
		cout << "введите фамилию абонента: "; cin >> s;
		cout << "введите номер абонента: "; cin >> number;
		cout << "введите тариф абонента: "; cin >> t;
		insertElem(Root, key, s, number, t);
	}
	return Root;
}

Tree* list(int i, char* s, char* number, char* t)
{
	Tree* tmp = new Tree[sizeof(Tree)];
	tmp->key = i;
	for (i = 0; i < 20; i++)
	{
		*((tmp->surname) + i) = *(s + i);


		*((tmp->number) + i) = *(number + i);


		*((tmp->tarif) + i) = *(t + i);
	}

	tmp->Left = tmp->Right = NULL;
	return tmp;
}

Tree* insertElem(Tree* tmp, int key, char* s, char* number, char* t)
{
	Tree* Prev = tmp;
	int find = 0;
	while (tmp && !find)
	{
		Prev = tmp;
		if (key == tmp->key)
			find = 1;
		else
			if (key < tmp->key) tmp = tmp->Left;
			else tmp = tmp->Right;
	}
	if (!find)
	{
		tmp = list(key, s, number, t);
		if (key < Prev->key)
			Prev->Left = tmp;
		else
			Prev->Right = tmp;
	}
	return tmp;
}



void view(Tree* t, int level)
{
	if (t)
	{
		view(t->Right, level + 1);
		for (int i = 0; i < level; i++)
			cout << " |";
		int tm = t->key;
		cout << tm << ' ';
		cout << t->surname << endl;
		cout << t->number << endl;
		cout << t->tarif << endl;
		view(t->Left, level + 1);
	}
}

void search(Tree* n, char* number)
{
	if (n != NULL)
	{
		if (strcmp(number, n->number) == 0)
		{
			cout << n->key << endl;
			cout << n->surname << endl;
			cout << n->number << endl;
			cout << n->tarif << endl;
		}
		else
			search(n->Left, number);
		search(n->Right, number);
	}

}
string popularTarif(Tree* n)
{
	if (!n)return"0";
	popularTarif(n->Left);
	if (n->tarif == "Komfort")
		t1++;
	else if (n->tarif == "Zala")
		t2++;
	else
		t3++;
	popularTarif(n->Right);
	return(t1 > t2) ? "Komfort": "Zala";
}

void delAll(Tree* t)
{
	if (t != NULL)
	{
		delAll(t->Left);
		delAll(t->Right);
		delete t;
	}
}

//2. Дано N чисел, N > 0. Создать дерево из N вершин, в котором каждая
//левая дочерняя вершина является листом, а правая дочерняя вершина 
//является внутренней.Для каждой внутренней вершины вначале создавать 
//левую дочернюю вершину, а затем правую(если она существует); каждой 
//создаваемой вершине присваивать очередное значение из исходного набора.

//
//#include <iostream>
//using namespace std;
//struct tree {
//	int data;
//	tree* left, * right;
//};
//tree* tree1 = NULL;
//void insert(int a, tree** t, int N)
//{
//	if (!N) return;
//	if (*t == nullptr)
//	{
//		(*t) = new tree;
//		(*t)->data = a;
//		(*t)->left = (*t)->right = nullptr;
//		return;
//	}
//	if (!(*t)->left)
//		insert(a, &(*t)->left, N);
//	else
//		insert(a, &(*t)->right, N);
//}
//void print(tree* t, int level)
//{
//	if (t == nullptr)return;
//	else
//	{
//		print(t->left, ++level);
//		for (int i = 0; i < level; ++i)
//			cout << "|";
//		cout << t->data << endl;
//		level--;
//	}
//	print(t->right, ++level);
//}
//void del(tree** t)
//{
//	if (t != nullptr)
//	{
//		if ((*t)->left)del(&(*t)->left);
//		if ((*t)->right)del(&(*t)->right);
//		delete* t;
//		*t = nullptr;
//	}
//}
//int main()
//{
//	setlocale(LC_CTYPE, "Russian");
//	int choice, n, i = 1;
//	for (;;)
//	{
//		cout << "1 -создание дерева\n";
//		cout << "2 -вывод дерева\n";
//		cout << "3 -удаление дерева\n";
//		cout << "4 - выход \n";
//		cout << "ваш выбор?\n";
//		cin >> choice;
//		cout << "\n";
//		switch (choice)
//		{
//		case 1:
//			cout << "введите количество вершин:" << endl;
//			cin >> n;
//			int a;
//			while (i++ <= n)
//			{
//				cout << "введите число:";
//				cin >> a;
//				cout << endl;
//				insert(a, &tree1, n);
//			}
//			break;
//		case 2:
//			print(tree1, 0);
//			system("pause");
//			break;
//		case 3: break;
//			del(&tree1);
//		case 4:
//			exit(0);
//			break;
//		}
//	}
//
//}

