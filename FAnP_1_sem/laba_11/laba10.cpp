#include <iostream> 
using namespace std;
void task1()//15.1
{
	unsigned int a;
	const unsigned int mask = 1 << 31;
	cout << "������� ����� ";
	cin >> a;
	if ((a & 1) == 0 ) {
		cout << "���� ���� ������ 2 ";
	}
	else {
		cout << "���� ����� �� ������ 2";
	}
}
void task2()//15.2
{
    char buffer[33];
    std::cout << "������� ����� A: ";
    int a,position;
    std::cin >> a;

    _itoa_s(a, buffer, 2);
    cout << "A � �������� ���� = " << buffer << '\n';

    cout << "������� ���������� � '0': ";
    int n;
    cin >> n;

    
     cout << "� ����� ������� ���������� : ";
     cin >> position;
   

    unsigned int mask = (1 << n) - 1;
    a &= ~(mask << (position - 1));
    _itoa_s(a, buffer, 2);
    cout << "\nA � �������� : " << buffer << "\n���" << a << " � ����������.\n";

}
void add1()//������� 4.1 ��������� ����� �� ��������� ������� 
{
	unsigned int a,k=4;
	cout << "������� ����� ";
	cin >> a;

	if ((a & 3 )== 0) { 
		cout << "���� �����  ������ 4 ";
	}
	else {
		cout << "���� ����� �� ������ 4";
	}
}

void add2()//������� 12.1
{
   
    int A; char tmp[33];
    cout << "������� ����� ";
    cin >> A;
    _itoa_s(A, tmp, 2);
    cout << "����� � �������� ���� = " << tmp << endl;
    if ((A & 15) == 0)
        cout << "����� ������ 16" << endl;
    else
        cout << "����� �� ������ 16" << endl;
}
void add3()// ������� 16.1 
{
	char tmp[33];
	int A, B, maskA = 14;
	int maskB = ~maskA >> 1;
	cout << "������ ����� �="; cin >> A;
	cout << "������ ����� �="; cin >> B;
	_itoa_s(A, tmp, 2);
	cout << "A=" << tmp << endl;
	_itoa_s(B, tmp, 2);
	cout << "B=" << tmp << endl;
	_itoa_s(maskA, tmp, 2);
	cout << "����� ��� �: " << tmp << endl;
	_itoa_s((A & maskA) >> 1, tmp, 2);
	cout << "���������� ���� �: " << tmp << endl;
	_itoa_s(maskB, tmp, 2);
	cout << "����� ��� �: " << tmp << endl;
	_itoa_s(B & maskB, tmp, 2);
	cout << " ������� ���� � B: " << tmp << endl;
	_itoa_s(((B & maskB) | ((A & maskA) >> 1)), tmp, 2);
	cout << " ��������� B=" << tmp << endl;

}
int main() {
    setlocale(LC_CTYPE, "Russian");
    add2();
}
