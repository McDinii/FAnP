#include<iostream>
#include<ctime>
#include <map>
#include <set>
using namespace std;
void tsk_1() {
	setlocale(LC_ALL, "Russian");
	const int N = 100;
	int sz, arr[N], i, x, a, rmn = 0, rmx = 99, MAX = -10e9,
		MIN = 10e9, minindex, maxindex;
	cout << "Введите размер массива от 0 до 99 " << endl;
	cin >> sz;
	if (sz > 99)
		return;
	srand((unsigned)time(NULL));
	for (i = 0; i <= sz; i++) {
		arr[i] = (int)(((double)rand() / (double)RAND_MAX) * (rmx - rmn) + rmn);
	}
	for (int j = 0; j < sz; j++) {
		for (int c = 0; c < sz; c++) {
			if (arr[c] > MAX) {
				MAX = arr[c];
				maxindex = c;
			}
			if (arr[c] < MIN) {
				MIN = arr[c];
				minindex = c;
			}
		}
	}
	cout << "Array:";
	for (a = 0; a < sz; a++) cout << arr[a] << ' ';
	cout << endl;
	cout << "Максимальный: " << MAX << " " << "Индекс: " << maxindex << endl;
	cout << "Минимальный: " << MIN << " " << "Индекс: " << minindex;
}

void tsk_2() {
	setlocale(LC_ALL, "Russian");
	const int N = 100;
	int sz, arr[N], i, arr1, x, t, a, rmn = 0, rmx = 99;
	set <int> a1;
	cout << "Введите размер массива от 0 до 99 " << endl;
	cin >> sz;
	if (sz > 99)
		return;
	srand((unsigned)time(NULL));
	for (i = 0; i <= sz; i++) {
		arr[i] = (int)(((double)rand() / (double)RAND_MAX) * (rmx - rmn) + rmn);
	}
	cout << "Array:";
	for (a = 0; a < sz; a++) cout << arr[a] << ' ';
	cout << endl;
	for (int i = 0; i < sz; i++) {
		a1.insert(arr[i]);
	}
	map <int, int> ans;
	for (auto i : a1) {
		ans[i] = 0;
	}
	for (int i = 0; i < sz; i++) {
		ans[arr[i]]++;
	}
	for (auto i : a1) {
		if (ans[i] > 1) {
			cout << "Повторяшка: " << i << endl;
		}
		else cout << "Не повторяшка: " << i << endl;
	}

}

//доп 1.9
void add1() {
	int n, k, maxsum = 0, sum = 0;
	cout << "Введите кол-во дней(n)" << endl;
	cin >> n; cout << endl;
	int* arr = new int[n];
	k = n / 7;
	if (n % 7 > 0)k++;

	int* arrsum = new int[k];

	for (int i = 0; i < n; i++) {
		cout << "Введите кол-во осадков за " << i + 1 << " день" << endl;
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++) {
		sum += arr[i];
		if ((i + 1) % 7 == 0) {
			if (sum > maxsum) {
				maxsum = sum;

			}
			sum = 0;

		}
	}
	cout << "Array:";
	for (int a = 0; a < n; a++) {
		cout << arr[a] << ' ';
	}
	cout << endl;
	cout << maxsum;
}
//доп 4 
void add2() {
	setlocale(LC_ALL, "Russian");
	const int N = 100;
	int sz, arr[N], i, a, rmn = 0, rmx = 100;
	cout << "Введите размер массива от 0 до 99 " << endl;
	cin >> sz;
	if (sz > 99)
		return;
	srand((unsigned)time(NULL));
	for (i = 0; i <= sz; i++) {
		arr[i] = (int)(((double)rand() / (double)RAND_MAX) * (rmx - rmn) + rmn);
	}
	set <int> set1;
	for (int j = 0; j < sz; j++) {
		set1.insert(arr[j]);


	}
	cout << "Array:";
	for (a = 0; a < sz; a++) cout << arr[a] << ' ';
	cout << endl;
	cout << "Не повторяшек: " << set1.size();;

}
//Доп 5 
void add3() {
	
	int sz, i, a, rmn = 0, rmx = 100, MAX = -10e9,
		MIN = 10e9;
	cout << "Введите размер массива от 0 до 99 " << endl;
	cin >> sz;
	int* arr = new int[2 * sz + 1];
	for (i = 0; i < (2 * sz + 1); i++) {
		cout << "Введите элемент массива " << endl;
		cin >> arr[i];
	}
	int count1 = 0;
	for (int j = 0; j < 2 * sz + 1; j++) {
		count1 = 0;
		for (int c = 0; c < 2 * sz + 1; c++) {
			if (arr[j] > arr[c]) {
				count1++;
			}
		}
		if (count1 == sz) {
			cout << arr[j] << endl;
			break;
		}
	}
	cout << "Array:";
	for (a = 0; a < (2 * sz + 1); a++) cout << arr[a] << ' ';
	cout << endl;

}
int main() {
	setlocale(LC_ALL, "Russian");
	add3();
}
