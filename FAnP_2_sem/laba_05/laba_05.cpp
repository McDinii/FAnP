//16.4 Преподаватели.Фамилия преподавателя, название экзамена, дата экзамена.
//Выбор по дате экзамена.Дату экзамена реализовать с помощью битового поля.

//16.5 Студенты.Ф.И.О., дата поступления, специальность, группа, факультет,
//средний балл.Выбор по среднему баллу.

//#include <iostream>
//#include<fstream>
//# define str_len 256
//# define size 100
//using namespace std;
//void enter_new(int *choice);
//void out(int* choice);
//void del(int* choice);
//void search(int* choice);
//
//void enter_new_5(int *choice_5);
//void out_5(int* choice_5);
//void search_5(int* choice_5);
//
//struct teachers
//{
//	char surname_of_teacher[str_len];
//	char exam[str_len];
//	unsigned day : 4;
//	unsigned month : 4;
//	unsigned year : 4;
//
//};
//
//teachers allTeachers[size];
//teachers all;
//teachers b;
//
//union forStudent {
//	char str[40];
//	int limb;
//	float  nim;
//};
//
//struct Student {
//	
//	forStudent name;
//	forStudent surname;
//	forStudent data;
//	forStudent spec;
//	forStudent group;
//	forStudent fac;
//	forStudent avg;
//
//};
//
//Student allS[size];
//int choice, M_choice;
//int choice_5;  int current_size = 0;
//int current_size_5 = 0; 
//int l, z, q;
//
//
//int main()
//{	
//	setlocale(LC_ALL, "Russian");
//	cout << "Введите:" << endl;
//	cout << "1-Основа 16.4" << endl;
//	cout << "2-Основа 16.5" << endl;
//	cout << "3-Доп 1" << endl;
//	cout << "4-Доп 2" << endl;
//	cout << "5-Доп 3" << endl;
//	cout << "6-для выхода" << endl;
//	cin >> M_choice;
//	do
//	{
//		switch (M_choice)
//		{
//		case 1: setlocale(LC_ALL, "Russian");
//			cout << "Задание 4 вар 16" << endl;
//			cout << "Введите:" << endl;
//			cout << "1-для ввода записи" << endl;
//			cout << "2-для вывода записи" << endl;
//			cout << "3-для удаления" << endl;
//			cout << "4-для поиска информации" << endl;
//			cout << "5-для выхода" << endl;
//			cout << "6-для выхода(очистка)" << endl;
//			cin >> choice;
//			do
//			{
//				switch (choice)
//				{
//				case 1: enter_new(&choice); break;
//				case 2: out(&choice); break;
//				case 3: del(&choice); break;
//				case 4: search(&choice); break;
//				case 6: system("cls"); main(); break;
//
//				}
//			} while (choice != 5); break;
//		case 2:setlocale(LC_ALL, "Russian");
//			cout << "Задание 5 вар 16 " << endl;
//			cout << "Введите:" << endl;
//			cout << "1-для ввода записи" << endl;
//			cout << "2-для вывода записи" << endl;
//			cout << "3-для поиска информации" << endl;
//			cout << "4-для выхода" << endl;
//			cout << "5-для выхода(очистка)" << endl;
//			cin >> choice_5;
//			do
//			{
//				switch (choice_5)
//				{
//				case 1: enter_new_5(&choice_5); break;
//				case 2: out_5(&choice_5); break;
//				case 3: search_5(&choice_5); break;
//				case 5:system("cls"); main(); break;
//
//				}
//			} while (choice_5 != 4); break;
//		case 3: break;
//		case 4: break;
//		case 5: break;
//		}
//	} while (M_choice != 6);
//}
//
//void enter_new(int *choice)
//{
//	cout << "Ввод информации" << endl;
//	if (current_size < size)
//	{
//		cout << "Строка номер ";
//		cout << current_size + 1;
//		cout << endl << "Фамилия преподователя" << endl;
//		cin >> allTeachers[current_size].surname_of_teacher;
//		cout << "Экзамен" << endl;
//		cin >> allTeachers[current_size].exam;
//		cout << "Дата" << endl;
//		cout << "День ";
//		cin >> l; b.day = l;
//		cout << endl;
//		cout << "Месяц ";
//		cin >> z; b.month = l;
//		cout << endl;
//		cout << "Год ";
//		cin >> q; b.year = l;
//		current_size++;
//	}
//	else
//		cout << "Введено максимальное кол-во строк";
//	cout << "Что дальше?" << endl;
//	cin >> *choice;
//}
//void out(int* choice)
//{
//	int sw, n;
//	cout << "1-вывод 1 строки" << endl;
//	cout << "2-вывод всех строк" << endl;
//	cin >> sw;
//	if (sw == 1)
//	{
//		cout << "Номер выводимой строки: " << endl; cin >> n; cout << endl;
//		cout << "Фамилия преподователя:";
//		cout << allTeachers[n - 1].surname_of_teacher;
//		cout << endl;
//		cout << "Экзамен:";
//		cout << allTeachers[n - 1].exam;
//		cout << endl;
//		cout << "Дата" << endl;
//		cout << "День:";
//		cout << l;
//		cout << endl;
//		cout << "Месяц:";
//		cout << z;
//		cout << endl;
//		cout << "Год:";
//		cout << q;
//		cout << endl;
//
//
//	}
//	if (sw == 2)
//	{
//		for (int i = 0; i < current_size; i++)
//		{
//
//			cout << "Фамилия преподователя:";
//			cout << allTeachers[i].surname_of_teacher;
//			cout << endl;
//			cout << "Экзамен:";
//			cout << allTeachers[i].exam;
//			cout << endl;
//			cout << "Дата" << endl;
//			cout << "День:";
//			cout << l;
//			cout << endl;
//			cout << "Месяц:";
//			cout << z;
//			cout << endl;
//			cout << "Год:";
//			cout << q;
//			cout << endl;
//
//
//		}
//	}
//	cout << "Что дальше?" << endl;
//	cin >> *choice;
//}
//void del(int* choice)
//{
//	int d;
//	cout << "\nНомер строки, которую надо удалить (для удаления всех строк нажать 99)" << endl;
//	cin >> d;
//	if (d != 99)
//	{
//		for (int de1 = (d - 1); de1 < current_size; de1++)
//			allTeachers[de1] = allTeachers[de1 + 1];
//		current_size = current_size - 1;
//	}
//	if (d == 99)
//		for (int i = 0; i < size; i++)
//			allTeachers[i] = all;
//	cout << "Что дальше?" << endl;
//	cin >> *choice;
//}
//void search(int* choice)
//{
//	int day, month, year;
//	cout << "Введите дату" << endl;
//	cout << "День:";
//	cin >> day;
//	cout << endl;
//	cout << "Месяц:";
//	cin >> month;
//	cout << endl;
//	cout << "Год:";
//	cin >> year;
//	cout << endl;
//	for (int f = 0; f < current_size; f++)
//	{
//		if (day == l && month == z && year == q)
//		{
//			cout << "Фамилия преподователя:";
//			cout << allTeachers[f].surname_of_teacher;
//			cout << endl;
//			cout << "Экзамен";
//			cout << allTeachers[f].exam;
//			cout << endl;
//			cout << "Дата" << endl;
//			cout << "День:";
//			cout << l;
//			cout << endl;
//			cout << "Месяц:";
//			cout << z;
//			cout << endl;
//			cout << "Год:";
//			cout << q;
//			cout << endl;
//		}
//	}
//	cout << "Что дальше?" << endl;
//	cin >> *choice;
//}
//
//void enter_new_5(int *choice_5)
//{
//	cout << "Ввод информации" << endl;
//	if (current_size_5 < size)
//	{
//		cout << "Строка номер ";
//		cout << current_size_5 + 1;
//		cout << endl << "Фамилия" << endl;
//		cin >> allS[current_size_5].surname.str;
//		cout << endl << "Имя " << endl;
//		cin >> allS[current_size_5].name.str;
//		cout << "Специальность " << endl;
//		cin >> allS[current_size_5].spec.str;
//		cout << "Дата поступления " << endl;
//		cin >> allS[current_size_5].data.str;
//		cout << "Группа " << endl;
//		cin >> allS[current_size_5].group.limb;
//		cout << "Факультет " << endl;
//		cin >> allS[current_size_5].fac.str;
//		cout << "Средний балл " << endl;
//		cin >> allS[current_size_5].avg.nim;
//		
//		current_size_5++;
//	}
//	else
//		cout << "Введено максимальное кол-во строк";
//	cout << "Что дальше?" << endl;
//	cin >> *choice_5;
//}
//void out_5(int* choice_5)
//{
//
//		int sw, n;
//		cout << "1-вывод 1 строки" << endl;
//		cout << "2-вывод всех строк" << endl;
//		cin >> sw;
//		if (sw == 1)
//		{
//			cout << "Номер выводимой строки: " << endl;
//			cin >> n;
//			cout << endl;
//			cout << "Фамилия ";
//			cout << allS[n - 1].surname.str << endl;
//			cout << "Имя " ;
//			cout << allS[n - 1].name.str << endl;
//			cout << "Дата поступления: " ;
//			cout << allS[n - 1].data.str << endl;
//			cout << "Специальность: ";
//			cout << allS[n - 1].spec.str << endl;
//			cout << "Группа:" ;
//			cout << allS[n - 1].group.limb << endl;
//			cout << "Факультет: " ;
//			cout << allS[n - 1].fac.str << endl;
//			cout << "Средний балл: " ;
//			cout << allS[n - 1].avg.nim << endl;
//		}
//		if (sw == 2)
//		{
//			for (int i = 0; i < current_size_5; i++)
//			{
//				cout << endl;
//				cout << "Фамилия ";
//				cout << allS[i].surname.str << endl;
//				cout << "Имя ";
//				cout << allS[i].name.str << endl;
//				cout << "Дата поступления: ";
//				cout << allS[i].data.str << endl;
//				cout << "Специальность: ";
//				cout << allS[i].spec.str << endl;
//				cout << "Группа:";
//				cout << allS[i].group.limb << endl;
//				cout << "Факультет:";
//				cout << allS[i].fac.str << endl;
//				cout << "Средний балл:";
//				cout << allS[i].avg.nim << endl;
//			}
//		}
//	cout << "Что дальше?" << endl;
//	cin >> *choice_5;
//}
//void search_5(int* choice_5)
//{
//	float aver;
//		cout << "Введите средний балл(XX.X):" << "\n";
//		cin >> aver;
//		for (int z = 0; z < current_size_5; z++)
//		{
//			if (allS[z].avg.nim - aver  < 0.01)
//			{
//				cout << "Фамилия: " ;
//				cout << allS[z].surname.str;
//				cout << endl;
//				cout << "Имя: ";
//				cout << allS[z].name.str;
//				cout << endl;
//				cout << "Дата поступления: ";
//				cout << allS[z].data.str;
//				cout << endl;
//				cout << "Специальность: ";
//				cout << allS[z].spec.str;
//				cout << endl;
//				cout << "Группа: " ;
//				cout << allS[z].group.limb;
//				cout << endl;
//				cout << "Факультет: ";
//				cout << allS[z].fac.str;
//				cout << endl;
//				cout << "Средний балл: ";
//				cout << allS[z].avg.nim;
//				cout << endl;
//			}
//		}
//	cout << "Что дальше?" << endl;
//	cin >> *choice_5;
//}


