#include <iostream>
#include <math.h>
#include <ctime>
using namespace std;

int task1(int* A, int size);
void task2();//��������
void var2();
void var5(int *B,int sizeB);
void var8();

int main(void)
{
	setlocale(LC_CTYPE, "Russian");
	int choice;
	do
	{
		cout << endl;
		cout << "�������� ������� ������" << endl;
		cout << "151 - 15�� ������� 1 ������� " << endl;
		cout << "152 - 15�� ������� 2 ������� " << endl;
		cout << "2 - 2�� �������" << endl;
		cout << "5 - 5�� �������" << endl;
		cout << "8 - 8�� �������" << endl;
		cout << "0 - end" << endl;
		cin >> choice;
		switch (choice)
		{
		case 151:  int size, * A;
			cout << "������� ������ ������� ";
			cin >> size;
			A = new int[size];
			srand(time(0));
			for (int i = 0; i < size; i++) {
				*(A + i) = 7 - rand() % 15;
			}
			cout << "���-�� ��������� ����� ������������ " <<task1(A, size) << endl;//count
		
			cout << "�������� ������:" << endl;
			for (int i = 0; i < size; i++)
			{
				cout << *(A + i) << " ";
			}
			delete[] A;
			break;
		case 152:
			
			task2();
			break;
		case 2: var2(); break;
		case 5: int sizeB, *B;
			cout << "������� ������ ������� ";
			cin >> sizeB;
			B = new int[sizeB];
			srand(time(0));
			for (int i = 0; i < sizeB; i++) {
				*(B + i) = 7 - rand() % 15;
			}
			cout << "�������� ������:" << endl;
			for (int i = 0; i < sizeB; i++)
			{
				cout << *(B + i) << " ";
			}
			var5(B,sizeB);
			delete[] B;
			
			break;
		case 8: var8(); break;
		}
	} while (choice != 0);
}
//int task1(int* A, int size) {
//	int  count = 0,minz=0,min=0;
//
//	cout << endl;
//	for (int j = 0; j < size; j++) {
//		if (*(A + j) <= minz) {
//			minz = *(A + j);
//			min = j;
//		}
//		
//	}
//	min++;
//	for (; min < size; min++) {
//		if (*(A + min) < 0) {
//			count++;
//		}
//	}
//
//	return count;
//}
//void task2() {
//	int size, count = 0, ** A;
//	cout << "Enter size ";
//	cin >> size;
//	srand(time(0));
//	A = new int* [size];    //��������� �����.������
//	for (int i = 0; i < size; i++) {
//		A[i] = new int[size];
//		for (int j = 0; j < size; j++)
//			A[i][j] = 7 - rand() % 15;
//	}
//	cout << "�������� ������:" << endl;
//	for (int i = 0; i < size; i++)
//	{
//		cout << "\n";
//		for (int j = 0; j < size; j++) {
//			if (A[i][j] >= 0) { cout << " " << A[i][j] << " "; }
//			else cout << A[i][j] << " ";
//		}
//
//	}
//	cout << endl;
//	for (int j = 0; j < size; j++) {
//		for (int i = 0; i < size; i++) {
//			if (A[i][j] < 0) {
//				count = 1;
//				break;
//			}
//			if (count)break;
//		}
//	}
//	if (count) {
//		for (int i = 0; i < size; i++) {
//			for (int j = 0; j < size; j++) {
//				if (A[i][j] < 0) {
//					A[i][j] = abs(A[i][j]);
//				}
//			}
//		}
//		cout << "���������� ������:" << endl;
//		for (int i = 0; i < size; i++)
//		{
//			cout << "\n";
//			for (int j = 0; j < size; j++) {
//				if (A[i][j] >= 0) { cout << " " << A[i][j] << " "; }
//				else cout << A[i][j] << " ";
//			}
//
//		}
//	}
//	else {
//		cout << "��� ���" << endl;
//	}
//	for (int k = 0; k < size; k++) //������������ ������
//		delete[] A[k];
//	delete[] A;
//
//}
//void var2() {
//	int sizeW, sizeH, count1=0, count = 0, ** A;
//	cout << "Enter size for Height ";
//	cin >> sizeH;
//	cout << "Enter size for Width ";
//	cin >> sizeW;
//	srand(time(0));
//	A = new int* [sizeH];    //��������� �����.������
//	for (int i = 0; i < sizeH; i++) {
//		A[i] = new int[sizeW];
//		for (int j = 0; j < sizeW; j++)
//			A[i][j] = 7 - rand() % 15;
//	}
//	cout << "�������� ������:" << endl;
//	for (int i = 0; i < sizeH; i++)
//	{
//		cout << "\n";
//		for (int j = 0; j < sizeW; j++) {
//			if (A[i][j] >= 0) { cout << " " << A[i][j] << " "; }
//			else cout << A[i][j] << " ";
//		}
//
//	}
//	cout << endl;
//	int flag = 0,check;
//
//	for (int j = 0; j < sizeW; j++) {
//		for (int i = 0; i < sizeH; i++) {
//			if (A[i][j] > 0) {
//				count += 1;
//			}
//			if (count == sizeH) {
//				flag = 1;
//				check = j;
//				break;
//			}
//		}
//	}
//	if (flag) {
//			for (int i = 0; i < sizeH; i++) {
//				A[i][j-1] == abs(A[i][j-1]);
//		}
//	}
//	cout << "����� ������:" << endl;
//	for (int i = 0; i < sizeH; i++)
//	{
//		cout << "\n";
//		for (int j = 0; j < sizeW; j++) {
//			if (A[i][j] >= 0) { cout << " " << A[i][j] << " "; }
//			else cout << A[i][j] << " ";
//		}
//
//	}
//	for (int k = 0; k < sizeW; k++) //������������ ������
//		delete[] A[k];
//	delete[] A;
//}

