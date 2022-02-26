#include <fstream>
#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;
void task1();
void task2();//прототип
void var2();
void var5();
void var8();
int main()
{
    setlocale(LC_ALL, "rus");
	int choice;
	do
	{
		cout << endl;
		cout << "Выберите вариант работы" << endl;
		cout << "151 - 15ый вариант 1 задание " << endl;
		cout << "152 - 15ый вариант 2 задание " << endl;
		cout << "2 - 2ой вариант" << endl;
		cout << "5 - 5ый вариант" << endl;
		cout << "8 - 8ой вариант" << endl;
		cout << "0 - end" << endl;
		cin >> choice;
		switch (choice)
		{
		case 151: task1(); break;
		case 152: task2();
	
			break;
		case 2: var2();
			break;
		case 5: var5();
			break;
		case 8:  var8(); break;
		}
	} while (choice != 0);
	
}
void task1() {
	/*	Скопировать из файла FILE1 в файл FILE2 все строки, в которых
		содержится не менее двух
		одинаковых слов.Определить номер слова, в котором больше всего цифр.
	*/
	char buff[1024];
	fstream f,f2;
	string path1 = "FILE1.txt", path2 = "FILE2.txt", str, * arr;
	f.open(path1, fstream::in | fstream::out);
	if (!f.is_open())
		cout << "Файл не может быть открыт!\n";
	else
	{

		while (!f.eof()) {

			while (getline(f, str)) {
				str += ' ';
				int  count = 0;
				int i = 0;
				while ( str[i] != '\0') {
					if (str[i] == ' ' || str[i] == '\0')
						count++;
					i++;
				}

				arr = new string[count];
				int  k = 0, u = 0;
				bool check = false;
				string buf;
				buf = ' ';	
					for (int t = 0, j = 0; t <= i; t++) {
						if (str[t] != ' ') {
							buf += str[t];
						}
						else{
							arr[j] = buf; 
							j++;
							buf = ' ';
						}
					}

				
					for (; k <= count; k++) {
						f2.open(path2, fstream::in | fstream::out | fstream::app);
						for (u = k + 1; u < count; u++) {
						
							if (arr[k] == arr[u]) {
								if (!f2.is_open()) {
									cout << "Fail" << endl;
								}
								else {
									str += '\n';
									f2 << str;
									str = "";
								}
								check = true;
								break;
							}
						}f2.close();
						if (check) {
							break;
						}
					}
				
				cout << count << endl;
				delete[] arr;
			}
		}
		f.close();
	}
}

	
	void task2(void)
	{
		/*Ввести с клавиатуры строку символов, состоящую из слов,
		разделенных пробелами, и записать ее в файл.Прочитать
		из файла данные и вывести все слова, которые содержат букву «х».*/
		string buff, trash;
		getline(cin, buff);
		getline(cin, buff);
		setlocale(0, "Rus");
		
		
		ofstream fout("file11.txt");
		if (fout.fail())
		{
			cout << "\n Ошибка открытия файла";
			exit(1);
		}
		else {
			cout << "open"<<endl;
			fout << buff ;
		}

		fout.close();
		string path1 = "file11.txt";
		fstream fin;
		string str , *arr;
		fin.open(path1, fstream::in | fstream::out);
		if (!fin.is_open())
		{
			cout << "\n Ошибка открытия файла";
			exit(1);
		}
		else {
			getline(fin, str);
					str += ' ';
					int  count = 0;
					int i = 0;
					while (str[i] != '\0') {
						if (str[i] == ' ' || str[i] == '\0')
							count++;
						i++;
					}

					arr = new string[count];
					int  k = 0, u = 0;
					string buf;
					buf = "";
					for (int t = 0, j = 0; t <= i; t++) {
						if (str[t] != ' ') {
							buf += str[t];
						}
						else {
							arr[j] = buf;
							j++;
							buf = "";
						}
					}


					for (; k < count; k++) {
							string check = arr[k];
							for (int p = 0; p < arr[k].length(); p++) {
								if (check[p] == 'x') {
									cout << check << " ";
									break;
								}
							}
					}
					delete[] arr;
			
			fin.close();
			}
		
	}
	void var2() {
		/*Скопировать в файл FILE2 только те строdки из FILE1, 
		которые начинаются с буквы «А».Подсчитать количество
		слов в FILE2.*/
		char buff[1024];

		fstream f, f2;
		string path1 = "FILE11var_2.txt", path2 = "FILE12var_2.txt", str, * arr;
		f.open(path1, fstream::in | fstream::out);
		if (!f.is_open())
			cout << "Файл не может быть открыт!\n";
		else
		{

			while (!f.eof()) {

				while (getline(f, str)) {
					str += ' ';
					int  count = 0;
					int i = 0;
					if (str[0] == 'A') {
						while (str[i] != '\0') {
							if (str[i] == ' ' || str[i] == '\0')
								count++;
							i++;
						}
						cout << "Кол-во слов в cтроке " << count << endl;
						arr = new string[count];
						int  k = 0, u = 0;
						string buf;
						buf = ' ';
						for (int t = 0, j = 0; t <= i; t++) {
							if (str[t] != ' ') {
								buf += str[t];
							}
							else {
								arr[j] = buf;
								j++;
								buf = ' ';
							}
						}


													f2.open(path2, fstream::in | fstream::out | fstream::app);
							
									if (!f2.is_open()) {
										cout << "Fail" << endl;
									}
									else {
										str += '\n';
										f2 << str;
										str = "";
									}
							f2.close();
						
						
						delete[] arr;
					}
					
				}

			}
			f.close();
		}
}
	void var5() {
		/*Ввести с клавиатуры строку символов, состоящую 
		из групп цифр и нулей, и записать ее в файл.Прочи
		- тать из файла данные и вывести самую короткую группу.*/
		string buff, trash;
		getline(cin, buff);
		getline(cin, buff);
		setlocale(0, "Rus");


		ofstream fout("file13.txt");
		if (fout.fail())
		{
			cout << "\n Ошибка открытия файла";
			exit(1);
		}
		else {
			cout << "open" << endl;
			fout << buff;
		}

		fout.close();
		string path1 = "file13.txt";
		fstream fin;
		string str, * arr;
		fin.open(path1, fstream::in | fstream::out);
		if (!fin.is_open())
		{
			cout << "\n Ошибка открытия файла";
			exit(1);
		}
		else {
			getline(fin, str);
			str += ' ';
			int  count = 0;
			int i = 0;
			while (str[i] != '\0') {
				if (str[i] == ' ' || str[i] == '\0')
					count++;
				i++;
			}

			arr = new string[count];
			int  k = 0, u = 0;
			string buf;
			buf = "";
			for (int t = 0, j = 0; t <= i; t++) {
				if (str[t] != ' ') {
					buf += str[t];
				}
				else {
					arr[j] = buf;
					j++;
					buf = "";
				}
			}

			int min = 10e9, index ;
			for (; k < count; k++) {
				
				if (arr[k].length() < min )  
				{
					min = arr[k].length();
					index = k;
				}
			}
			cout << "Самая короткая группа: " << arr[index] << endl;
			cout<< "С длиной:" << min; 
			delete[] arr;

			fin.close();
		}

	}
	void var8() {
		/*Скопировать из файла FILE1 в файл FILE2 все строки,
		которые содержат только 
		одно слово.Подсчитать количество символов в файле FILE2*/
		char buff[1024];

		fstream f, f2;
		string path1 = "FILE14var_11.txt", path2 = "FILE15var_11.txt", str;
		f.open(path1, fstream::in | fstream::out);
		if (!f.is_open())
			cout << "Файл не может быть открыт!\n";
		else
		{

			while (!f.eof()) {
				int symbols = 0;
				while (getline(f, str)) {
					str += ' ';
					int  count = 0,  i = 0;
					
					while (str[i] != '\0') {
						if (str[i] == ' ' || str[i] == '\0') {
							count++;
						}
						i++;
					}
					
					/*arr = new string[count];
					int  k = 0, u = 0;
					bool check = false;
					string buf;
					buf = ' ';
					for (int t = 0, j = 0; t <= i; t++) {
						if (str[t] != ' ') {
							buf += str[t];
						}
						else {
							arr[j] = buf;
							j++;
							buf = ' ';
						}
					}*/


					if (count == 1) {
						symbols += i - count;
					 
 						f2.open(path2, fstream::in | fstream::out | fstream::app);
						
								if (!f2.is_open()) {
									cout << "Fail" << endl;
								}
								else {
									str += '\n';
									f2 << str;
									str = "";
								}
						f2.close();
					}
					
					/*delete[] arr;*/
					
				}cout << "Кол-во символов в FILE2 = " << symbols << endl;
			}
			f.close();
			
		}
	}