         
#include <stdlib.h>
#include <iostream>
#include <time.h>
#include <chrono>
using namespace std;
int* sort1(int m[], int lm)
{
	int buf;
	for (int i = 0; i < lm; i++)
		for (int j = 0; j < lm - i - 1 ; j++)
			if (m[j] > m[j + 1])
			{
				buf = m[j];
				m[j] = m[j + 1];
				m[j + 1] = buf;
			}
	return m;
}
//------------------------------
int* sort2(int m[], int lm)
{
	int buf;
	bool sort;
	for (int g = lm / 2; g > 0; g /= 2)
		do
		{
			sort = false;
			for (int i = 0, j = g; j < lm; i++, j++)
				if (m[i] > m[j])
				{
					sort = true;
					buf = m[i];
					m[i] = m[j];
					m[j] = buf;
				}
		} while (sort);
		return m;
}
void  countSort(int in[], int out[], int size)
{
	int i, j, count;
	
	for (i = 0; i < size; ++i)
	{
		for (count = 0, j = 0; j < size; ++j)
			if (in[j] < in[i] || (in[j] == in[i] && i < j))
				count++;
		out[count] = in[i];
	}
	
}
void sortSelection(int in[],int size) {
	
	int max, index, temp;
	
	for (int j = 0; j < size; j++) {
		max = in[0];
		for (int i = 0; i < size - j; i++) {
			if (in[i] > max) {
				max = in[i];
				index = i; 
			}
			
		} 
		temp = in[size - j - 1];
		in[size - j -1] = max;
		in[index] = temp;
	}
	
	
}
void merge(int array[], int const left, int const mid, int const right)
{
	auto const subArrayOne = mid - left + 1;
	auto const subArrayTwo = right - mid;

	// Create temp arrays
	auto* leftArray = new int[subArrayOne],
		* rightArray = new int[subArrayTwo];

	// Copy data to temp arrays leftArray[] and rightArray[]
	for (auto i = 0; i < subArrayOne; i++)
		leftArray[i] = array[left + i];
	for (auto j = 0; j < subArrayTwo; j++)
		rightArray[j] = array[mid + 1 + j];

	auto indexOfSubArrayOne = 0, // Initial index of first sub-array
		indexOfSubArrayTwo = 0; // Initial index of second sub-array
	int indexOfMergedArray = left; // Initial index of merged array

	// Merge the temp arrays back into array[left..right]
	while (indexOfSubArrayOne < subArrayOne && indexOfSubArrayTwo < subArrayTwo) {
		if (leftArray[indexOfSubArrayOne] <= rightArray[indexOfSubArrayTwo]) {
			array[indexOfMergedArray] = leftArray[indexOfSubArrayOne];
			indexOfSubArrayOne++;
		}
		else {
			array[indexOfMergedArray] = rightArray[indexOfSubArrayTwo];
			indexOfSubArrayTwo++;
		}
		indexOfMergedArray++;
	}
	// Copy the remaining elements of
	// left[], if there are any
	while (indexOfSubArrayOne < subArrayOne) {
		array[indexOfMergedArray] = leftArray[indexOfSubArrayOne];
		indexOfSubArrayOne++;
		indexOfMergedArray++;
	}
	// Copy the remaining elements of
	// right[], if there are any
	while (indexOfSubArrayTwo < subArrayTwo) {
		array[indexOfMergedArray] = rightArray[indexOfSubArrayTwo];
		indexOfSubArrayTwo++;
		indexOfMergedArray++;
	}
}
void mergeSort(int *(&array), int const begin, int const end)
{
	
	if (begin >= end)
		return; // Returns recursively

	auto mid = begin + (end - begin) / 2;
	mergeSort(array, begin, mid);
	mergeSort(array, mid + 1, end);
	merge(array, begin, mid, end);
	
}
//int getHoarBorderD(int *(&A), int sm, int em)
//{
//	int i = sm - 1, j = em + 1;
//	int brd = A[sm];
//	int buf;
//	while (i < j)
//	{
//		while (A[--j] > brd);
//		while (A[++i] < brd);
//		if (i < j)
//		{
//			buf = A[j];
//			A[j] = A[i];
//			A[i] = buf;
//		};
//	}
//	return j;
//}
//int* sortHoarD(int *(&A), int sm, int em)
//{
//	if (sm < em)
//	{
//		int hb = getHoarBorderD(A, sm, em);
//		sortHoarD(A, sm, hb);
//		sortHoarD(A, hb + 1, em);
//	}
//	return A;
//};
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

int getHoarBorder2(int A[], int sm, int em)
{
	int i = sm - 1, j = em + 1;
	int brd = A[sm];
	int buf;
	while (i < j)
	{
		while (A[--j] < brd);
		while (A[++i] > brd);
		if (i < j)
		{
			buf = A[j];
			A[j] = A[i];
			A[i] = buf;
		};
	}
	return j;
}
int* sortHoar2(int A[], int sm, int em)
{
	if (sm < em)
	{
		int hb = getHoarBorder2(A, sm, em);
		sortHoar2(A, sm, hb);
		sortHoar2(A, hb + 1, em);
	}
	return A;
};
void printArr(int arr[],int Arr_size) {
	for (int i = 0; i < Arr_size; i++) {
		cout << arr[i] << ' ';
	}
}

