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
            return "Швидкість вітру: < 0,0003 км/с. Дія вітру: відсутність вітру; дим піднімається прямовисто; листя дерев нерухомі.";
        case 1:
            return "Швидкість вітру: 0,0003 - 0,0015 км/с. Дія вітру: дим 'пливе'; флюгер не обертається.";
        case 2:
            return "Швидкість вітру: 0,0016 - 0,0024 км/с. Дія вітру: рух повітря відчувається обличчям; шелестить листя; флюгер обертається.";
        case 3:
            return "Швидкість вітру: 0,0024 - 0,0054 км/с. Дія вітру: тріпоче листя, хитаються дрібні гілки; майорять прапори.";
        case 4:
            return "Швидкість вітру: 0,0055 - 0,0079 км/с. Дія вітру: хитаються тонкі гілки; вітер піднімає пил та шматки паперу.";
        case 5:
            return "Швидкість вітру: 0,008 - 0,0107 км/с. Дія вітру: хитаються великі гілки; на воді з'являються хвилі.";
        case 6:
            return "Швидкість вітру: 0,0108 - 0,0138 км/с. Дія вітру: хитаються великі гілки.";
        case 7:
            return "Швидкість вітру: 0,0139 - 0,0171 км/с. Дія вітру: хитаються невеликі стовбури дерев; на морі здіймаються хвилі, піняться.";
        case 8:
            return "Швидкість вітру: 0,0172 - 0,0207 км/с. Дія вітру: ламаються гілки дерев, і важко йти проти вітру.";
        case 9:
            return "Швидкість вітру: 0,0208 - 0,0244 км/с. Дія вітру: невеликі руйнування; зриває покрівлі, руйнує димарі.";
        case 10:
            return "Швидкість вітру: 0,0245 - 0,0284 км/с. Дія вітру: значні руйнування; дерева вириваються з корінням.";
        case 11:
            return "Швидкість вітру: 0,0285 - 0,0326 км/с. Дія вітру: великі руйнування.";
        case 12:
            return "Швидкість вітру: >= 0,0327 км/с. Дія вітру: призводить до спустошень.";
        default:
            return "Error: incorrect input";
    }
}

std::string function_9_2 (int girth_of_head)
{
    if (girth_of_head >= 480 && girth_of_head <= 490)
    {
        return "Розмір: S, дитячий";
    }
    else if (girth_of_head >= 500 && girth_of_head <= 510)
    {
        return "Розмір: M, дитячий";
    }
    else if (girth_of_head >= 520 && girth_of_head <= 530)
    {
        return "Розмір: L, дитячий";
    }
    else if (girth_of_head >= 530 && girth_of_head <= 540)
    {
        return "Розмір: XS, дорослий";
    }
    else if (girth_of_head >= 550 && girth_of_head <= 560)
    {
        return "Розмір: S, дорослий";
    }
    else if (girth_of_head >= 570 && girth_of_head <= 580)
    {
        return "Розмір: M, дорослий";
    }
    else if (girth_of_head >= 590 && girth_of_head <= 600)
    {
        return "Розмір: L, дорослий";
    }
    else if (girth_of_head >= 610 && girth_of_head <= 620)
    {
        return "Розмір: XL, дорослий";
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
