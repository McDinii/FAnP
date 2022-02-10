#include <iostream> 
#include <stdio.h> 
#include <math.h>
using namespace std;
double dixit(double(*)(double));    //прототип
double f1(double x);
double f2(double x);  
double f3(double x);
double f4(double x);     //прототипы
double f5(double x);     //прототипы
void bi(int n, ...);

int main()
{
	setlocale(LC_CTYPE, "Russian");
	int choice;
	
	do
	{
		cout << endl;
		cout << "Выберите вариант работы" << endl;
		cout << "151 - 15ый вариант 1 функция " << endl;
		cout << "152 - 15ый вариант 2 функция " << endl;
		cout << "215 - 2рая ой часть осн варианта" << endl;
		cout << "2 - 2ой вариант" << endl;
		cout << "5 - 5ый вариант" << endl;
		cout << "8 - 8ой вариант" << endl;
		cout << "0 - end" << endl;
		cin >> choice;
		switch (choice)
		{
		case 151:  printf("Корни = %7f", dixit(f1)) ;
			break;
		case 152:  printf("Корни = %7f", dixit(f2));
			break;
		case 2: printf("Корни = %7f", dixit(f3));
			break;
		case 5: printf("Корни = %7f", dixit(f4));
			break;
		case 8:  printf("Корни = %7f", dixit(f5));
			break;
		case 215: 

			bi(5,12,43,536,356,111);
			break;
		}
	} while (choice != 0);
	
}


void bi(int n, ...)
{
	int* p = &n;
	char k[33];
	for (int i = 1; i <= n; i++) {
		_itoa_s(*(++p), k, 2);
		cout << "Число " << *p << " в бинарном виде = " << k << endl;
	}
}

double dixit(double (*fun)(double))
{
	double  a, b;
	cout << "Enter a: " << endl;
	cin >> a;
	cout << endl;
	cout << "Enter b: " << endl;
	cin >> b;
	cout << endl;
	double c,e=0.001 ;
	do {
		c = (a + b) / 2.0;
		if (fun(a) * fun(c) < 0) b = c;
		else if (fun(c) * fun(b) < 0) a = c;
		else {
			cout << "(.)(.) ERROR (.)(.)" << endl;
			return 0;
		}
	} while (fabs(b-a) > e);
	return c;
}

double f1(double x)
{
	return x*x*x-x-2;
}
double f2(double x)
{
	return (sin(x) + 0.3);
}
double f3(double x)
{
	return (x*x*x + x - 3);
}
double f4(double x)
{
	return (0.2 - x*x);
}
double f5(double x)   
{
	return (exp(x) - 4);
}