//------------------------------
int getRandKey(int reg = 0)     // генерация случайных ключей
{
	if (reg > 0)
		srand((unsigned)time(NULL));
	int rmin = 0;
	int rmax = 10000;
	return (int)(((double)rand() / (double)RAND_MAX) * (rmax - rmin) + rmin);
}
//------------------------------
int main()
{
	setlocale(LC_CTYPE, "Russian");
	const int N = 50000;
	
	int k[N],f[N];
	getRandKey(1);
	for (int i = 0; i < N; i++)
	{
		f[i] = getRandKey(0);
	}
	//for (int n = 10000; n <= N; n += 10000)
	//{
	//	int* k1 = new int[N];
	//	cout << "##############################" << endl;
	//	cout << "n = " << n << endl;
	//	cout << "1) SortPuzirek ( O(n^2)) ";
	//	memcpy(k, f, n * sizeof(int));
	//	auto start = std::chrono::system_clock::now();
	//	sort1(k, n);
	//	auto end = std::chrono::system_clock::now();
	//	auto duration(std::chrono::duration_cast<std::chrono::milliseconds>(end - start));
	//	cout << "Прошло " << duration.count() << " ms" << endl << endl;
	//	cout << "2) Сортировка подсчетом ( O(nlogn)) ";
	//	memcpy(k, f, n * sizeof(int));
	//	auto start2 = std::chrono::system_clock::now();
	//	countSort(k, f, n);
	//	auto end2= std::chrono::system_clock::now();
	//	auto duration2(std::chrono::duration_cast<std::chrono::milliseconds>(end2 - start2));
	//	cout << "Прошло " << duration2.count()<< " ms" << endl << endl;
	//	cout << "3) Сортировка Выбором ( O(n^2))";
	//	memcpy(k, f, n * sizeof(int));
	//	auto start3 = std::chrono::system_clock::now();
	//	sortSelection(k, n);
	//	auto end3= std::chrono::system_clock::now();
	//	auto duration3(std::chrono::duration_cast<std::chrono::milliseconds>(end3 - start3));
	//	cout << "Прошло " << duration3.count()<< " ms" << endl << endl;
	//	cout << "4)Сортировка слиянием ( O(n logn)) ";
	//	memcpy(k1, f, n * sizeof(int));
	//	auto start4 = std::chrono::system_clock::now();
	//	mergeSort(k1, 0, n-1);
	//	delete [] k1;
	//	auto end4= std::chrono::system_clock::now();
	//	auto duration4(std::chrono::duration_cast<std::chrono::milliseconds>(end4 - start4));
	//	cout << "Прошло " << duration4.count()<< " ms" << endl << endl;
	//	/*k1 = new int[N];
	//	cout << "5)Быстрая сортировка ";
	//	memcpy(k1, f, n * sizeof(int));
	//	auto start5 = std::chrono::system_clock::now();
	//	sortHoarD(k1, 0,n-1);
	//	delete [] k1;
	//	auto end5= std::chrono::system_clock::now();
	//	auto duration5(std::chrono::duration_cast<std::chrono::milliseconds>(end5- start5));
	//	cout << "Прошло " << duration5.count()<< " ms" << endl << endl;*/
	//}
	cout << "Dop1 : Дан массив целых чисел. Найти максимальный элемент массива"
		"и его номер, при условии, что все элементы различны. Найти минимальный элемент массива  " << endl; cout << endl;
	cout << "Our arr = ";
	const int dop1_size = 10;
	int arr_dop1[dop1_size];
	for (int i = 0; i < dop1_size; i++)
	{
		arr_dop1[i] = getRandKey(0);
	}
	printArr(arr_dop1, dop1_size); cout << endl;
	sortHoar(arr_dop1, 0, dop1_size - 1); cout << "Sorted: "; printArr(arr_dop1, dop1_size); cout << endl;
	cout << endl <<  "Min el = " << arr_dop1[0] << " His index is " << 0 << " Max el = " << arr_dop1[dop1_size - 1] << endl; cout << endl;
	
	cout << "Dop2 : Дан массив из 10 элементов. Первые 4 элемента упорядочить по возрастанию, последние 4 по убыванию.  " << endl; cout << endl;
	
	for (int i = 0; i < dop1_size; i++)
	{
		arr_dop1[i] = getRandKey(0);

	}
	cout << "Our arr = ";
	printArr(arr_dop1, dop1_size); cout << endl;
	sortHoar(arr_dop1, 0, 3);
	sortHoar2(arr_dop1, 6, 9);
	cout << endl;
	cout << "Sorted: ";
	printArr(arr_dop1, dop1_size);
	cout << endl;

	cout << "Dop3 : Дан массив из 15 целых чисел на отрезке [-5; 5]."
		"Упорядочить массив, удалив повторяющиеся элементы.";
	cout << endl;
	int size2 = 15;
	int mas[15];
	cout << "IN arr: ";
	for (int i = 0; i < size2; i++)
	{
		mas[i] = getRandKey(0);
		cout << mas[i] << "\t";
	}
	sortHoar(mas, 0, size2 - 1);
	cout << endl;
	cout << "Sorted: ";
	for (int i = 0; i < size2; i++)
	{
		cout << mas[i] << "\t";
	}
	cout << endl;
	cout << "Out arr:";
	for (int i = 0; i < size2 - 1; i++)
		for (int j = i + 1; j < size2; j++)
			if (mas[i] == mas[j])
			{
				for (int k = j; k < size2; k++)
					mas[k] = mas[k + 1];
				size2--;
				j--;
			}
	cout << endl;
	for (int i = 0; i < size2; i++)
		cout << mas[i] << " ";
	cout << endl;
	return 0;
}