// 3 variant, 4 zadanie
// Ученики. Ф.И.О., класс (цифра+буква) предметы, оценки, средний балл. 
// Выбор по фамилии. Класс реали-зовать с помощью битового поля, предметы  через перечисление.

//#include <iostream>  
//#include<fstream>
//# define str_len 256 
//# define size 100  
//using namespace std;
//void enter_new();
//void out();
//void del();
//void search();
//struct Pupil
//{
//	char name[str_len];
//	char surname[str_len];
//	char middleName[str_len];
//	unsigned  number : 4;
//	unsigned letter : 8;
//	float average_scoree;
//};
//enum Subjects
//{
//	Math, Biology, History, Chemistry, Physics, Englysh, PE, Geography
//} subject;
//int marks;
//int average_score;
//struct Pupil pupilss_of_school[size];
//int current_size = 0; int choice;
//Pupil b;
//Pupil all;
//int l;
//char f;
//float markss[8];
//float average;
//int main()
//{
//	setlocale(LC_CTYPE, "Russian");
//	cout << "Введите:" << endl;
//	cout << "1-для ввода записи" << endl;
//	cout << "2-для вывода записи" << endl;
//	cout << "3-для удаления" << endl;
//	cout << "4-для поиска информации" << endl;
//	cout << "5-для выхода" << endl;
//	cin >> choice;
//	do
//	{
//		switch (choice)
//		{
//		case 1:  enter_new();	break;
//		case 2:  out();  break;
//		case 3:  del();  break;
//		case 4:  search();	break;
//
//
//		}
//	} while (choice != 5);
//}
//void enter_new()
//{
//	cout << "Вывод информации" << endl;
//	if (current_size < size)
//	{
//		cout << "Строка номер ";
//		cout << current_size + 1;
//		cout << endl << "Фамилия" << endl;
//		cin >> pupilss_of_school[current_size].surname;
//		cout << "Имя" << endl;
//		cin >> pupilss_of_school[current_size].name;
//		cout << "Отчество" << endl;
//		cin >> pupilss_of_school[current_size].middleName;
//		cout << "Класс: " << endl;
//		cout << " Цифру: ";
//		cin >> l; b.number = l;
//		cout << " Букву: ";
//		cin >> f; b.letter = f;
//		cout << "Предметы:" << endl;
//		Subjects::Math;
//		cout << "Математка:";
//		cin >> markss[0];
//		cout << "\n";
//		Subjects::Biology;
//		cout << "Биология:";
//		cin >> markss[1];
//		cout << "\n";
//		Subjects::History;
//		cout << "История:";
//		cin >> markss[2];
//		cout << "\n";
//		Subjects::Chemistry;
//		cout << "Химия:";
//		cin >> markss[3];
//		cout << "\n";
//		Subjects::Physics;
//		cout << "Физика:";
//		cin >> markss[4];
//		cout << "\n";
//		Subjects::Englysh;
//		cout << "Английский:";
//		cin >> markss[5];
//		cout << "\n";
//		Subjects::PE;
//		cout << "Физкультура:";
//		cin >> markss[6];
//		cout << "\n";
//		Subjects::Geography;
//		cout << "География:";
//		cin >> markss[7];
//		cout << "\n";
//		cout << "Средний балл:" << endl;
//		average = ((markss[0] + markss[1] + markss[2] + markss[3] + markss[4] + markss[5] + markss[6] + markss[7]) / 8);
//		cout << average << "\n";
//		current_size++;
//
//	}
//	else
//		cout << "Введено максимальное кол-во строк";
//	cout << "Что дальше?" << endl;
//	cin >> choice;
//}
//void out()
//{
//	int sw, n;
//	cout << "1-вывод 1 строки" << endl;
//	cout << "2-вывод всех строк" << endl;
//	cin >> sw;
//	if (sw == 1)
//	{
//		cout << "Номер выводимой строки: " << endl;   cin >> n;  cout << endl;
//		cout << "Фамилия:";
//		cout << pupilss_of_school[n - 1].surname << endl;
//		cout << "Имя:";
//		cout << pupilss_of_school[n - 1].name << endl;
//		cout << "Отчество:";
//		cout << pupilss_of_school[n - 1].middleName << endl;
//		cout << "Класс: " << endl;
//		cout << l;
//		cout << f;
//		cout << "\n";
//		cout << "Предметы и оценки:" << endl;
//		Subjects::Math;
//		cout << "Математка:";
//		cout << markss[0];
//		cout << "\n";
//		Subjects::Biology;
//		cout << "Биология:";
//		cout << markss[1];
//		cout << "\n";
//		Subjects::History;
//		cout << "История:";
//		cout << markss[2];
//		cout << "\n";
//		Subjects::Chemistry;
//		cout << "Химия:";
//		cout << markss[3];
//		cout << "\n";
//		Subjects::Physics;
//		cout << "Физика:";
//		cout << markss[4];
//		cout << "\n";
//		Subjects::Englysh;
//		cout << "Английский:";
//		cout << markss[5];
//		cout << "\n";
//		Subjects::PE;
//		cout << "Физкультура:";
//		cout << markss[6];
//		cout << "\n";
//		Subjects::Geography;
//		cout << "Ã=ГЕография:";
//		cout << markss[7];
//		cout << "\n";
//		cout << "Средний балл:" << endl;
//		cout << average << "\n";
//
//	}
//	if (sw == 2)
//	{
//		for (int i = 0; i < current_size; i++)
//		{
//			cout << "Фамилия:";
//			cout << pupilss_of_school[i].surname << endl;
//			cout << "Имя:";
//			cout << pupilss_of_school[i].name << endl;
//			cout << "Отчество:";
//			cout << pupilss_of_school[i].middleName << endl;
//			cout << "Класс: " << endl;
//			cout << l;
//			cout << f;
//			cout << "\n";
//			cout << "Предметы и оценки:" << endl;
//			Subjects::Math;
//			cout << "Математка:";
//			cout << markss[0];
//			cout << "\n";
//			Subjects::Biology;
//			cout << "Биология:";
//			cout << markss[1];
//			cout << "\n";
//			Subjects::History;
//			cout << "История:";
//			cout << markss[2];
//			cout << "\n";
//			Subjects::Chemistry;
//			cout << "Химия:";
//			cout << markss[3];
//			cout << "\n";
//			Subjects::Physics;
//			cout << "Физика:";
//			cout << markss[4];
//			cout << "\n";
//			Subjects::Englysh;
//			cout << "Английский:";
//			cout << markss[5];
//			cout << "\n";
//			Subjects::PE;
//			cout << "Физкультура:";
//			cout << markss[6];
//			cout << "\n";
//			Subjects::Geography;
//			cout << "Ã=ГЕография:";
//			cout << markss[7];
//			cout << "\n";
//			cout << "Средний балл:" << endl;
//			cout << average << "\n";
//			cout << "_________________________________________________________________________________" << "\n";
//
//		}
//	}
//	cout << "Что дальше?" << endl;
//	cin >> choice;
//}
//void del()
//{
//	int d;
//	cout << "\nНомер строки, которую надо удалить (для удаления всех строк нажать 99)" << endl;
//	cin >> d;
//	if (d != 99)
//	{
//		for (int de1 = (d - 1); de1 < current_size; de1++)
//			pupilss_of_school[de1] = pupilss_of_school[de1 + 1];
//		current_size = current_size - 1;
//	}
//	if (d == 99)
//		for (int i = 0; i < size; i++)
//			pupilss_of_school[i] = all;
//	cout << "Что дальше?" << endl;
//	cin >> choice;
//}
//void search()
//{
//	char surname[16];
//	cout << "Фамилия учащегося:" << "\n";
//	cin >> surname;
//	for (int z = 0; z < current_size; z++)
//	{
//		if (strcmp(surname, pupilss_of_school[z].surname) == 0)
//		{
//			cout << "Фамилия:";
//			cout << pupilss_of_school[z].surname << endl;
//			cout << "Имя:";
//			cout << pupilss_of_school[z].name << endl;
//			cout << "Отчество:";
//			cout << pupilss_of_school[z].middleName << endl;
//			cout << "Класс: " << endl;
//			cout << l;
//			cout << f;
//			cout << "\n";
//			cout << "Предметы и оценки:" << endl;
//			Subjects::Math;
//			cout << "Математка:";
//			cout << markss[0];
//			cout << "\n";
//			Subjects::Biology;
//			cout << "Биология:";
//			cout << markss[1];
//			cout << "\n";
//			Subjects::History;
//			cout << "История:";
//			cout << markss[2];
//			cout << "\n";
//			Subjects::Chemistry;
//			cout << "Химия:";
//			cout << markss[3];
//			cout << "\n";
//			Subjects::Physics;
//			cout << "Физика:";
//			cout << markss[4];
//			cout << "\n";
//			Subjects::Englysh;
//			cout << "Английский:";
//			cout << markss[5];
//			cout << "\n";
//			Subjects::PE;
//			cout << "Физкультура:";
//			cout << markss[6];
//			cout << "\n";
//			Subjects::Geography;
//			cout << "Ã=ГЕография:";
//			cout << markss[7];
//			cout << "\n";
//			cout << "Средний балл:" << endl;
//			cout << average << "\n";
//		}
//	}
//	cout << "Что дальше?" << endl;
//	cin >> choice;
//}




