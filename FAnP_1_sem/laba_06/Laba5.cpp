#include <iostream>
#include <math.h>
#include <string>
int sum(int b) {
	int a, a1,sum=0;
	while (b != 0) {
		a = b;
		a1 = a % 10;// взяли цифру
		b /= 10;// отбросили 1 цифру 
		sum += a1;
	}
	return sum;
}
std::string  to_str(int b) {
	int a, k;
	char c = 0;
	std::string s="";
	while (b != 0) {
		a = b;
		k = a % 10;// взяли цифру
		b /= 10;// отбросили 1 цифру 
		c = (char)(k+48);
		s = c + s;
	}
	return s;
}

int main()
{
	setlocale(LC_CTYPE, "Russian");
	double z, w, y = 0.4,j=2;
	/*double t = 5 * pow(10, -5);
	int a =-1,j;
	for (int n = 1; n <= 5; n++)
	{
		printf("Введите j ");
		scanf_s("%p", &j);
		z = sqrt(t * a + y) + 4*exp(-2 * j);
		w = (log(0.4 * y)) / (7 * a - z);
		printf("z = %7.5f\t", z);
		printf("w = %7.5f\n", w);
	}*/
	//float  a = -1,j;
	//printf("Введите j ");
	//scanf_s("%f", &j);
	//double t = 5 * pow(10, -5);
	//if ((j >= 1) && (j <= 2)) {
	//	while ((1 <= j) && (j <= 2)) {
	//		z = sqrt(t * a + y) + 4 * exp(-2 * j);
	//		w = (log(0.4 * y)) / (long double)(7 * a - z);
	//		printf("z = %7.5lf\t", z);
	//		printf("w = %7.5lf\n", w);
	//		printf("j = %7.5lf\n\n", j);
	//		j = j + 0.2;
	//	}
	//}
	//else printf("Введите число от 1 до 2");

	//int i = 0;
	//float t;
	//t = 3;
	//double a[3] = { 0.2, -1.6, 9.4 };
	//	do {
	//		z = sqrt(t * a[i] + y) + 4 * exp(-2 * j);
	//		w = (log(0.4 * y)) / (7 * a[i] - z);
	//		printf("z = %7.5lf\t", z);
	//		printf("w = %7.5lf\n", w);
	//		printf("a[0]=%f\n", a[i]);
	//		t += 0.2;
	//	} while (t < 4);
	//	printf("\n");
	//	t = 3;
	//	i++;
	//		do {

	//			z = sqrt(t * a[i] + y) + 4 * exp(-2 * j);
	//			w = (log(0.4 * y)) / (7 * a[i] - z);
	//			printf("z = %7.5lf\t", z);
	//			printf("w = %7.5lf\n", w);
	//			printf("a[1]=%f\n", a[i]);
	//			t += 0.2;
	//		} while (t < 4);
	//		printf("\n");
	//		t = 3; i++;
	//	do {
	//			z = sqrt(t * a[i] + y) + 4 * exp(-2 * j);
	//			w = (log(0.4 * y)) / (7 * a[i] - z);
	//			printf("z = %7.5lf\t", z);
	//			printf("w = %7.5lf\n", w);
	//			printf("a[2]=%f\n", a[i]);
	//			t += 0.2;
	//	} while (t < 4);
	//	return 0;

	//1 доп 
	//int b = 100000,sum1,t,h;
	//while (b <=999999) {
	//	sum1 = sum(b);
	//	if (sum1%7 == 0 ) {
	//		b++;
	//		int sum2 = sum(b);
	//		if (sum2%7 == 0)
	//			printf("Cчастливые Билеты , №%u\t№%u\n", b-1,b);
	//	}
	//	else {
	//	}
	//	b++;

	//}
	
	//2 доп 
	int x;

	std::string s1; 
	char six='6', three='3';
	printf("Введите целое число\n");
	scanf_s("%u", &x);
	s1 = to_str(x);
	for (int i = 0; i < s1.length();i++) {
		if (six == s1[i])
			s1.erase(i,1) ;
			if (three == s1[i])
				s1.erase(i, 1);
	
	}
	std::cout << s1 << std::endl;

	//3 доп 
	//int  i = 2, days; //p-выручка в 1 день q-план выручки days-кол-во дне с 1 до достижения q Q-выручка когда превысит q
	//float p1,p,profit;
	//printf("Выручка в первый день ");
	//scanf_s("%f", &p);
	//printf("Выручка желаемая ");
	//scanf_s("%f", &profit);
	//do {
	//	p =p+ p * 0.3;
	//	i++;
	//	if (p > profit) {
	//		printf("На %u день\t", i);
	//		printf("Прибыль = %f", p);
	//	}
	//	else { continue; }
	//} while (p < profit);

}
