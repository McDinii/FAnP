#include <iostream>
#include "myStack.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	int choice; char x;
	Stack* myStk = new Stack; //выделение памяти для стека
	myStk = NULL;             //инициализация первого элемента	
	for (;;)
	{
		cout << "Выберите команду:" << endl;
		cout << "1 - Добавление элемента в стек" << endl;
		cout << "2 - Извлечение элемента из стека" << endl;
		cout << "3 - Запись в файл" << endl;
		cout << "4 - Чтение из файла" << endl;
		cout << "5 - Вывод стека с очисткой" << endl;
		cout << "6 - Удаление повторяющегося элемента" << endl;
		cout << "7 - dop1" << endl;
		cout << "8 - Выход" << endl;
		cin >> choice;
		switch (choice)
		{
		case 1: cout << "Введите элемент: " << endl;
			cin >> x;
			push(x, myStk); break;
		case 2: x = pop(myStk);
			if (x != -1)
				cout << "Извлеченный элемент: " << x << endl;
			break;
		case 3: toFile(myStk);  break;
		case 4: fromFile(myStk); break;
		case 5: cout << "Весь стек: " << endl;
			show(myStk); break;
		case 6:
			del(myStk); break;
		case 7: {
			setlocale(LC_ALL, "Rus");
			char a[20];
			char b[20] = "";
			cout << "Введите строку с чётным количеством элементов: "; cin >> a;
			if (strlen(a) % 2 != 0)
			{
				cout << "----" << endl;
			}
			else
			{
				int j = 1;
				for (int i = 0; i < strlen(a); i++)
				{
					if (i < strlen(a) / 2)
					{
						b[i] = a[strlen(a) / 2 - i - 1];
					}
					else
					{
						b[i] = a[strlen(a) - j];
						j++;
					}
				}

			}
			cout << b << endl;
		break;
		}
		case 8: return 0; break;
		}
	}
	return 0;
}
