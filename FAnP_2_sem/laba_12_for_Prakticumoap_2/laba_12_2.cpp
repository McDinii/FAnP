#include <iostream>
#include <time.h>
using namespace std;
void var15();
void dop1();
void  bubble(int Arr[], int size);
int* sortHoar(int A[], int sm, int em);
int getHoarBorder(int A[], int sm, int em);
void printArr(int Arr[], int size);
int main() {
    setlocale(LC_ALL, "Rus");
	for (;;)
	{
		
        int  choice;
		cout << "Select:" << endl;
		cout << "1 - Variant 15 " << endl;
		cout << "2 - dop1(var 2)" << endl;
		cout << "3 -Размер очереди " << endl;
		cout << "4 -Удаление n элементов" << endl;
		cout << "5 - Удаление элементов очереди " << endl;
		cout << "6 - Выход" << endl;

		cin >> choice;
		switch (choice)
		{

		case 1:
            var15();
			break;
		case 2:
			dop1();
			break;
		case 3:
			break;
		case 4:
			
			break;
		case 6:
			return 0;
			break;
		}
	}
    
    return 0;
}
void printArr(int Arr[], int size) {
	for (int i = 0; i < size; i++) {
		cout << Arr[i] << " ";
	}
	cout << endl;
}

void var15() {
	const int SIZE = 5;
	int A[SIZE], B[SIZE], C[2 * SIZE];
	srand(time(NULL));
	// заполнение матрицы ГСЧ
	for (int i = 0; i < SIZE; i++) {
		A[i] = 1 + rand() % SIZE;
		cout << A[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < SIZE; i++) {
		B[i] = 1 + rand() % SIZE;
		cout << B[i] << " ";
	}
    //finding max B
    int maxB = -10e9;
    for (int i = 0; i < SIZE; i++) {
        if (B[i] > maxB)
            maxB = B[i];
        
    }
    cout << "MAX from B = " << maxB << endl; 
    int check = 0;
    for (int i = 0; i < SIZE; i++) {
        if (A[i] < maxB) {
            C[check] = A[i];
            check++;
        }
    }
	int ch;
	cout << " Какой сортировкой сортируем ?" << endl;
	cout << "1- бабл" << endl;
	cout << "2- Хоара" << endl;
	cin >> ch;
	cout << endl;
	switch (ch) {
	case 1:bubble(C, check); break;
	case 2: 
		int sa = 0;
		int ea = check - 1;
		getHoarBorder(C, sa, check );
		sortHoar(C, sa, check);
		break;
	}
     
    for (int i = 0; i < check; i++) {
        cout << C[i] << " ";
    }
    system("pause");
}

void bubble(int Arr[], int size ) {
    int i, j, t;
    for (i = size-1; i>=0; i--)
        for (j = i-1; j >=0; j--)
            if (Arr[i] > Arr[j])
            {
                t = Arr[j];
                Arr[j] = Arr[i];
                Arr[i] = t;
            }
}
int getHoarBorder(int A[], int sm, int em)
{
	int i = sm - 1, j = em + 1;
	int brd = A[sm];
	int buf;
	while (i < j)
	{
		while (A[--j] > brd);
		while (A[++i] < brd);
		if (i < j)
		{
			buf = A[j];
			A[j] = A[i];
			A[i] = buf;
		};
	}
	return j;
}
int* sortHoar(int A[], int sm, int em)
{
	if (sm < em)
	{
		int hb = getHoarBorder(A, sm, em);
		sortHoar(A, sm, hb);
		sortHoar(A, hb + 1, em);
	}
	return A;
};
void dop1() {
	const int SIZE = 5;
	int A[SIZE], B[SIZE], C[2 * SIZE];
	srand(time(NULL));
	// заполнение матрицы ГСЧ
	for (int i = 0; i < SIZE; i++) {
		A[i] = 1 + rand() % SIZE;
		cout << A[i] << " ";
	}
	cout << endl;
	for (int i = 0,k = 0; i < SIZE; i++) {
		if (i % 2 == 0) {
			if (A[i + 1] % 2 == 1) {
				B[k] = A[i];
				k++;
			}
		}
		printArr(A, SIZE);
		printArr(B, SIZE);

	cout << endl;
}