#include <iostream>
#include <set>
using namespace std;
int sum(int b) {
	int a, a1, sum = 0;
	while (b != 0) {
		a = b;
		a1 = a % 10;// взяли цифру
		b /= 10;// отбросили 1 цифру 
		sum += a1;
	}
	return sum;
}
int qua(int b) {
	int a, a1, mean;
	set <int> x;
	while (b != 0) {
		a = b;
		a1 = a % 10;// взяли цифру
		b /= 10;// отбросили 1 цифру 
		x.insert(a1);
	}
	if (x.size() == 2) {
		mean = 1;
	}
	return mean;
}
void add1() {
	int num = 1000, a, b, d;
	for (;num <= 9999;num++) {
		if (sum(num) == 30) {
			if (num % 2 == 0) {
				if (num % 7 == 0) {
					if (num % 11 == 0) {
						if (qua(num)) {
							cout << num;
							continue;
						}
						else {
							continue;
						}
					}
					else {
						continue;
					}
				}
				else {
					continue;
				}
			}
			else {
				continue;
			}
		}
		else {
			continue;
		}
	}
	
}
void add2() {
	float c1, c2;
	cout << "Введите литраж 1 кувшина " << endl;
	cin >> c1;
	cout << "Введите литраж 2 кувшина " << endl;
	cin >> c2;
	for (int i = 1; i < 13; i++) {
		c1 -= 0.5 * c1;
		c2 += c1;
		c2 -= 0.5 * c2;
		c1 += c2;
	}

	cout << "1 sosud " << c1 << endl;
	cout << "2 sosud " << c2 << endl;

}
void add3() {
	int n;
	for (int i = 100; i < 1000; i++) {
		int s;
		s=sqrt(i);
		if (i == s * s) {
			if (i / 100 < (i / 10) % 10 && (i / 10) % 10 < i % 10)cout << "Ваше число "<<  i << endl;
		}
	}

}

int main() {
	setlocale(LC_ALL, "Russian");
	/*float x, s = 1.1, b, z;
	x = -4 * pow(10, -3);
	for (float j = 4.0; j <= 7; j += 0.5) {
		b = 12 * s - exp(-s / 2) * (x - j);
		printf("b=%f\t", b);
		if (b < 15) {
			z = sqrt(-2 * x * j) + b;
			printf("z=%f\n", z);
		}
		else z = abs(13 * x * j) + b;
		printf("z=%f\n", z);
		printf("\n");
	}*/
	//int q, b,sum1;
	//printf("q=");
	//scanf_s("%u", &q);
	//printf("b=");
	//scanf_s("%u", &b);
	//for (int i = 1; i < q; i++) {`
	//	sum1 = pow(sum(i), 2);
	//	if (sum1 == b)
	//		printf("i=%u\n", i);
	//	else continue;
	//}
	add3();
}