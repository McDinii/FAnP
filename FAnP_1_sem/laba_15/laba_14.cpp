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
	A = new int* [size];    //��������� �����.������
	for (int i = 0; i < size; i++) {
		A[i] = new int[size];
		for (int j = 0; j < size; j++)
			A[i][j] = 7 - rand() % 15;
	}
	cout << "�������� ������:" << endl;
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
		cout << "���������� ������:" << endl;
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
		cout << "��� ���" << endl;
	}
	for (int k = 0; k < size; k++) //������������ ������
		delete[] A[k];
	delete[] A;

}
void task1() {
	int size,count=0, min=0, sum = 0, *A,c;
	cout << "Enter size ";
	cin >> size;
	if (!(A = (int*)malloc(size * sizeof(int))))   //��������� ������ � ��������, 
	{	                                      //���������� �� ��� ��� �����
		puts("Not enough memory");
		return;
	}
	srand(time(0));
	for (int i = 0; i < size; i++) {
		*(A+i) = 7 - rand()%15;
	}
	cout << "������� �������:" << endl;
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
	cout << "���-�� > �-��� ��������� = " << count<<endl;
	cout << "����� ����� = " << sum << endl;
	cout << "�������� ������:" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << *(A+i) << " ";	
	}
	free(A);
}

//������� 2
void add1() {
	int size, count = 0, min = -1, sum = 0, * A, c;
	cout << "Enter size ";
	cin >> size;
	if (!(A = (int*)malloc(size * sizeof(int))))   //��������� ������ � ��������, 
	{	                                      //���������� �� ��� ��� �����
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
	cout << "MAX ������ �������������� = " << min << endl;

	cout << "�������� ������:" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << *(A + i) << " ";
	}
	free(A);
}
//������� 5 1 
void add2(){
int size, count = 0, min = 0, sum = 0, * A, c = 0;
cout << "Enter size ";
cin >> size;
if (!(A = (int*)malloc(size * sizeof(int))))   //��������� ������ � ��������, 
{	                                      //���������� �� ��� ��� �����
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
cout << "���-�� 0-�� ��������� = " << count << endl;
cout << "����� ����� = " << sum << endl;
cout << "�������� ������:" << endl;
for (int i = 0; i < size; i++)
{
	cout << *(A + i) << " ";
}
free(A);
}

//������� 8 1 
void add3(){
int size, count = 0, min = -1, sum = 0, * A, c = 0;
cout << "Enter size ";
cin >> size;
if (!(A = (int*)malloc(size * sizeof(int))))   //��������� ������ � ��������, 
{	                                      //���������� �� ��� ��� �����
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
cout << "���-�� +��� ��������� = " << count << endl;
cout << "����� ����� ����� last 0 = " << sum << endl;
cout << "�������� ������:" << endl;
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