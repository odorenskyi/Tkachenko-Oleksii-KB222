#include <iostream>
#include "ModulesTkachenko.h"
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "ukr");
    while (true)
    {
        char user_choice;
        cout << "������� ��: 1) s_calculation - ���� 2) ������� 9.1 - 5 3) ������� 9.2 - 4 4) ������� 9.1 - 3: ";
        cin >> user_choice;

        switch (user_choice)
        {
        case '\\':
            float x, y, z;
            cout << "������ x, y, z: ";
            cin >> x >> y >> z;
            cout << s_calculation(x, y, z) << endl;
        case '5':
            int ball_bofort;
            cout << "������ ��� �������: ";
            cin >> ball_bofort;
            cout << function_9_1(ball_bofort) << endl;
        case '4':
            int girth_of_head;
            cout << "������ ������ ������ � ��������: ";
            cin >> girth_of_head;
            cout << function_9_2(girth_of_head) << endl;
        case '3':
            int N;
            cout << "������ ���������� ����� N �� 0 �� 8999: ";
            cin >> N;
            cout << function_9_3(N) << endl;
        default:
            cout << '\a';
        }
        char continue_or_not;
        cout << "��� ���������� ������ t,T ��� C, ������ ������ ����� ������: ";
        cin >> continue_or_not;
        if (continue_or_not == 't' || continue_or_not == 'T' || continue_or_not == 'C')
            continue;
        break;
    }
    return 0;
}
