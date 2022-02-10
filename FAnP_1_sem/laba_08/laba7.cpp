#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
void t1() {
	float q, t = 0.45, k = 0;
	float a[6]{ 1.1, 6.2, 3, -4, 6, 1 };
	for (int i = 0; i < 6; i++) {
		k += (a[i] + 1) / (a[i]);
		
	}
		q = t + k;
		cout << q;
}
void t2() {
	float q, k=0,z=0;
	int  a[6]{ 5, 4, 3, 2, 6, 1 };
	for (int j = 0; j < 6; j+=2) {
		if (a[j] < a[j + 1]) {
			z = a[j + 1];
	
		}
		else
		{
			z = a[j];
		}
	}
	for (int i = 0; i < 5; i++) {
		k += (z) / (a[i]+1);
		
	}
		cout << k;
}
void add1() {
	int n,num,sum=0;
	cout << "¬ведите n(кол-во целых чисел ,которые будут введены)";
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cout << "¬водите число " << endl;
		cin >> num;
		if (num % 2 == 0) {
			sum += num;
		}
	}
	cout << sum;
}
void add2() {
	int n, num, sum = 0;
	cout << "¬ведите n(кол-во целых чисел ,которые будут введены)";
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cout << "¬водите число " << endl;
		cin >> num;
		if (num < 0) {
			cout << "ѕор€дковый номер ";
			cout << i;
			break;
		}
	}
}
void add3() {
	int p,p2,s,n;
	float  i, k, Max = -10e9, Min = 10e9;
	cout << "¬ведите кол-во вещественных чисел" << endl;
	cin >> n;
	for (int j = 1; j <= n;j++) {
		cout << "¬ведите вещественное число" << endl;
		cin >> i;
		if (i > Max) {//поправка на условие , если надо последнее максимальное 
			Max = i;//добавить = в 70 строчку
			p = j;
		}
		if (i < Min) {//смотри строку 70, замен€€ на минимальное 
			Min = i;
			p2 = j;
		}
	}
	s = max(p, p2)-min(p, p2)-1;

	cout << s << endl;
}
int main() {
	setlocale(LC_ALL, "Russian");
	add3();
}