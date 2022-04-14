#include <stdio.h>
#include <iostream>
#include <cmath>
using namespace std;

float  t_4(int n, float x)
{	
	
	if (n == 1){
		return 	 cos(x);
	}
	else {
		return  cos(n * x)+ t_4(n - 1, x) ;
	}

}
int  t_5(int x) {
	
		if (x > 100) {
			return x+10;
		}
		else {
			return t_5(t_5(x+4));
		}
}
int main(void)
{
	float y = 0;
	int check = 1;
	setlocale(LC_CTYPE, "Rus");
	int choice; int n; float  x; int x2;
	cout << endl;
	cout << "1. number 4 " << endl;
	cout << "11. number 5" << endl;
	cout << "8. Выход" << endl;
	cout << endl;
	for (;;)
	{
		cout << endl;
		cout << "Ваш выбор: ";
		cin >> choice;
		switch (choice)
		{
		case 1:
			cout << "ENter n" << endl;
			cin >> n;
			cout << "ENter x" << endl;
			cin >> x; 
			cout << t_4(n,x);
			break;
		case 11: {
			cout << "ENter x" << endl;
			cin >> x2;
			cout << t_5(x2) << endl;
			break; }
		case 8: exit(0);
		default: exit(1);
		}
	}
}