//3 variant, 5 zadanie
//Ломбард.База хранимых товаров и недвижимости : анкетные данные клиента, наименование 
// товара, оценочная стоимость; сумма, выданная под залог, дата сдачи, срок хранения.
// Выбор товаров по наименованию.


//#include <iostream>  
//#include<fstream>
//# define size 100  
//using namespace std;
//void enter_new();
//void out();
//void search();
//union forLombard
//{
//	char str[20];
//	int limb;
//};
//struct Lombard
//{
//	forLombard name;
//	forLombard surname;
//	forLombard middleName;
//	forLombard date_of_birthday;
//	forLombard place_of_live;
//	forLombard name_of_product;
//	forLombard sum;
//	forLombard sum_of_client;
//	forLombard date_of_issue;
//	forLombard shelfLife;
//};
//Lombard base_of_lombard[size];
//int current_size = 0; int choice;
//int main()
//{
//	setlocale(LC_CTYPE, "Russian");
//	cout << "Введите число:" << endl;
//	cout << "1-для ввода записи" << endl;
//	cout << "2-для вывода записи" << endl;
//	cout << "3-для поиска информации" << endl;
//	cout << "4-для выхода" << endl;
//	cin >> choice;
//	do
//	{
//		switch (choice)
//		{
//		case 1:  enter_new();	break;
//		case 2:  out();  break;
//		case 3:  search();	break;
//		}
//	} while (choice != 4);
//}
//void enter_new()
//{
//	cout << "Ввод информации" << endl;
//	if (current_size < size)
//	{
//		cout << "Строка номер  ";
//		cout << current_size + 1;
//		cout << "\n";
//		cout << "                     " << "Анкета клиента" << "\n";
//		cout << endl << "Фамилия" << endl;
//		cin >> base_of_lombard[current_size].name.str;
//		cout << "Имя" << endl;
//		cin >> base_of_lombard[current_size].surname.str;
//		cout << "Отчество" << endl;
//		cin >> base_of_lombard[current_size].middleName.str;
//		cout << "Дата рождения" << endl;
//		cin >> base_of_lombard[current_size].date_of_birthday.str;
//		cout << "Место проживания" << endl;
//		cin >> base_of_lombard[current_size].place_of_live.str;
//		cout << "                     " << "Информация о товаре" << "\n";
//		cout << "Наименование товара" << endl;
//		cin >> base_of_lombard[current_size].name_of_product.str;
//		cout << "Оценочная стоимость" << endl;
//		cin >> base_of_lombard[current_size].sum.limb;
//		cout << "Сумма под залог" << endl;
//		cin >> base_of_lombard[current_size].sum_of_client.limb;
//		cout << "Дата сдачи" << endl;
//		cin >> base_of_lombard[current_size].date_of_issue.str;
//		cout << "Срок хранения" << endl;
//		cin >> base_of_lombard[current_size].shelfLife.str;
//		current_size++;
//
//	}
//	else
//		cout << "Введено максимальное кол-во строк";
//	cout << "Что дальше?" << endl;
//	cin >> choice;
//}
//void out()
//{
//	int sw, n;
//	cout << "1-вывести 1 строку" << endl;
//	cout << "2-вывести все строки" << endl;
//	cin >> sw;
//	if (sw == 1)
//	{
//		cout << "Номер выводимой строки: " << endl;
//		cin >> n;
//		cout << endl;
//		cout << "                     " << "Анкета клиента" << "\n";
//		cout << "Фамилия:";
//		cout << base_of_lombard[n - 1].surname.str;
//		cout << endl;
//		cout << "Имя:";
//		cout << base_of_lombard[n - 1].name.str;
//		cout << endl;
//		cout << "Отчество:";
//		cout << base_of_lombard[n - 1].middleName.str;
//		cout << endl;
//		cout << "Дата рождения:";
//		cout << base_of_lombard[n - 1].date_of_birthday.str;
//		cout << endl;
//		cout << "Место проживания:";
//		cout << base_of_lombard[n - 1].place_of_live.str;
//		cout << endl;
//		cout << "                     " << "Информация о товаре" << "\n";
//		cout << "Наименование товара:";
//		cout << base_of_lombard[n - 1].name_of_product.str;
//		cout << endl;
//		cout << "Оценочная стоимость:";
//		cout << base_of_lombard[n - 1].sum.limb;
//		cout << endl;
//		cout << "Сумма под залог:";
//		cout << base_of_lombard[n - 1].sum_of_client.limb;
//		cout << endl;
//		cout << "Дата сдачи:";
//		cout << base_of_lombard[n - 1].date_of_issue.str;
//		cout << endl;
//		cout << "Срок хранения:";
//		cout << base_of_lombard[n - 1].shelfLife.str;
//		cout << endl;
//	}
//	if (sw == 2)
//	{
//		for (int i = 0; i < current_size; i++)
//		{
//			cout << "                     " << "Анкета клиента" << "\n";
//			cout << "Фамилия:";
//			cout << base_of_lombard[i].surname.str;
//			cout << endl;
//			cout << "Имя:";
//			cout << base_of_lombard[i].name.str;
//			cout << endl;
//			cout << "Отчество:";
//			cout << base_of_lombard[i].middleName.str;
//			cout << endl;
//			cout << "Дата рождения:";
//			cout << base_of_lombard[i].date_of_birthday.str;
//			cout << endl;
//			cout << "Место проживания:";
//			cout << base_of_lombard[i].place_of_live.str;
//			cout << endl;
//			cout << "                     " << "Информация о товаре" << "\n";
//			cout << "Наименование товара:";
//			cout << base_of_lombard[i].name_of_product.str;
//			cout << endl;
//			cout << "Оценочная стоимость:";
//			cout << base_of_lombard[i].sum.limb;
//			cout << endl;
//			cout << "Сумма под залог:";
//			cout << base_of_lombard[i].sum_of_client.limb;
//			cout << endl;
//			cout << "Дата сдачи:";
//			cout << base_of_lombard[i].date_of_issue.str;
//			cout << endl;
//			cout << "Срок хранения:";
//			cout << base_of_lombard[i].shelfLife.str;
//			cout << endl;
//
//		}
//	}
//	cout << "Что дальше?" << endl;
//	cin >> choice;
//}
//void search()
//{
//	char name[16];
//	cout << "Введите наименование товара:" << "\n";
//	cin >> name;
//	for (int z = 0; z < current_size; z++)
//	{
//		if (strcmp(name, base_of_lombard[z].name_of_product.str) == 0)
//		{
//			cout << " " << "\nАнкета клиента: " << "\n\n";
//			cout << "Фамилия:";
//			cout << base_of_lombard[z].surname.str;
//			cout << endl;
//			cout << "Имя:";
//			cout << base_of_lombard[z].name.str;
//			cout << endl;
//			cout << "Отчество:";
//			cout << base_of_lombard[z].middleName.str;
//			cout << endl;
//			cout << "Дата рождения:";
//			cout << base_of_lombard[z].date_of_birthday.str;
//			cout << endl;
//			cout << "Место проживания:";
//			cout << base_of_lombard[z].place_of_live.str;
//			cout << endl;
//			cout << " " << "\nИнформация о товаре: " << "\n\n";
//			cout << "Наименование товара:";
//			cout << base_of_lombard[z].name_of_product.str;
//			cout << endl;
//			cout << "Оценочаня стоимость:";
//			cout << base_of_lombard[z].sum.limb;
//			cout << endl;
//			cout << "Сумма под залог:";
//			cout << base_of_lombard[z].sum_of_client.limb;
//			cout << endl;
//			cout << "Дата сдачи:";
//			cout << base_of_lombard[z].date_of_issue.str;
//			cout << endl;
//			cout << "Срок хранения:";
//			cout << base_of_lombard[z].shelfLife.str;
//			cout << endl;
//
//		}
//	}
//	cout << "Что дальше?" << endl;
//	cin >> choice;
//}