//void var5(int* B,int sizeB) {
//	int count = 0,sum=0;
//	for (int i = 0; i < sizeB; i++)
//	{
//		if (B[i] % 2 == 0) {
//			sum += B[i];
//			count++;
//		}
//	}
//	cout << endl << "����� ������ ��������� " << sum << endl;
//	cout << "���-�� ������ ��������� " << count << endl;
//}

void var8() {
	int sizeW, sizeH, count1 = 0, count = 0, jindex = 0, **A;
	cout << "Enter size for Height ";
	cin >> sizeH;
	cout << "Enter size for Width ";
	cin >> sizeW;
	srand(time(0));
	A = new int* [sizeH];    //��������� �����.������
	for (int i = 0; i < sizeH; i++) {
		A[i] = new int[sizeW];
		for (int j = 0; j < sizeW; j++)
			A[i][j] = 7 - rand() % 15;
	}
	cout << "�������� ������:" << endl;
	for (int i = 0; i < sizeH; i++)
	{
		cout << "\n";
		for (int j = 0; j < sizeW; j++) {
			if (A[i][j] >= 0) { cout << " " << A[i][j] << " "; }
			else cout << A[i][j] << " ";
		}

	}
	cout << endl;
	for (int j = 0; j < sizeW; j++) {
		for (int i = 0; i < sizeH; i++) {
			if (count)break; 
			if (A[i][j] < 0) {
				count = 1;
				jindex = j;
				break;
			}
			
		}
	}
	if (count) {
		for (int i = 0; i < sizeH; i++) {
			A[i][jindex] /= 2;
		}
		cout << "����� ������� "<<jindex+1 << endl;
		cout << "���������� ������:" << endl;
		for (int i = 0; i < sizeH; i++)
		{
			cout << "\n";
			for (int j = 0; j < sizeW; j++) {
				if (A[i][j] >= 0) { cout << " " << A[i][j] << " "; }
				else cout << A[i][j] << " ";
			}

		}
	}
	else {
		cout << "��� ���" << endl;
	}
	for (int k = 0; k < sizeW; k++) //������������ ������
		delete[] A[k];
	delete[] A;
}

