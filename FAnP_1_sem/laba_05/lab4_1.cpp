//#include <iostream>
//using namespace std;

//int main() {
//	setlocale(LC_CTYPE, "Russian");
//		/*float a, b, c, d,x1 ,x2;
//		printf("������� a "); scanf_s("%f", &a);
//		printf("������� b "); scanf_s("%f", &b);
//		printf("������� c "); scanf_s("%f", &c);
//		d = pow(b, 2) - 4 * a * c;
//		if (d < 0) {
//		printf_s("������ ���");
//		}
//		else {
//		x1 = (-b + sqrt(d)) / (2 * a);
//		x2 = (-b - sqrt(d)) / (2 * a);
//		printf_s("����� ��.:x1= %f\n", x1);
//		printf_s("x2 = %f " , x2);
//	}
//	
//	
//		int A, B, C, D;
//		printf("������� A "); scanf_s("%d", &A);
//		printf("������� B "); scanf_s("%d", &B);
//		printf("������� C "); scanf_s("%d", &C);
//		printf("������� D "); scanf_s("%d", &D);
//		if (A % 2 == 0) printf("A ������");
//		else if (B % 2 == 0) printf("B ������");
//		else if (C % 2 == 0) printf("C ������");
//		else if (D % 2 == 0) printf("D ������");
//		else printf("������ ���");*/
//
//	
//		//int k;
//		//puts("�� ������ ������? (1-��, 2-���)");
//		//cin >> k;
//		//switch (k)
//		//{
//		//case 1: {puts("�����? (1-���������, 2-���������)");
//		//	cin >> k;
//		//	switch (k)
//		//	{
//		//	case 1: puts("������� �����"); break;
//		//	case 2: puts("�������� �����"); break;
//		//	default: puts("���� �������"); break;
//		//	}
//		//	break;
//		//}
//		//case 2: { puts("�� �����?(1-��,2-���)");
//		//	cin >> k;
//		//	switch (k)
//		//	{
//		//	case 1: puts("�������"); break;
//		//	case 2: puts("� ��� �������"); break;
//		//	default: puts("������ �� �����������"); break;
//		//	}
//		//}break;
//		//default: puts("����� ����������"); break;
//		//	}
//		//return 0;
//
//		//float r, r2, d1, d2,a,s,pper;
//		//printf("������� ������ ���������� "); scanf_s("%f", &r);
//		//printf("������� ��������� ����� "); scanf_s("%f", &d1);
//		//printf("������� ������ ��������� ����� "); scanf_s("%f",&d2);
//		//d1 /= 2; d2 /= 2;
//		//a = sqrt(pow(d1,2)+pow(d2,2));//1)���� ������� �����
//		//pper = 2 * a;//2)���� ������������
//		//s = 2*(d1 * d2);//3)���� �������
//		//r2 = s / pper;//4)���� ������������ ������ ���������� , ������� ����� ������� � ���� � ������� ����������� 
//		//if (r <= r2) { printf("��� ������� ����� ����"); }
//		//else { printf("��� �� ������� ����� ����"); }
//		//return 0;
//
//		//float a1, a2, a3, r1, s1, t1,v1,v2;
//		//printf("������� ������� �������:������ "); scanf_s("%f", &a1);
//		//printf("������ "); scanf_s("%f", &a2);
//		//printf("����� "); scanf_s("%f", &a3);
//		//printf("������� ������� �������:������ "); scanf_s("%f", &r1);
//		//printf("������ "); scanf_s("%f", &s1);
//		//printf("����� "); scanf_s("%f", &t1);
//		//v1 = a1 * a2 * a3;//����� �������
//		//v2 = r1 * s1 * t1;//����� �������
//		//if (v1 < v2) printf("������� ����������� � �������");
//		//else printf("������� �� ����������� � �������");
//		//return 0;
//
//	float a3, b3, p3, q3, r3, d3, s11, s22, s33,s55; 
//	printf("������� ������ ������� �������� "); scanf_s("%f",&a3);
//	printf("������� ����� ������� �������� "); scanf_s("%f",&b3);
//	printf("������� ������ 1-�� ���� "); scanf_s("%f",&p3);
//	printf("������� ����� 1-�� ���� "); scanf_s("%f",&q3);
//	printf("������� ������ 2-�� ���� "); scanf_s("%f",&r3);
//	printf("������� ����� 2-�� ���� "); scanf_s("%f",&d3);
//	s11 = a3 * b3;//������� ������� ���������
//	s22 = p3 * q3;//������� 1-�� ����
//	s33 = d3 * r3;//������� 2-�� ����
//	s55 = s22 + s33;//������� ��������� ����������� ��� ���� �����
//	if (s55 <= s11) printf("��������� ��������");
//	else printf("��������� ����������");
//	return 0;
//}
#include <iostream>
#include <iomanip>
int main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	int a;
	puts("� ��� ������������� ����������� (1 - ������������� �����, 2 - �������������)");
	cout << "��� �����: "; cin >> a;
	switch (a)
	{//����� ��������
	case 1: {
		puts("�� ���� ������ ��� �?");
		cout << "��� �����: "; cin >> a;
		switch (a) {
		case 1: puts("�����"); break;
		case 2: puts("�������� ���������. ������������"); break;
		}
		break;
	}
	case 2: puts("��� ����� �������� �����������..."); break;
	default: puts("� �� ������� ���"); break;
	}
	return 0;
}