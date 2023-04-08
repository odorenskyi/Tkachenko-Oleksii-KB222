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
        cout << "¬ибер≥ть д≥ю: 1) s_calculation - слеш 2) функц≥€ 9.1 - 5 3) функц≥€ 9.2 - 4 4) функц≥€ 9.1 - 3: ";
        cin >> user_choice;

        switch (user_choice)
        {
        case '\\':
            float x, y, z;
            cout << "¬вед≥ть x, y, z: ";
            cin >> x >> y >> z;
            cout << s_calculation(x, y, z) << endl;
        case '5':
            int ball_bofort;
            cout << "¬вед≥ть бал Ѕофорта: ";
            cin >> ball_bofort;
            cout << function_9_1(ball_bofort) << endl;
        case '4':
            int girth_of_head;
            cout << "¬вед≥ть обхват голови у м≥л≥метрах: ";
            cin >> girth_of_head;
            cout << function_9_2(girth_of_head) << endl;
        case '3':
            int N;
            cout << "¬вед≥ть натуральне число N в≥д 0 до 8999: ";
            cin >> N;
            cout << function_9_3(N) << endl;
        default:
            cout << '\a';
        }
        char continue_or_not;
        cout << "ўоб продовжити введ≥ть t,T або C, ≥накше введ≥ть ≥нший символ: ";
        cin >> continue_or_not;
        if (continue_or_not == 't' || continue_or_not == 'T' || continue_or_not == 'C')
            continue;
        break;
    }
    return 0;
}
