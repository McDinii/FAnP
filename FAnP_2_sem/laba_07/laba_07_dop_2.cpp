//1. Дана величина a строкового типа из четного количества символов.
//Получить и  напечатать величину b, состоящую из символов первой половины величины a,
//записанных в обратном порядке, после которых идут символы второй половины ве - личины a,
//также записанные в обратном порядке(например, при а = “привет” b должно быть равно «ипртев»).
//2. Создать стек с целочисленным информационным полем.
//Заполнить его длинами строк, считанных из файла.
//Распечатаьть на экране содержимое стека.
//Указать номер и длину последней самой короткой строки файла.

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
	char data;     //информационный элемент
	Stack* next;	 //указатель на следующий элемент
	Stack* head;	 //указатель на голову 
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
		cout << "Список пуст";
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
		cout << "Выберите команду:" << endl;
		cout << "7 - dop1" << endl;
		cout << "77 - dop2" << endl;
		cout << "0 - exit" << endl;

		cin >> choice2;

		switch (choice2) {
		case 7: {char str[20];
			int dl;
			Stack* myStk = new Stack; //выделение памяти для стека
			myStk->head = NULL;       //инициализация первого элемента 
			while (strlen(str) % 2 != 0) {
				cout << "Строка с четным количеством символов" << endl;
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
			cout << "Длина самой маленькой строки:" << min << endl;
			cout << "Её номер:" << j << endl;
			break; };

		case 0:return 0; break;
		}
	}
}