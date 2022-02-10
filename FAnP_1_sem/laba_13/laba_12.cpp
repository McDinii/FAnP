#include <iostream>
#include <cstring>
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string>
using namespace std;
void t2() {
    char str[] = "1111 0000 1111 00 111 000 111111 0 1111 000 1111111 1";
    int k = 0, c[100], n = strlen(str), t = 0;
    for (int i = 0; i <= n; i++) {
        if (str[i] == '1') {
            k++;
        }
        else if (k > 0) {
            if (k % 2 == 1) {
                c[t] = k;
                t++;
            }
            k = 0;
            continue;
        }
    }


    for (int i = 0; i < t; i++) {
        cout << "Кол-во единиц в нечетных группах: " << c[i] << endl;
    }
}
void t1() {
    char s, t[100], t1[100];
    int j, n;
    cout << "Input string: ";
    cin >> t;
    n = strlen(t);
    for (int i = 0; i <= n; i++) {
        if (t[i] == '\'') {
            do {
                t[i] = '$';
                i++;
            } while (t[i] != '\'');
            t[i] = '$';
        }
    }
    int l = 0;
    for (int k = 0; k < n; k++) {
        if (t[k] != '$') {
            t1[l] = t[k];
            l++;
        }
    }
    t1[l] = '\0';
    cout << t1;
}
//доп 1 
void add1() {
    char str[] = "лабы пети деды денисы маши васи коты ";
    int k = 0, c[100], n = strlen(str), t = 0, l = 0;
    for (int i = 0; i <= n; i++) {
        if (str[i] == ' ') {
            if (str[i - 1] == 'ы') {
                for (int j = l; j < i; j++) {
                    cout << str[j];

                }
                cout << " ";
            }
            l = i + 1;
        }

    }

}
void add2(){
    char str[] = "HOW DO YOU DO fkjkjd ffgg", str1[100];
    int k = 1, c[100], n = strlen(str), t = 0;
    for (int i = 0; i < n; i++) {
        if (str[i] == ' ') {
            if (k % 2 == 1) {
                do {
                    str1[t] = str[i];
                    t++;
                    i++;
                } while (str[i + 1] != ' ' && i < n );
                str1[t] = str[i];
                t++;
            }
            k++;

        }
    }
    reverse(str1, str1 + t);
    for (int f = 0; f < t; f++) {
        cout << str1[f];
    }
}
//3
void add3() {
    char str[] = "HOW DO YOU DO fkjkjd ffgg", str1[100];
    int k = 1, c[100], n = strlen(str), t = 0;
    for (int i = 0; i < n; i++) {
        if (str[i] == ' ') {
            if (k % 2 == 1) {
                do {
                    str1[t] = str[i];
                    t++;
                    i++;
                } while (str[i + 1] != ' ' && i < n);
                str1[t] = str[i];
                t++;
            }
            k++;

        }
    }
    reverse(str1, str1 + t);
    for (int f = 0; f < t; f++) {
        cout << str1[f];
    }
//    string str[] = { "Шла", "Саша", "по", "шоссе", "и", "сосала", "сушку", "Саша","."};
//    int n = size(str);
//    for (int i = 0; i < n ; i++)
//    {
//        cout << str[i] << " ";
//    }
//    string slovo = "Саша";
//    for (int g = 0; g < 12; g++)
//    {
//        if (str[g] == slovo)
//        {
//            str[g] = "";
//        }
//    }
//    cout << endl;
//    for (int h = 0; h < n; h++)
//    {
//        cout << str[h] << " ";
//    }
// 
}
int main()
{
    setlocale(LC_ALL, "Russian");
    add3();
}