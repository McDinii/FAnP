//Преподаватели.Фамилия преподавателя,
//название экзамена, дата экзамена.Выбор по фамилии.

#include <iostream>      
#include <fstream>
#include <string>
#include <stdio.h>
#include <vector>
#include <sstream>
#include <algorithm>
# define str_len 25
int size = 3;
using namespace std;
void enter_new();
void del();
void find(char Name[]);
void out();
void dop2();
typedef struct Exam
{
	char examName[str_len];
	char day[str_len];
	char month[str_len];
	char lastName[str_len];

} ex;
struct Exam list_of_student[3];
struct Exam bad;
FILE* f; FILE* f1; FILE* f2; errno_t err;
int current_size = 0; int choice;
int main()
{
	char name[str_len];
	setlocale(LC_ALL, "Russian");
	cout << "Введите:" << endl;
	cout << "1-для удаления записи" << endl;
	cout << "2-для ввода новой записи" << endl;
	cout << "3-для поиска по структуре" << endl;
	cout << "4-для вывода записи(ей)" << endl;
	cout << "6-для допа№3" << endl;
	cout << "5-для выхода" << endl;
	cin >> choice;
	do
	{
		switch (choice)
		{
		case 1:  del();	break;
		case 2:  enter_new();  break;
		case 3:
			cout << "Введите фамилию" << endl;
			cin >> name;
			find(name);  break;
		case 4:  out();	break;
		case 6:  dop2(); break;
		}
	} while (choice != 5);
}
void enter_new()
{
	cout << "Ввод информации" << endl;
	ex buf = { ' ', ' ', ' ', ' ',' ' };
	if (!fopen_s(&f, "main.bin", "ab")) {
		if (current_size < 3)
		{
			cout << "Строка номер ";
			cout << current_size + 1;
			cout << endl << "Фамилия " << endl;
			cin >> buf.lastName;
			cout << "День экзамена " << endl;
			cin >> buf.day;
			cout << "Месяц экзамена  " << endl;
			cin >> buf.month;
			cout << "Название экзамена  " << endl;
			cin >> buf.examName;
			fwrite(&buf, sizeof(buf), 1, f);
			current_size++;
		}

		else {
			cout << "Введено максимальное кол-во строк" << endl;
			cout << "Что дальше?" << endl;
			cin >> choice;
		}
		fclose(f);
	}
	else {
		cout << "Ошибка открытия файла";
		return;
	}

}
void del()
{
	ex buf;
	bool non = false;
	int chv2;
	char name[str_len];
	cout << "Введите 1 - для удаления информации определенной фамилии \n 2 - для удаления всей информации\n";
	cin >> chv2;
	switch (chv2) {
	case 1: {
		cout << "\n Введите фамилию\n";
		cin >> name;
		errno_t err;
		err = fopen_s(&f, "main.bin", "rb");
		if (err != 0)
		{
			perror("ошибка открытия файла");
			return;
		}
		errno_t err1;
		err1 = fopen_s(&f1, "temp.bin", "ab");
		if (err1 != 0)
		{
			perror("ошибка открытия файла");
			return;
		}
		fread(&buf, sizeof(buf), 1, f);
		while (!feof(f)) {
			if (strcmp(name, buf.lastName) != 0) {
				fwrite(&buf, sizeof(buf), 1, f1);
				fread(&buf, sizeof(buf), 1, f);
			}
			else {
				fread(&buf, sizeof(buf), 1, f);
				non = true;
			}
		}
		if (non == false) {
			cout << "Информации не найдено" << endl;
		}
		else {
			current_size--;
		}
		fclose(f);
		fclose(f1);
		remove("main.bin");
		rename("temp.bin", "main.bin");
		break;

	}
	case 2: {
		errno_t err3, err4;
		err3 = fopen_s(&f, "main.bin", "rb");
		if (err3 != 0)
		{
			perror("ошибка открытия файла");
			return;
		}
		err4 = fopen_s(&f2, "temp2.bin", "ab");
		if (err4 != 0)
		{
			perror("ошибка открытия файла");
			return;
		}
		fclose(f);
		fclose(f2);
		remove("main.bin");
		rename("temp2.bin", "main.bin");
		fclose(f);
		fclose(f2);
		current_size = 0;
		break;
	}
	}

	cout << endl << "Что дальше?" << endl;
	cin >> choice;

}
void find(char Name[])
{
	bool non = false;
	ex buf;
	if (!fopen_s(&f, "main.bin", "rb"))
	{
		cout << "\nФамилия     |   Экзамен     |   День     |  Месяц\n";
		fread(&buf, sizeof(buf), 1, f);
		while (!feof(f))
		{
			if (strcmp(Name, buf.lastName) == 0) {
				non = true;
				cout << buf.lastName << "\t\t" << buf.examName << "\t\t" << buf.day << "\t    " << buf.month << endl;
				break;
			}
			else { fread(&buf, sizeof(buf), 1, f); }
		}
		if (non == false) {
			cout << "Информации не найдено" << endl;
		}

		fclose(f);
	}
	else
	{
		cout << "Ошибка открытия файла";
		return;
	}
	cout << endl << "Что дальше?" << endl;
	cin >> choice;

}
void out()
{
	cout << endl;
	ex buf;
	if (!fopen_s(&f, "main.bin", "rb")) {
		cout << "\nФамилия     |   Экзамен     |   День     |  Месяц\n";
		fread(&buf, sizeof(buf), 1, f);
		current_size = 0;
		while (!feof(f))
		{
			cout << buf.lastName << "\t\t" << buf.examName << "\t\t" << buf.day << "\t    " << buf.month << endl;
			fread(&buf, sizeof(buf), 1, f);
			current_size++;
		}
		cout << endl;
		fclose(f);
	}
	else
	{
		cout << "Ошибка открытия файла";
		return;
	}

	cout << endl << "Что дальше?" << endl;
	cin >> choice;


}

