#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include <clocale>
#define LEN 1024
#pragma warning(disable : 4996)
using namespace std;
void fun151();
int fun152();//прототипы
int fun2();
int fun5();
void fun8();
void StrCut(FILE* f1, FILE* f2, int row1, int row2);
int main()
{
    setlocale(LC_ALL, "Russian");
	int choice;

	do
	{
		cout << endl;
		cout << "Выберите вариант работы" << endl;
		cout << "151 - 15ый вариант 1 функция " << endl;
		cout << "152 - 15ый вариант 2 функция " << endl;
		cout << "3 - 3ий вариант" << endl;
		cout << "9 - 9ый вариант" << endl;
		cout << "14 - 14ый вариант" << endl;
		cout << "0 - end" << endl;
		cin >> choice;
		switch (choice)
		{
        case 151:fun151();
			break;
        case 152:fun152();
			break;
        case 3: fun2();
			break;
        case 9: fun5();
			break;
        case 14: fun8();
			break;
		}
	} while (choice != 0);
	
}
	void fun151() {
        double** mas;
        char buff;
        int n = 0, m;
        int res;
        int i, j, k;

        FILE* in;

        in = fopen("151in.txt", "r");

        while ((buff = fgetc(in)) != EOF)
            if (buff == '\n')
                n++;

        fseek(in, 0, SEEK_SET);
        fscanf(in, "%d", &m);

        res = (m > n) ? m : n;

        mas = (double**)malloc(res * sizeof(double*));

        for (i = 0; i < res; i++)
            mas[i] = (double*)malloc(res * sizeof(double));

        for (i = 0; i < n; i++)
            for (j = 0; j < m; j++)
                fscanf(in, "%lf", &mas[i][j]);


        printf("Введите k-ое\n");
        scanf("%d", &k);
        FILE* out;

        out = fopen("152out.txt", "w");
            

        for (i = 0; i < n; i++)
        {
            fprintf(out, "%lf ", mas[i][k-1]);
            fprintf(out, "\n");
        }

        fclose(in);
        fclose(out);

        for (i = 0; i < res; i++)
            free(mas[i]);

        free(mas);

}
    int fun152() {
	int row1, row2;
	FILE* f1;
	FILE* f2;
	errno_t err1, err2;
	err1 = fopen_s(&f1, "152in.txt", "r");
	if (err1 != NULL)
	{
		printf("Ошибка открытия файла\n"); return -1;
	}
	err2 = fopen_s(&f2, "152copy.txt", "w");
	if (err2 != NULL)
	{
		printf("Ошибка открытия файла\n"); return -1;
	}
	fclose(f1);
	fclose(f2);
	cout << "Введите необходимую строку:\n";
	cin >> row1;
	row2 = row1 + 3;
	fopen_s(&f1, "152in.txt", "r");
	fopen_s(&f2, "152copy.txt", "w");
	StrCut(f1, f2, row1, row2);
}
        void StrCut(FILE* f1, FILE* f2, int row1, int row2)
{
	int sum = 0;
	char str[LEN];
	row1--;
	row2--;
	while (fgets(str, LEN, f1))
	{
		if (sum < row1)
		{
		}
		else
		{
			if (row1 <= row2)
			{
				fputs(str, f2);
			}
			else
			{
			}
			row1++;
		}
		sum++;
	}
}


    int fun2() {//вариант 3 1 
       /* Дан файл вещественных чисел, содержащий элементы квадратной матрицы(по строкам)
            , причем начальный элемент файла содержит значение количества столбцов ма
            трицы.
            Создать новый файл той же структуры, содержащий транспонированную матрицу.*/
        int a; errno_t err, columns = 4;
            FILE* f;
            err = fopen_s(&f, "variant3.txt", "w");
            if (err != 0)
            {
                perror("Невозможно создать файл\n");
                return EXIT_FAILURE;
            }
            int Matrix[16] = { 2,7,12,-4,
                             6,-45,0,13,
                             96,43,-2,8,
                             33,-5,63,-11 };
            // вывод первой матрицы
            fprintf(f, "В матрице %d столбца.\n============================\n", columns);
            for (int j = 0; j < 16; j += 4)
            {
                for (int i = j; i < j + 4; i++)
                {
                    fprintf(f, "%d\t", Matrix[i]);
                }
                fprintf(f, "\n", "\n");
            }
            fprintf(f, "============================\n");
            // вывод второй матрицы
            err = fopen_s(&f, "variant3Transporate.txt", "w");
            if (err != 0)
            {
                perror("Невозможно создать файл\n");
                return EXIT_FAILURE;
            }
            fprintf(f, "В матрице %d столбца.\n============================\n", columns);
            for (int j = 0; j < 4; j++)
            {
                for (int i = j; i <= j + 12; i += 4)
                {
                    fprintf(f, "%d\t", Matrix[i]);
                }
                fprintf(f, "\n", "\n");
            }
            fprintf(f, "============================\n");
        
            printf("Данные записаны в файл variant3Transporate.txt\n");
            fclose(f);
            return 0;
    }
    int fun5() { // вариант 9 
        /*Компоненты файла fileA –  целые числа, значения которых повторяются.
            Получить файл fileB, образованный 
            из fileA исключением повторных вхождений одного и того же числа*/
        int* a;
        	int size, counter = 0;
        	errno_t err;
        	FILE* f;
        	FILE* g;
        	err = fopen_s(&f, "variant9a.txt", "r");
        	if (err != 0)
        	{
        		perror("Невозможно создать файл");
        		return EXIT_FAILURE;
        	}
        	err = fopen_s(&g, "variant9b.txt", "w");
        	if (err != 0)
        	{
        		perror("Невозможно создать файл\n");
        		return EXIT_FAILURE;
        	}
        	fseek(f, 0L,2);
        	size = ftell(f);
        	fseek(f, 0L, SEEK_SET);
        	a = (int*)calloc(size, sizeof(int));
        	for (int i = 0; i < size; i++)
        	{
        		fscanf_s(f, "%d ", &a[i]);
        	}
        	for (int i = 0; i < size; i++)
        	{
        		for (int j = i; j < size; j++) 
        		{
        			if (a[i] == a[j] && i != j)
        			{
                        counter++;
        			}
        
        		}
                if (counter == 1)
                    		{
                    			fprintf_s(g, "%d ", a[i]);
                                counter--;
                    		}
        	}
        	fclose(f);
        	fclose(g);
    }
    void fun8() { // вариант 14 2 Создать текстовый файл F1 не менее, чем из 5 строк,
        //и записать в него информацию.
        //Скопировать в файл F2 только строки из F1, которые начинаются с цифры
        FILE* F1;
        FILE* F2;
        char str[255];
        errno_t err;
        err = fopen_s(&F1, "14F1.txt", "w");
        for (int i = 0; i < 6; i++)
        {
           
            printf("Строка  %d: \n", i+1);
            fflush(stdin);
            gets_s(str);
            fputs(str, F1);
            fputs("\n", F1);
        }
        fclose(F1);
        err = fopen_s(&F1, "14F1.txt", "r");
        err = fopen_s(&F2, "14F2.txt", "w");

        while (fgets(str, 255, F1) != 0)
        {
            if (str[0] == '1' || str[0] == '2' || str[0] == '3' || str[0] == '4' || str[0] == '5'
                || str[0] == '6' || str[0] == '7' || str[0] == '8' || str[0] == '9' || str[0] == '0')
            {
                fputs(str, F2);
            }
        }
        fclose(F1);
        fclose(F2);
    }