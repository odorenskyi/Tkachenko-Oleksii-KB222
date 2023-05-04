#ifndef M_H_INCLUDED
#define M_H_INCLUDED

#define PI 3.14
#include <iostream>
#include <sstream>
#include <regex>

float s_calculation(float x, float y, float z);

std::string function_9_1 (int ball_bofort);

std::string function_9_2 (int girth_of_head);

std::string function_9_3 (int N);

void function_10_1();

void function_10_2();

void function_10_3(float x, float y, float z, int b);

using namespace std;
class ClassLab12_Tkachenko
{
    private:
        double height, radius;

    public:
        void setHeight(string value);
        double getHeight() { return height; }
        void setRadius(string value);
        double getRadius() { return radius; }
        double LateralSurfaceArea() { return 2 * PI * radius * height; }
};

void ClassLab12_Tkachenko::setHeight(string value)
{
    float f;
    value = regex_replace(value, regex(","), ".");
    stringstream ss(value);
    if (ss >> f)
    {
        if (stof(value) >= 0.5 && stof(value) <= 1200) //висота береться в см
            height = stof(value);
        else
            height = 0;
    }
    else
        height = 0;
}

void ClassLab12_Tkachenko::setRadius(string value)
{
    float f;
    value = regex_replace(value, regex(","), ".");
    stringstream ss(value);
    if (ss >> f)
    {
        if (stof(value) >= 0.5 && stof(value) <= 21.3) //радіус береться в см
            radius = stof(value);
        else
            radius = 0;
    }
    else
        radius = 0;
}

#endif // M_H_INCLUDED
