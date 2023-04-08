#include <iostream>
#include "ModulesTkachenko.h"
#include <Windows.h>
#include <iomanip>

using namespace std;

int main()
{
    SetConsoleOutputCP(1251);
    cout << "Function 9.1 test" << endl;
    int input1 [4] = {0, 9, 13, -5};
    std::string output1 [4] =
    {
        "Швидкість вітру: < 0,0003 км/с. Дія вітру: відсутність вітру; дим піднімається прямовисто; листя дерев нерухомі.",
        "Швидкість вітру: 0,0208 - 0,0244 км/с. Дія вітру: невеликі руйнування; зриває покрівлі, руйнує димарі.",
        "Error: incorrect input",
        "Error: incorrect input"
    };
    cout << "input\t" << setw(15) << "output\t" << setw(15) << "case status" << endl;
    for (int i = 0; i < 4; i++)
    {
        if (function_9_1(input1[i]) != output1[i])
        {
            cout << function_9_1(input1[i]) << setw(15) << output1[i] << setw(15) << "failed" << endl;
        }
        else
        {
            cout << function_9_1(input1[i]) << setw(15) << output1[i] << setw(15) << "passed" << endl;
        }
    }

    cout << "Function 9.2 test" << endl;
    int input2 [4] = {505, 617, 321, 715};
    std::string output2 [4] =
    {
        "Розмір: M, дитячий",
        "Розмір: XL, дорослий",
        "Error: incorrect input",
        "Error: incorrect input"
    };
    cout << "input\t" << setw(15) << "output\t" << setw(15) << "case status" << endl;
    for (int i = 0; i < 4; i++)
    {
        if (function_9_2(input2[i]) != output2[i])
        {
            cout << function_9_2(input2[i]) << setw(15) << output2[i] << setw(15) << "failed" << endl;
        }
        else
        {
            cout << function_9_2(input2[i]) << setw(15) << output2[i] << setw(15) << "passed" << endl;
        }
    }

    cout << "Function 9.3 test" << endl;
    int input3 [4] = {456, 57869, 5678, -98};
    std::string output3 [4] =
    {
        "Кількість двійкових нулів: 3",
        "Error: incorrect input",
        "Кількість двійкових одиниць: 7",
        "Error: incorrect input"
    };
    cout << "input\t" << setw(15) << "output\t" << setw(15) << "case status" << endl;
    for (int i = 0; i < 4; i++)
    {
        if (function_9_3(input3[i]) != output3[i])
        {
            cout << function_9_3(input3[i]) << setw(15) << output3[i] << setw(15) << "failed" << endl;
        }
        else
        {
            cout << function_9_3(input3[i]) << setw(15) << output3[i] << setw(15) << "passed" << endl;
        }
    }
    return 0;
}
