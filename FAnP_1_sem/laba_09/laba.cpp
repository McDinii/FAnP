#include<iostream>
#include<math.h>
#include<stdio.h>
using namespace std;
void task_1() {
	int a=2, b=7;
	double s = 0, h, n,x;
	cout << "¬ведите n ";
	cin >> n;
	h = (b - a) / n;
	x = a;
	do {
		s = s + (h * ((sin(x) * sin(x) + 1) + (sin(x + h) * sin(x + h) + 1)) * 0.5);
		
		x += h;
	} while (x <= (b - h));
	cout << s;
}
void task_11() {
	int a = 2, b = 7, i=1 ;
	double n,h,s,x,s1 = 0, s2 = 0;
	cout << "¬ведите n ";
	cin >> n;
	h = (b - a) / (2 * n);
	x = a + 2 * h;
	do {
		s1 += sin(x) * sin(x) + 1;
		x += h;
		s2 = s2 + (sin(x) * sin(x) + 1);
		x += h;
		i += 1;
	}
	while (i < n);
	s =( h / 3) * ((sin(a) * sin(a) + 1) + 4 * (sin(a + h) * sin(a + h) + 1) + 4 * s1 + 2 * s2 + (sin(b) * sin(b) + 1));
	cout << s;
}
void task_2() {
	float a=2, b=7, e,x;
	cout << " ¬ведите е";
	cin >> e;
	do {
		x = (a + b) / 2;
		if ((sin(x) + 2 + x) * (sin(a) + 2 + a) <= 0) {
			b = x;
		}
		else {
			a = x;
		}
	} while (abs(a - b) > 2 * e);
	cout << x;
}
void add1() {
	int a = 2, b = 7;
	double s = 0, h, n, x;
	cout << "¬ведите n ";
	cin >> n;
	h = (b - a) / n;
	x = a;
	do {
		s = s + (h * ((cos(x) * cos(x) * cos(x)) + (cos(x + h) * cos(x + h) * cos(x + h)) * 0.5));
		x += h;
	} while (x <= (b - h));
	cout << s;
}
void add2() {
	int a = 8, b = 12;
	double s = 0, h, n, x;
	cout << "¬ведите n ";
	cin >> n;
	h = (b - a) / n;
	x = a;
	do {
		s = s + (h * ((5-x*x) + (5- (x + h)*(x+h )) /2));
		x += h;
	} while (x <= (b - h));
	cout << s;
}
void add3() {
	int a = 2, b = 7;
	double s = 0, h, n, x;
	cout << "¬ведите n ";
	cin >> n;
	h = (b - a) / n;
	x = a;
	do {
		s = s + (h * ((x * x*x-1) + ((x + h) *(x + h)*(x+h) + 1)) * 0.5);
		x += h;
	} while (x <= (b - h));
	cout << s;
}
int main() {
	setlocale(LC_ALL, "Russian");
	add3();

}