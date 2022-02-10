#include <iostream>
#include <math.h>
using namespace std;

void task1(int *A,int size);     
void task2();//прототип
void var2();
void var5();
void var8();

int main(void)
{
	setlocale(LC_CTYPE, "Russian");
	int choice;
	do
	{
		cout << endl;
		cout << "Выберите вариант работы" << endl;
		cout << "151 - 15ый вариант 1 задание " << endl;
		cout << "152 - 15ый вариант 2 задание " << endl;
		cout << "2 - 2ой вариант" << endl;
		cout << "5 - 5ый вариант" << endl;
		cout << "8 - 8ой вариант" << endl;
		cout << "0 - end" << endl;
		cin >> choice;
		switch (choice)
		{
		case 151:  int size,*A;
			cout << "Введите размер массива ";
			cin >> size;	
			A = new int[size];
			srand(time(0));
			for (int i = 0; i < size; i++) {
				*(A + i) = 7 - rand() % 15;
			}
			task1(A, size);
			cout << "Исходный массив:" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << *(A + i) << " ";
	}
			delete[] A;
			break;
		case 152:
			task2();
			break;
		case 2: var2(); break;
		case 5: var5(); break;
		case 8: var8(); break;
		}
	} while (choice !=0);
}
void task1(int *A,int size) {
	int  count = 0, maxabsi = 0,maxabs = 0, sum = 1, c;
	srand(time(0));
	for (int i = 0; i < size; i++) {
		*(A + i) = 7 - rand() % 15;
	}
	cout << "Введите элемент:" << endl;
	cin >> c;
	cout << endl;
	for (int j = 0; j < size; j++) {
		if (*(A + j) > c) {
			count++;
		}
		if (abs(*(A + j))>abs(maxabs)) {
			maxabs = *(A + j);
			maxabsi = j;
		}
	}
	if (maxabsi != -1) {
		for (; maxabsi < size; ) {
			sum *= *(A + maxabsi++);
		}
	}
	cout << "Кол-во > с-ных элементов = " << count << endl;
	cout << "Произведение равно = " << sum << endl;
	
	
}
void task2() {
	char str[]="aaaavvv bbb";
	int j, lenght;
	lenght = strlen(str);
	for (j = 0; j < lenght; j++) {
		if (str[j] >= 'a' && str[j] <= 'z') {
			str[j] -=32;
		}
		if (str[j] == ' ')
			break;
	}
	cout << "Новая строка: " << endl;
	for (int i = 0; i < lenght; i++){
		cout << *(str + i);
		
	}
	

}
	void var2() {
		char str[] = "fffffфффф";
		int j, lenght,as;
		as = 'а' - 'А';
		lenght = strlen(str);
		for (j = 0; j < lenght; j++) {
			if (str[j] >= 'А' && str[j] <= 'я') {
				str[j] -= as;
			}
			if (str[j] >= 'A' && str[j] <= 'z') {
				str[j] = '?';
			}
			
		}
		cout << "Новая строка: " << endl;
		for (int i = 0; i < lenght; i++) {
			cout << *(str + i);

		}
	}

	void var5() {
		char* str;
		char c, * pc;
		int j, lenght, count = 0;
		cout << "Введите размер строки ";
		cin >> lenght;
		str = new char[lenght + 1];
		cout << "Введите строку "<< endl;
		cin >> str;
		cout << "Введите символ ";
		cin >> c;
		pc = &c;
		for (j = 0; j < lenght; j++) {
			if (str[j] == *pc)
				count++;
		}
		cout << count << " повторений/ия символа " << c << endl;
		delete[] str;
	}

	void var8() {
		int size, countz = 0,countp = 0,countm = 0, ** A;
		cout << "Enter size ";
		cin >> size;
		srand(time(0));
		A = new int* [size];    //выделение динам.памяти
		for (int i = 0; i < size; i++) {
			A[i] = new int[size];
			for (int j = 0; j < size; j++)
				A[i][j] = 7 - rand() % 15;
		}
		cout << "Исходный массив:" << endl;
		for (int i = 0; i < size; i++)
		{
			cout << "\n";
			for (int j = 0; j < size; j++) {
				if (A[i][j] >= 0) { cout << " " << A[i][j] << " "; }
				else cout << A[i][j] << " ";
			}

		}
		cout << endl;
		for (int i = 0; i < size; i++) {
			for (int j = 0; j < size; j++) {
				if (A[i][j] == 0) {
					countz++;
				}
				if (A[i][j] < 0) {
					countm++;
				}
				if (A[i][j] > 0) {
					countp++;
				}
			}
		}
		
			cout << "Кол-во -: " << countm<< endl;
			cout << "Кол-во 0:" << countz<< endl;
			cout << "Кол-во +:"<< countp << endl;
	
		for (int k = 0; k < size; k++) //освобождение памяти
			delete[] A[k];
		delete[] A;
	}