// 7 var 4 
//Склад. Наименование товара, цена, количество, процент торговой надбавки (5, 7, 11, 20, 25, 30).
// Выбор по цене. Процент торговой надбавки реализовать с помощью перечисления. 

//#include <iostream>
//#include<fstream>
//# define str_len 256
//# define size 100
//using namespace std;
//void enter_new();
//void out();
//void del();
//void search();
//struct Sklad
//{
//	char name_of_product[str_len];
//	float cell;
//	int many;
//	int per;
//};
//enum Percent
//{
//	five = 5, seven = 7, eleven = 11, twenty = 20, twentyFive = 25, thirty = 30
//};
//Sklad productOnSclad[size];
//Sklad all;
//int choice; int current_size = 0;
//int sell;
//int main()
//{
//	setlocale(LC_CTYPE, "Russian");
//	cout << "Введите:" << endl;
//	cout << "1-для ввода записи" << endl;
//	cout << "2-для вывода записи" << endl;
//	cout << "3-для удаления" << endl;
//	cout << "4-для поиска информации" << endl;
//	cout << "5-для выхода" << endl;
//	cin >> choice;
//	do
//	{
//		switch (choice)
//		{
//		case 1: enter_new(); break;
//		case 2: out(); break;
//		case 3: del(); break;
//		case 4: search(); break;
//
//
//		}
//	} while (choice != 5);
//}
//void enter_new()
//{
//	cout << "Ввод информации" << endl;
//	if (current_size < size)
//	{
//		cout << "Строка номер ";
//		cout << current_size + 1;
//		cout << endl << "Наименование товара" << endl;
//		cin >> productOnSclad[current_size].name_of_product;
//		cout << "Цена" << endl;
//		cin >> productOnSclad[current_size].cell;
//		cout << "Количество" << endl;
//		cin >> productOnSclad[current_size].many;
//		cout << "Процентная надбавка" << endl;
//		cin >> productOnSclad[current_size].per;
//		current_size++;
//	}
//	else
//		cout << "Введено максимальное кол-во строк";
//	cout << "Что дальше?" << endl;
//	cin >> choice;
//}
//void out()
//{
//	int sw, n;
//	cout << "1-вывод 1 строки" << endl;
//	cout << "2-вывод всех строк" << endl;
//	cin >> sw;
//	if (sw == 1)
//	{
//		cout << "Строка номер "; cin >> n;
//		cout << endl << "Наименование товара:" << endl;
//		cout << productOnSclad[n - 1].name_of_product << endl;
//		cout << "Цена:" << endl;
//		cout << productOnSclad[n - 1].cell << endl;
//		cout << "Количество:" << endl;
//		cout << productOnSclad[n - 1].many << endl;
//		if (productOnSclad[n - 1].per == 5)
//		{
//			cout << "Процентная надбавка=" << five << "%" << endl;
//		}
//		else if (productOnSclad[n - 1].per == 7)
//		{
//			cout << "Процентная надбавка=" << seven << "%" << endl;
//		}
//		else if (productOnSclad[n - 1].per == 11)
//		{
//			cout << "Процентная надбавка=" << eleven << "%" << endl;
//		}
//		else if (productOnSclad[n - 1].per == 20)
//		{
//			cout << "Процентная надбавка=" << twenty << "%" << endl;
//		}
//		else if (productOnSclad[n - 1].per == 25)
//		{
//			cout << "Процентная надбавка=" << twentyFive << "%" << endl;
//		}
//		else if (productOnSclad[n - 1].per == 30)
//		{
//			cout << "Процентная надбавка=" << thirty << "%" << endl;
//		}
//
//	}
//	if (sw == 2)
//	{
//		for (int i = 0; i < current_size; i++)
//		{
//			cout << endl << "Наименование товара:" << endl;
//			cout << productOnSclad[i].name_of_product << endl;
//			cout << "Цена:" << endl;
//			cout << productOnSclad[i].cell << endl;
//			cout << "Количество:" << endl;
//			cout << productOnSclad[i].many << endl;
//			if (productOnSclad[i].per == 5)
//			{
//				cout << "Процентная надбавка=" << five << "%" << endl;
//			}
//			else if (productOnSclad[i].per == 7)
//			{
//				cout << "Процентная надбавка=" << seven << "%" << endl;
//			}
//			else if (productOnSclad[i].per == 11)
//			{
//				cout << "Процентная надбавка=" << eleven << "%" << endl;
//			}
//			else if (productOnSclad[i].per == 20)
//			{
//				cout << "Процентная надбавка=" << twenty << "%" << endl;
//			}
//			else if (productOnSclad[i].per == 25)
//			{
//				cout << "Процентная надбавка=" << twentyFive << "%" << endl;
//			}
//			else if (productOnSclad[i].per == 30)
//			{
//				cout << "Процентная надбавка=" << thirty << "%" << endl;
//			}
//
//		}
//
//	}
//	cout << "Что дальше?" << endl;
//	cin >> choice;
//}
//void del()
//{
//	int d;
//	cout << "\nНомер строки, которую надо удалить (для удаления всех строк нажать 99)" << endl;
//	cin >> d;
//	if (d != 99)
//	{
//		for (int de1 = (d - 1); de1 < current_size; de1++)
//			productOnSclad[de1] = productOnSclad[de1 + 1];
//		current_size = current_size - 1;
//	}
//	if (d == 99)
//		for (int i = 0; i < size; i++)
//			productOnSclad[i] = all;
//	cout << "Что дальше?" << endl;
//	cin >> choice;
//}
//void search()
//{
//	cout << "Цена товара:" << "\n";
//	cin >> sell;
//	for (int z = 0; z < current_size; z++)
//	{
//		if (sell == productOnSclad[z].cell)
//		{
//			cout << endl << "Наименование товара:" << endl;
//			cout << productOnSclad[z].name_of_product << endl;
//			cout << "Цена:" << endl;
//			cout << productOnSclad[z].cell << endl;
//			cout << "Количество:" << endl;
//			cout << productOnSclad[z].many << endl;
//			if (productOnSclad[z].per == 5)
//			{
//				cout << "Процентная надбавка=" << five << "%" << endl;
//			}
//			else if (productOnSclad[z].per == 7)
//			{
//				cout << "Процентная надбавка=" << seven << "%" << endl;
//			}
//			else if (productOnSclad[z].per == 11)
//			{
//				cout << "Процентная надбавка=" << eleven << "%" << endl;
//			}
//			else if (productOnSclad[z].per == 20)
//			{
//				cout << "Процентная надбавка=" << twenty << "%" << endl;
//			}
//			else if (productOnSclad[z].per == 25)
//			{
//				cout << "Процентная надбавка=" << twentyFive << "%" << endl;
//			}
//			else if (productOnSclad[z].per == 30)
//			{
//				cout << "Процентная надбавка=" << thirty << "%" << endl;
//			}
//
//		}
//
//	}
//	cout << "Что дальше?" << endl;
//	cin >> choice;
//}