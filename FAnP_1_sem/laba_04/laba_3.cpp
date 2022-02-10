#include <iomanip>
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	
	char c, probel; probel = ' ';
	cout << "Введите символ "; cin >> c;
	

	int x = 86, j = 1;

	for (int i = 1;; i += 2) {

		cout << setw(x) << setfill(probel) << probel;
		x--;
		cout << setw(i) << setfill(c) << c << endl;
		if (i > 169) {
			break;
		}
		//треугольник
	}

	cout << endl;
	cout << setw(80) << setfill(probel) << probel;
	cout << setw(12) << setfill(c) << c << endl;
	cout << setw(79) << setfill(probel) << probel;
	cout << setw(14) << setfill(c) << c << endl;
	cout << setw(78) << setfill(probel) << probel;
	cout << setw(16) << setfill(c) << c << endl;
	cout << setw(77) << setfill(probel) << probel;
	cout << setw(18) << setfill(c) << c << endl;
	cout << setw(76) << setfill(probel) << probel;
	cout << setw(20) << setfill(c) << c << endl;
	cout << setw(77) << setfill(probel) << probel;
	cout << setw(18) << setfill(c) << c << endl;
	cout << setw(78) << setfill(probel) << probel;
	cout << setw(16) << setfill(c) << c << endl;
	cout << setw(79) << setfill(probel) << probel;
	cout << setw(14) << setfill(c) << c << endl;
	cout << setw(80) << setfill(probel) << probel;
	cout << setw(12) << setfill(c) << c << endl;
	//шестиугольник

	cout << endl;
	cout << setw(84) << setfill(probel) << probel;
	cout << setw(4) << setfill(c) << c << endl;
	cout << setw(83) << setfill(probel) << probel;
	cout << setw(6) << setfill(c) << c << endl;
	cout << setw(84) << setfill(probel) << probel;
	cout << setw(4) << setfill(c) << c << endl;
	cout << setw(85) << setfill(probel) << probel;
	cout << setw(2) << setfill(c) << c << endl;
	cout << setw(81) << setfill(probel) << probel;
	cout << setw(10) << setfill(c) << c << endl;
	cout << setw(82) << setfill(probel) << probel;
	cout << setw(8) << setfill(c) << c << endl;
	cout << setw(81) << setfill(probel) << probel << setw(1) << setfill(c) << c << setw(1) << setfill(probel) << probel;
	cout << setw(6) << setfill(c) << c << setw(1) << setfill(probel) << probel << setw(1) << setfill(c) << c << endl;
	cout << setw(80) << setfill(probel) << probel << setw(1) << setfill(c) << c << setw(2) << setfill(probel) << probel;
	cout << setw(6) << setfill(c) << c << setw(2) << setfill(probel) << probel << setw(1) << setfill(c) << c << endl;
	cout << setw(78) << setfill(probel) << probel << setw(2) << setfill(c) << c << setw(3) << setfill(probel) << probel;
	cout << setw(2) << setfill(c) << c << setw(2) << setfill(probel) << probel << setw(2) << setfill(c) << c << setw(3) << setfill(probel) << probel << setw(2) << setfill(c) << c << endl;
	cout << setw(83) << setfill(probel) << probel;
	cout << setw(2) << setfill(c) << c << setw(2) << setfill(probel) << probel << setw(2) << setfill(c) << c << endl;
	cout << setw(82) << setfill(probel) << probel;
	cout << setw(3) << setfill(c) << c << setw(2) << setfill(probel) << probel << setw(3) << setfill(c) << c << endl;
	cout << setw(81) << setfill(probel) << probel;
	cout << setw(4) << setfill(c) << c << setw(2) << setfill(probel) << probel << setw(4) << setfill(c) << c << endl;

}
