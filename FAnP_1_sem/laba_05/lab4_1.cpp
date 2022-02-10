//#include <iostream>
//using namespace std;

//int main() {
//	setlocale(LC_CTYPE, "Russian");
//		/*float a, b, c, d,x1 ,x2;
//		printf("Введите a "); scanf_s("%f", &a);
//		printf("Введите b "); scanf_s("%f", &b);
//		printf("Введите c "); scanf_s("%f", &c);
//		d = pow(b, 2) - 4 * a * c;
//		if (d < 0) {
//		printf_s("Корней нет");
//		}
//		else {
//		x1 = (-b + sqrt(d)) / (2 * a);
//		x2 = (-b - sqrt(d)) / (2 * a);
//		printf_s("Корни ур.:x1= %f\n", x1);
//		printf_s("x2 = %f " , x2);
//	}
//	
//	
//		int A, B, C, D;
//		printf("Введите A "); scanf_s("%d", &A);
//		printf("Введите B "); scanf_s("%d", &B);
//		printf("Введите C "); scanf_s("%d", &C);
//		printf("Введите D "); scanf_s("%d", &D);
//		if (A % 2 == 0) printf("A четное");
//		else if (B % 2 == 0) printf("B четное");
//		else if (C % 2 == 0) printf("C четное");
//		else if (D % 2 == 0) printf("D четное");
//		else printf("Четных нет");*/
//
//	
//		//int k;
//		//puts("Вы хотите бургер? (1-да, 2-нет)");
//		//cin >> k;
//		//switch (k)
//		//{
//		//case 1: {puts("Какой? (1-чизбургер, 2-гамбургер)");
//		//	cin >> k;
//		//	switch (k)
//		//	{
//		//	case 1: puts("Хороший выбор"); break;
//		//	case 2: puts("Неплохой выбор"); break;
//		//	default: puts("Надо выбрать"); break;
//		//	}
//		//	break;
//		//}
//		//case 2: { puts("Мб пиццу?(1-да,2-нет)");
//		//	cin >> k;
//		//	switch (k)
//		//	{
//		//	case 1: puts("Отлично"); break;
//		//	case 2: puts("А она вкусная"); break;
//		//	default: puts("Отказы не принимаются"); break;
//		//	}
//		//}break;
//		//default: puts("Тогда досвидания"); break;
//		//	}
//		//return 0;
//
//		//float r, r2, d1, d2,a,s,pper;
//		//printf("Введите радиус окружности "); scanf_s("%f", &r);
//		//printf("Введите диагональ ромба "); scanf_s("%f", &d1);
//		//printf("Введите другую диагональ ромба "); scanf_s("%f",&d2);
//		//d1 /= 2; d2 /= 2;
//		//a = sqrt(pow(d1,2)+pow(d2,2));//1)ищем сторону ромба
//		//pper = 2 * a;//2)ищем полупериметр
//		//s = 2*(d1 * d2);//3)ищем площадь
//		//r2 = s / pper;//4)ищем максимальный радиус окружности , которую можно вписать в ромб с данными диагоналями 
//		//if (r <= r2) { printf("Шар пройдет через ромб"); }
//		//else { printf("Шар не пройдет через ромб"); }
//		//return 0;
//
//		//float a1, a2, a3, r1, s1, t1,v1,v2;
//		//printf("Введите рзамеры коробки:ширину "); scanf_s("%f", &a1);
//		//printf("высоту "); scanf_s("%f", &a2);
//		//printf("длину "); scanf_s("%f", &a3);
//		//printf("Введите рзамеры посылки:ширину "); scanf_s("%f", &r1);
//		//printf("высоту "); scanf_s("%f", &s1);
//		//printf("длину "); scanf_s("%f", &t1);
//		//v1 = a1 * a2 * a3;//объем коробки
//		//v2 = r1 * s1 * t1;//объем посылки
//		//if (v1 < v2) printf("Коробка поместиться в посылку");
//		//else printf("Коробка не поместиться в посылку");
//		//return 0;
//
//	float a3, b3, p3, q3, r3, d3, s11, s22, s33,s55; 
//	printf("Введите ширину участка застрйки "); scanf_s("%f",&a3);
//	printf("Введите длину участка застрйки "); scanf_s("%f",&b3);
//	printf("Введите ширину 1-го дома "); scanf_s("%f",&p3);
//	printf("Введите длину 1-го дома "); scanf_s("%f",&q3);
//	printf("Введите ширину 2-го дома "); scanf_s("%f",&r3);
//	printf("Введите длину 2-го дома "); scanf_s("%f",&d3);
//	s11 = a3 * b3;//площадь участка застройки
//	s22 = p3 * q3;//площадь 1-го дома
//	s33 = d3 * r3;//площадь 2-го дома
//	s55 = s22 + s33;//площадь застройки необходимая для двух домов
//	if (s55 <= s11) printf("Постройка возможна");
//	else printf("Постройка невозможна");
//	return 0;
//}
#include <iostream>
#include <iomanip>
int main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	int a;
	puts("Я вас категорически приветствую (1 - положительный ответ, 2 - отрицательный)");
	cout << "Ваш ответ: "; cin >> a;
	switch (a)
	{//люблю БеЛОдЕДА
	case 1: {
		puts("Ты хоть знаешь кто я?");
		cout << "Ваш ответ: "; cin >> a;
		switch (a) {
		case 1: puts("Гарно"); break;
		case 2: puts("Придется объяснить. Присаживайся"); break;
		}
		break;
	}
	case 2: puts("Это может печально закончиться..."); break;
	default: puts("Я не понимаю вас"); break;
	}
	return 0;
}