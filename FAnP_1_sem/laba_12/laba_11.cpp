// по практикуму 12 
#include <iostream>
using namespace std;
void tsk1() {
	int A[] = { -1,-3,4,5,6,7,3,5,-5,6,-39 },f = 0 , sz = 11,zero;
	while (true)
	{
		f = 1;
		for (int i = 0; i < sz - 1; i++) {
			if (*(A + i)  < *(A + i + 1)) {
				zero = *(A + i);
				*(A + i) = *(A + i + 1);
				*(A + i + 1) = zero;
				f = 0;
			}
		}
		if (f)break;
	}
	for (int i = 0; i < sz; i++)
		cout << *(A + i) << " ";
}
void tsk2() {
	int A[] = { -1,-3,4,5,6,7,3,5,-5,6,-9 }, B[] = {4,3,2,3,5,7,5 }, szA = 11, szB=7, *maxA ,k = -10e9,f=0;
	maxA = &k;
		for (int i = 0; i < szA ; i++) {
			if (*(A + i) > *maxA) {
				*maxA = *(A + i);
			}
		}
		for (int i = 0; i < szB; i++) {
			if (*(B + i) == *maxA) {
				f = 1;
			}
		}
		if( f == 1) cout  << *maxA<< " Есть ";
		else cout  << *maxA<< " Нет  ";


		
}
//2.1
void add1() {
	int A[] = { 5,8,1,-3,2,6,8 }, B[] = { 4,-3,2,-4,5,-7,-101 }, S[7], sz = 7, * minA, k = 10e9, f = 0;
	minA = &k;
	for (int i = 0; i < sz; i++) {
		*(S + i) = *(A + i) + *(B + i);
	}
	for (int i = 0; i < sz; i++)
		cout << *(S + i) << " ";
}


//4.1
void add2(){
	int A[] = { 5,8,1,-3,2,6,4,-4,5,-99,-101 }, B[] = { 4,-3,2,-4,5,-7,-101 }, szA = 11, szB = 7, * minA, k = 10e9, f = 0;
	minA = &k;
	for (int i = 0; i < szA; i++) {
		if (*(A + i) < *minA) {
			*minA = *(A + i);
		}
	}
	for (int i = 0; i < szB; i++) {
		if (*(B + i) == *minA) {
			f = 1;
		}
	}
	if (f == 1) cout << *minA << " Есть ";
	else cout << *minA << " Нет  ";
}

//6.1
void add3() {
	int A[] = { -1,-3,4,5,6,7,3,5,-5,6,-39 }, f = 0, sz = 11, zero;
	while (true)
	{
		f = 1;
		for (int i = 0; i < sz - 1; i++) {
			if (*(A + i) > *(A + i + 1)) {
				zero = *(A + i);
				*(A + i) = *(A + i + 1);
				*(A + i + 1) = zero;
				f = 0;
			}
		}
		if (f)break;
	}
	for (int i = 0; i < sz; i++)
		cout << *(A + i) << " ";
}
int main()
{
	setlocale(LC_ALL, "Russian");
	add3();

}


