#include <fstream>
#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;
void task1();
//void task2();//прототип
//void var2();
//void var5();
//void var8();
int main()
{
    setlocale(LC_ALL, "rus");
	int choice;
	do
	{
		cout << endl;
		cout << "¬ыберите вариант работы" << endl;
		cout << "151 - 15ый вариант 1 задание " << endl;
		cout << "152 - 15ый вариант 2 задание " << endl;
		cout << "2 - 2ой вариант" << endl;
		cout << "5 - 5ый вариант" << endl;
		cout << "8 - 8ой вариант" << endl;
		cout << "0 - end" << endl;
		cin >> choice;
		switch (choice)
		{
		case 151: task1(); break;
		case 152:
	
			break;
		case 2: break;
		case 5:
			break;
		case 8:  break;
		}
	} while (choice != 0);
	
}
void task1() {
	char buff[1024];
	
	ifstream fin("FILE1.txt");
	string list;
	if (!fin.is_open())
		cout << "‘айл не может быть открыт!\n";
	else
	{
		for (fin >> list; !fin.eof(); fin >> list) {
			cout << list << endl;
		}
		fin.close();
	}
	cout << endl;
	cout << list << endl;
}