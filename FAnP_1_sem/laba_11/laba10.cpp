#include <iostream> 
using namespace std;
void task1()//15.1
{
	unsigned int a;
	const unsigned int mask = 1 << 31;
	cout << "Введите число ";
	cin >> a;
	if ((a & 1) == 0 ) {
		cout << "Ваше числ кратно 2 ";
	}
	else {
		cout << "Ваше число не кратно 2";
	}
}
void task2()//15.2
{
    char buffer[33];
    std::cout << "Введите число A: ";
    int a,position;
    std::cin >> a;

    _itoa_s(a, buffer, 2);
    cout << "A в бинарном виде = " << buffer << '\n';

    cout << "Сколько превратить в '0': ";
    int n;
    cin >> n;

    
     cout << "С какой позиции превращать : ";
     cin >> position;
   

    unsigned int mask = (1 << n) - 1;
    a &= ~(mask << (position - 1));
    _itoa_s(a, buffer, 2);
    cout << "\nA в бинарном : " << buffer << "\nЭто" << a << " в десятичной.\n";

}
void add1()//вариант 4.1 проверить число на кратность четырем 
{
	unsigned int a,k=4;
	cout << "Введите число ";
	cin >> a;

	if ((a & 3 )== 0) { 
		cout << "Ваше число  кратно 4 ";
	}
	else {
		cout << "Ваше число не кратно 4";
	}
}

void add2()//вариант 12.1
{
   
    int A; char tmp[33];
    cout << "Введите число ";
    cin >> A;
    _itoa_s(A, tmp, 2);
    cout << "Число в двоичном виде = " << tmp << endl;
    if ((A & 15) == 0)
        cout << "Число кратно 16" << endl;
    else
        cout << "Число не кратно 16" << endl;
}
void add3()// вариант 16.1 
{
	char tmp[33];
	int A, B, maskA = 14;
	int maskB = ~maskA >> 1;
	cout << "Первое число А="; cin >> A;
	cout << "Второе число В="; cin >> B;
	_itoa_s(A, tmp, 2);
	cout << "A=" << tmp << endl;
	_itoa_s(B, tmp, 2);
	cout << "B=" << tmp << endl;
	_itoa_s(maskA, tmp, 2);
	cout << "Маска для А: " << tmp << endl;
	_itoa_s((A & maskA) >> 1, tmp, 2);
	cout << "Выделенные биты А: " << tmp << endl;
	_itoa_s(maskB, tmp, 2);
	cout << "Маска для В: " << tmp << endl;
	_itoa_s(B & maskB, tmp, 2);
	cout << " Очищены биты в B: " << tmp << endl;
	_itoa_s(((B & maskB) | ((A & maskA) >> 1)), tmp, 2);
	cout << " Результат B=" << tmp << endl;

}
int main() {
    setlocale(LC_CTYPE, "Russian");
    add2();
}
