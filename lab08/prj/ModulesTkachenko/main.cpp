// The functions contained in this file are pretty dummy
// and are included only as a placeholder. Nevertheless,
// they *will* get included in the static library if you
// don't remove them :)
//
// Obviously, you 'll have to write yourself the super-duper
// functions to include in the resulting library...
// Also, it's not necessary to write every function in this file.
// Feel free to add more files in this project. They will be
// included in the resulting library.

#define _USE_MATH_DEFINES
#include <math.h>
#include <iostream>

float s_calculation(float x, float y, float z)
{
    float S = log(abs(sin(z))) + (0.5 * pow(x,2) - sqrt(abs(pow(y+z,2) - pow(x,5)))) / 10 * M_PI * pow(z,4);

    return S;
}

std::string function_9_1 (int ball_bofort)
{
    switch (ball_bofort)
    {
        case 0:
            return "�������� ����: < 0,0003 ��/�. ĳ� ����: ��������� ����; ��� ��������� ����������; ����� ����� �������.";
        case 1:
            return "�������� ����: 0,0003 - 0,0015 ��/�. ĳ� ����: ��� '�����'; ������ �� ����������.";
        case 2:
            return "�������� ����: 0,0016 - 0,0024 ��/�. ĳ� ����: ��� ������ ���������� ��������; ��������� �����; ������ ����������.";
        case 3:
            return "�������� ����: 0,0024 - 0,0054 ��/�. ĳ� ����: ������ �����, ��������� ���� ����; �������� �������.";
        case 4:
            return "�������� ����: 0,0055 - 0,0079 ��/�. ĳ� ����: ��������� ���� ����; ���� ����� ��� �� ������ ������.";
        case 5:
            return "�������� ����: 0,008 - 0,0107 ��/�. ĳ� ����: ��������� ����� ����; �� ��� �'��������� ����.";
        case 6:
            return "�������� ����: 0,0108 - 0,0138 ��/�. ĳ� ����: ��������� ����� ����.";
        case 7:
            return "�������� ����: 0,0139 - 0,0171 ��/�. ĳ� ����: ��������� ������� �������� �����; �� ��� ���������� ����, �������.";
        case 8:
            return "�������� ����: 0,0172 - 0,0207 ��/�. ĳ� ����: ��������� ���� �����, � ����� ��� ����� ����.";
        case 9:
            return "�������� ����: 0,0208 - 0,0244 ��/�. ĳ� ����: ������� ����������; ����� ������, ����� �����.";
        case 10:
            return "�������� ����: 0,0245 - 0,0284 ��/�. ĳ� ����: ����� ����������; ������ ����������� � �������.";
        case 11:
            return "�������� ����: 0,0285 - 0,0326 ��/�. ĳ� ����: ����� ����������.";
        case 12:
            return "�������� ����: >= 0,0327 ��/�. ĳ� ����: ���������� �� ����������.";
        default:
            return "Error: incorrect input";
    }
}

std::string function_9_2 (int girth_of_head)
{
    if (girth_of_head >= 480 && girth_of_head <= 490)
    {
        return "�����: S, �������";
    }
    else if (girth_of_head >= 500 && girth_of_head <= 510)
    {
        return "�����: M, �������";
    }
    else if (girth_of_head >= 520 && girth_of_head <= 530)
    {
        return "�����: L, �������";
    }
    else if (girth_of_head >= 530 && girth_of_head <= 540)
    {
        return "�����: XS, ��������";
    }
    else if (girth_of_head >= 550 && girth_of_head <= 560)
    {
        return "�����: S, ��������";
    }
    else if (girth_of_head >= 570 && girth_of_head <= 580)
    {
        return "�����: M, ��������";
    }
    else if (girth_of_head >= 590 && girth_of_head <= 600)
    {
        return "�����: L, ��������";
    }
    else if (girth_of_head >= 610 && girth_of_head <= 620)
    {
        return "�����: XL, ��������";
    }
    else
    {
        return "Error: incorrect input";
    }
}

int function_9_3 (int N)
{
    int bit_of_N = (N >> 10) & 1;
    if (bit_of_N == 0)
    {
        int amount = 0;
        while ((N & 1) == 0)
        {
            amount++;
            N >>= 1;
        }
        return amount;
        }
    else
    {
        int amount = 0;
        while (N != 0)
        {
            if (N & 1)
                amount++;
            N >>= 1;
        }
        return amount;
    }
}