//Доп 2  
/*Описать структуру с именем TRAIN, содержащую поля: названия пункта назначения,
номер поезда, время отправления. Написать программу, выполняющую ввод с клавиатуры
данных в массив, состоящий из восьми элементов типа TRAIN (за-писи должны быть размещены
в алфавитном порядке по названиям пунктов назначения); вывод на экран информации о поездах,
отправляющихся после введенного с клавиатуры времени (если таких поездов нет, то вывести сообщение об этом).*/

struct Train {
	string Place;// место назначения
	int NumTrain; // номер поезда
	string time; // время отбытия 
};


bool compTrain(Train lhs, Train rhs)
{
	return lhs.Place < rhs.Place;
}

void displayTrain(Train* trains, int SIZE) {
	sort(trains, trains + SIZE, compTrain);
	cout << endl;
	cout << "Расписание всех поездов" << endl;
	for (int i = 0; i < SIZE; ++i)
	{
		
		cout << "Номер поезда: " << trains[i].NumTrain << "\t";
		cout << "Место прибытия: " << trains[i].Place << "\t\t";
		cout << " Время прибытия на вокзал: " << trains[i].time << "\t";
		cout << "\n-------------------------------------------------------------------------------------------" << endl;
	}
};

void displayTrainMode(Train* trains, int SIZE, string user_time)
{
	sort(trains, trains + SIZE, compTrain);

	if (user_time.size() > 4 || user_time.size() < 2)
	{
		cout << "Некорретная дата " << endl;
		exit(1);
	}

	istringstream x(user_time, istringstream::in);
	int time_user1;
	x >> time_user1;
	x.clear();

	int hours_user = time_user1 / 100; // часы 
	int minuts_user = time_user1 % 100;// минуты 

	if (hours_user < -1 || hours_user>60 || minuts_user < -1 || minuts_user >60)
	{
		cout << "Некорретная дата " << endl;
		exit(1);
	}


	cout << "Ваше время : " << hours_user << " часов, " << minuts_user << " минут " << endl;
	int all_user_time = hours_user * 60 * 60 + minuts_user * 60; //секунды с начатого дня

	vector <int> time_train;

	for (int i = 0; i < SIZE; i++)
	{
		istringstream x(trains[i].time, istringstream::in);
		int train_rail;
		x >> train_rail;
		int train_hours = train_rail / 100;
		int train_minuts = train_rail % 100;
		time_train.push_back((train_hours * 60 * 60) + (train_minuts * 60));
	}
	bool ones = false;
	cout << "Вам походит" << endl;
	for (int i = 0; i < SIZE; i++)
	{
		if (all_user_time < time_train[i])
		{
			
			cout << "Номер поезда: " << trains[i].NumTrain << "\t";
			cout << "Место прибытия: " << trains[i].Place << "\t\t";
			cout << "Время прибытия на вокзал: " << trains[i].time << "\t";
			cout << "\n////////////////////////////////////////////////////////////////////////////////////////" << endl;
			ones = true;
		}
	}
	if (ones == false)
	{
		cout << "Ничего." << endl;
	}
}
;

void ifileTrain(Train* trains, int SIZE)
{
	ifstream fin("trainsInfo.txt");

	if (!fin.is_open()) {
		cout << "Не удаётся открыть файл для чтения " << endl;
		exit(EXIT_FAILURE);
	}

	vector<string> fileinfo;
	string line, word;
	stringstream x;
	for (int i = 0; i < SIZE; ++i) {

		fin >> trains[i].NumTrain;//номер поезда 

		getline(fin, line);

		x << line; // деление строки
		while (x >> word)
		{
			fileinfo.push_back(word);
		}

		for (int k = 0; k < fileinfo.size(); ++k)
		{
			if (k == 0) { trains[i].Place = fileinfo[k]; }
			if (k == 1) { trains[i].time = fileinfo[k]; }
		}

		x.clear();
		line.clear();
		word.clear(); //очистка
		fileinfo.clear();
	}

}

void dop2()
{
	setlocale(LC_CTYPE, "rus");
	const int SIZE = 4;
	Train trains[SIZE];
	ifileTrain(trains, SIZE);
	displayTrain(trains, SIZE);
	cout << "\nВведите дату (формат ЧЧММ): ";
	string user_time;
	cin >> user_time;
	int check = stoi(user_time);
	if (check < 0 || check > 2400) {
		cout << "Время введено неккоректно";
	}
	else {
		cout << endl;
		displayTrainMode(trains, SIZE, user_time);
	}


}










