#include <iostream>
#include <Windows.h>
#include "ModulesTkachenko.h"

using namespace std;

developer()
{
    cout << (char)0xA9 << "�������� ������ " << endl;
}

logic_a_b(char a, char b)
{
    if (a + 1 <= b)
    {
        cout << "Result: 1" << endl;
    }
    else
    {
        cout << "Result: 0" << endl;
    }
}

x_y_z_decimal_and_hex_transformation(int x, int y, int z)
{
    cout << "X, Y, Z � ���������: " << x << ", " << y << ", " << z << endl;
    printf("X, Y, Z � ��������������: %X, %X, %X\n", x, y, z);
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    developer();
    char a, b;
    cout << "������ a, b: " << endl;
    cin >> a >> b;
    logic_a_b(a, b);
    float x, y, z;
    cout << "������ x, y, z: " << endl;
    cin >> x >> y >> z;
    x_y_z_decimal_and_hex_transformation(x, y, z);
    cout << "S = " << s_calculation(x, y, z);

    return 0;
}
