#include <iostream>
#include <algorithm>
using namespace std;
void task1()
{
	const int n = 4;
	int B[n][n] = { {1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16} };
	int j=0, msum=0,m1sum=0;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			msum += B[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0 ; j < i; j++) {
			m1sum += B[i][j];
		}
	}		
	cout << "Правая сумма " << msum << endl;
	cout << "Левая сумма " << m1sum << endl;
	cout <<"Исходный массив:" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "\n";
		for (int j = 0; j < n; j++)
			cout << "B[" << i << "," << j << "] = " << B[i][j] << "\t";
	}
	cout << endl;
}
void task2()
{
	const int n = 5;
	long long B[n][n] = { {1,  0,  3,  0, 0},
						  {5,  0,  7,  0, 0},
						  {9,  0,  11, 0, 0},
						  {13, 5,  15, 0, 3},
						  {0,  0,  7,  0, 0}
	};

	int i = 0, p, j, counter = 0, c, brea = 0;
	for (j = 0; j < n; j++) {
		if (brea == 1) { break; }
		if (B[i][j] == 0) {
			c = j;
			for (p = i; p < n; p++) {
				if (B[p][j] == 0) {
					counter++;
				}
			}
			if (counter == p) {
				brea = 1;
			}
			counter = 0;
		}
	}
	cout << "№" << c << endl;
	for (int i = 0; i < n; i++) {
		cout << B[c][i] * (-1) << endl;
	}
	cout << "Исходный массив:" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "\n";
		for (int j = 0; j < n; j++)
			cout << "B[" << i << "," << j << "] = " << B[i][j] << "\t";
	}
	cout << endl;
}
//Латинский квадрат
void add1() {
	int n,p=0;
	cout << " Введите размер матрицы (не больше 10)"<< endl;
	cin >> n;
	int B[10][10]{};

	for (int i = 0; i < n; i++) {
		int k1 = i;
		B[i][p] = ++k1;
		for (int j=1; j < n; j++) {
			int k = j;
			B[i][j] = ++k;
		}
	}
	for (int i = 1; i < n; i++) {
		for (int j = 1; j < n; j++) {
			if (B[i][j-1] != n) {
				B[i][j] = B[i][j - 1] + 1;
			}
			else {
				B[i][j] = 1;
			}
		}
	}

	cout << "Латинский квадрат:" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "\n";
		for (int j = 0; j < n; j++)
			cout  << B[i][j] << "\t";
	}
	cout << endl;

}
void add2() {
	int number;
	cout << " Введите размер матрицы (не больше 6)" << endl;
	cin >> number;
		int  B[6][6] = { {1,  1,  1,  1, 1, 1},
			  {0,  1,  1,  1, 1, 0},
			  {0,  0,  1,  1, 0, 0},
			  {0,  0,  2,  1, 0, 0},
			  {0,  1,  1,  1, 1, 0},
			  {1,  1,  1,  1, 1, 1}
		};
	
	/*	int B[5][5] = { {1,  1,  1,  1, 1},
					    {0,  1,  1,  1, 0},
				        {0,  0,  2,  0, 0},
				        {0,  1,  1,  3, 0},
				        {1,  1,  1,  1, 1},
		};
	*/
	
	cout << "Исходный массив:" << endl;
	for (int i = 0; i < number; i++)
	{
		cout << "\n";
		for (int j = 0; j < number; j++)
			cout << "B[" << i << "," << j << "] = " << B[i][j] << "\t";
	}
	cout << endl;
	int max = 10e-9, k = 0, sum1 = 0, sum = 0, j, k1, n = number, n1;
	if (number % 2 == 1) {
		for (int i = 0; i < number; i++, k++) {
			if (i <= (number / 2)) {

				for (j = k; j < n; j++) {
					sum += B[i][j];

					if (B[i][j] > max)
						max = B[i][j];

				}
				n--;//закончили на n=2
				k1 = k;// k = 2
				n1 = n;

			}
			else {
				n1 += 2;
				k1--;
				for (j = k1; j < n1; j++) {
					sum1 += B[i][j];
					if (B[i][j] > max)
						max = B[i][j];
				}
				
				n1--;
			}
		}
	}
	else {
		for (int i = 0; i < number; i++, k++) {
			if (i < (number / 2)) {

				for (j = k; j < n; j++) {
					sum += B[i][j];

					if (B[i][j] > max)
						max = B[i][j];

				}
				n--;//закончили на n=3 
				k1 = k;// k = 2
				n1 = n;

			}
			else {
				n1++;
				for (j = k1; j < n1; j++) {
					sum1 += B[i][j];
					if (B[i][j] > max)
						max = B[i][j];
				}
				k1--;
				
			}
		}

	}
	cout << "max " << max << endl;
	cout << "sum " << sum << endl;
	cout << "sum1 " << sum1 << endl;

}
//циклическая сортировка
void add3() {
	const int n = 5;
	int B[n][n] = { {1,  2,  4,  3, 6},
			  {18,  11,  16,  17, 5},
			  {20,  23,  22,  25, 8},
			  {19,  21,  9,  24, 7},
			  {15,  12,  13,  14, 10},
	};
	cout << "Исходный массив:" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "\n";
		for (int j = 0; j < n; j++)
			cout << B[i][j] << " ";
	}
	cout << endl;
	cout << endl;
	int a[n * n], l = 0;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			a[l] = B[i][j];
			l++;
		}
	}

	sort(a, a + l);
	
	int x1[4] = { 0, n, n, 0 }, id = 0, l1 = 0;
	while (true)
	{
		switch (id)
		{
		case 0:
			for (int i = x1[id]; i < n - x1[id];i++) {
				B[x1[id]][i] = a[l1];
				l1++;
				if (l1 >= l)break;
			}
			x1[id]++;
			id++;
			break;
		
		case 1:
			for (int i = n -x1[id] + 1; i < x1[id];i++) {
				B[i][x1[id]-1] = a[l1];
				l1++;
				if (l1 >= l)break;
			}
			x1[id]--;
			id++;
			break;
			
		case 2:
			for (int i = x1[id]-2; i > n-x1[id]-1;i--) {
				B[x1[id] - 1][i] = a[l1];
				l1++;
				if (l1 >= l)break;
			}
			x1[id]--;
			id++;
			break;

		case 3:
			for (int i = n - x1[id]-2; i > x1[id];i--) {
				B[i][x1[id]] = a[l1];
				l1++;
				if (l1 >= l)break;
			}
			x1[id]++;
			id = 0;
			break;

		default:
			break;
		}
		if (l1 >= l)break;
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << B[i][j] << " ";
		}
		cout << endl;
	}
}

int main(){
	setlocale(LC_ALL, "Russian");
	add3();
}
