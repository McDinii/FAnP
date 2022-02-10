#include <ctime>
#include <iostream>
#include <stdio.h>	
#include <stdlib.h>

using namespace std;
void task2() {
	int size, count = 0, ** A;
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
	cout<< endl;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (A[i][j] == 0) {
				count++;
				break;
			}
		}
	}
	if (count != (size - 1)) {
		for (int i = 0; i < size; i++) {
			for (int j = 0; j < size; j++) {
				if (A[i][j] < 0) {
					A[i][j] = 0;
				}
			}
		}
		cout << "Измененный массив:" << endl;
		for (int i = 0; i < size; i++)
		{
			cout << "\n";
			for (int j = 0; j < size; j++) {
				if (A[i][j] >= 0) { cout << " " << A[i][j] << " "; }
				else cout << A[i][j] << " ";
			}

		}
	}
	else {
		cout << "Все гуд" << endl;
	}
	for (int k = 0; k < size; k++) //освобождение памяти
		delete[] A[k];
	delete[] A;

}
void task1() {
	int size,count=0, min=0, sum = 0, *A,c;
	cout << "Enter size ";
	cin >> size;
	if (!(A = (int*)malloc(size * sizeof(int))))   //выделение памяти и проверка, 
	{	                                      //достаточно ли для нее места
		puts("Not enough memory");
		return;
	}
	srand(time(0));
	for (int i = 0; i < size; i++) {
		*(A+i) = 7 - rand()%15;
	}
	cout << "Введите элемент:" << endl;
	cin >> c;
	cout << endl;
	for (int j = 0; j < size; j++) {
		if (*(A + j) < c) {
			count++;
		}
		if (*(A + j) < min) {
			min = j;
		}
	}
	if (min != -1) {
		for (; min < size; ++min) {
			sum += *(A + min);
		}
	}
	cout << "Кол-во > с-ных элементов = " << count<<endl;
	cout << "Сумма равна = " << sum << endl;
	cout << "Исходный массив:" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << *(A+i) << " ";	
	}
	free(A);
}

//Вариант 2
void add1() {
	int size, count = 0, min = -1, sum = 0, * A, c;
	cout << "Enter size ";
	cin >> size;
	if (!(A = (int*)malloc(size * sizeof(int))))   //выделение памяти и проверка, 
	{	                                      //достаточно ли для нее места
		puts("Not enough memory");
		return;
	}
	srand(time(0));
	for (int i = 0; i < size; i++) {
		*(A + i) = 7 - rand() % 15;
	}
	cout << endl;
	for (int j = 0; j < size; j++) {
		if (*(A + j) < 0) {
			min = j;
		}
	}
	cout << "MAX Индекс отрицательного = " << min << endl;

	cout << "Исходный массив:" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << *(A + i) << " ";
	}
	free(A);
}
//Вариант 5 1 
void add2(){
int size, count = 0, min = 0, sum = 0, * A, c = 0;
cout << "Enter size ";
cin >> size;
if (!(A = (int*)malloc(size * sizeof(int))))   //выделение памяти и проверка, 
{	                                      //достаточно ли для нее места
	puts("Not enough memory");
	return;
}
srand(time(0));
for (int i = 0; i < size; i++) {
	*(A + i) = 7 - rand() % 15;
}

cout << endl;
for (int j = 0; j < size; j++) {
	if (*(A + j) == c) {
		count++;
	}
	if (*(A + j) < min) {
		min = j;
	}
}
if (min != -1) {
	for (; min < size; ++min) {
		sum += *(A + min);
	}
}
cout << "Кол-во 0-ых элементов = " << count << endl;
cout << "Сумма равна = " << sum << endl;
cout << "Исходный массив:" << endl;
for (int i = 0; i < size; i++)
{
	cout << *(A + i) << " ";
}
free(A);
}

//Вариант 8 1 
void add3(){
int size, count = 0, min = -1, sum = 0, * A, c = 0;
cout << "Enter size ";
cin >> size;
if (!(A = (int*)malloc(size * sizeof(int))))   //выделение памяти и проверка, 
{	                                      //достаточно ли для нее места
	puts("Not enough memory");
	return;
}
srand(time(0));
for (int i = 0; i < size; i++) {
	*(A + i) = 7 - rand() % 15;
}

cout << endl;
for (int j = 0; j < size; j++) {
	if (*(A + j) > c) {
		count++;
	}
	if (*(A + j) == 0) {
		min = j;
	}
}
if (min != -1) {
	for (; min < size; ++min) {
		sum += *(A + min);
	}
}
cout << "Кол-во +ных элементов = " << count << endl;
cout << "Сумма равна после last 0 = " << sum << endl;
cout << "Исходный массив:" << endl;
for (int i = 0; i < size; i++)
{
	cout << *(A + i) << " ";
}
free(A);
}
int main()
{
	setlocale(LC_ALL, "Russian");
add1();
}