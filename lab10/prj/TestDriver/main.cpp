#include <iostream>
#include <fstream>
#include <ctime>
#include <locale>
#include "ModulesTkachenko.h"

using namespace std;

int main() {
   setlocale(LC_ALL, "ukr");
    function_10_1();
    fstream output;
    output.open("C:\\Users\\User\\Documents\\лаб10\\output.txt", ios_base::in);
    fstream input;
    input.open("C:\\Users\\User\\Documents\\лаб10\\input.txt", ios_base::in);

    string line;
    int number;
    string output_text [2] = {"Олексій Ткаченко, ЦНТУ, Кропивницький, Україна, 2023", "Пунктуаційних помилок немає"};

    string result;
    int i = 0;
    int j = 0;
    while (getline(output, line))
    {
        if (i == 0)
        {
            if(line == output_text[0])
                j += 1;
        }
        if (i == 1)
        {
            number = atoi(line.c_str());
            if (number>=10 &&number <=100)
                j += 1;
        }
        if (i == 2)
        {
            if(line == output_text[1])
                j += 1;
        }
        i += 1;
        if (i==3)
        {
            if(j==3)
                cout <<"Function_10_1 output is passed" << endl;
            else
                cout << "Function_10_1 output is failed" << endl;
        }
    }

    string input_text [7] =
    {
        "Як парость виноградної лози, плекайте мову.",
        "Пильно й ненастанно політь бур'ян.",
        "Чистіша від сльози вона хай буде.",
        "Вірно і слухняно нехай вона щоразу служить вам,",
        "Хоч і живе своїм живим життям.",
        "",
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
    };
    i = 0;
    j = 0;
    while (getline(input, line))
    {
        if(line == input_text[i])
            j += 1;
        if (i == 4)
        {
            if (j == 5)
                cout << "Function_10_1 input is passed" << endl;
            else
                cout << "Function_10_1 input is failed" << endl;
        }
        i += 1;
        if (i == 5)
            break;
    }
    input.close();
    output.close();

    function_10_2();
    input.open("C:\\Users\\User\\Documents\\лаб10\\input.txt", ios_base::in);
    string time1;
    time_t rawtime;
    time(&rawtime);
    time1 = ctime(&rawtime);
    i = 0;
    j = 0;
    while (getline(input, line))
    {
        if (line == input_text[i])
            j += 1;
        if (line == time1)
        {
            if (j == 7)
                cout << "Function_10_2 is passed" << endl;
            else
                cout << "Function_10_2 is failed" << endl;
        }
        i += 1;
    }
    input.close();

    function_10_3(1, 2, 5, 6);
    output.open("C:\\Users\\User\\Documents\\лаб10\\output.txt", ios_base::in);
    string text [2] = {"-1262.22", "00000000000000000000000000000110"};
    i = 0;
    j = 0;
    while (getline(output, line))
    {
        if (line == text[0] || line == text[1])
            j += 1;
        if (i == 4)
        {
            if (j == 2)
                cout << "Function_10_3 is passed" << endl;
            else
                cout << "Function_10_3 is failed" << endl;
        }
        i += 1;
    }
    output.close();
    return 0;
}
