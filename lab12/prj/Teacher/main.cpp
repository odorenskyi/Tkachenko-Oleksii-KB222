#include <iostream>
#include <fstream>
#include <Windows.h>
#include "ModulesTkachenko.h"

using namespace std;

bool fileInDirectory()
{
    string cpp = __FILE__;
    size_t found = cpp.find("\\lab12\\prj");

    if (found == string::npos) {
        ofstream resFile("../TestSuite/TestResults.txt");
        resFile << "Встановлені вимоги порядку виконання лабораторної роботи порушено!" << endl;
        for (int i = 0; i < 100; i++)
            cout << "\a";
        resFile.close();
        return false;
    }
    return true;
}

void TestSuiteResults(ofstream &results, ClassLab12_Tkachenko pipe, string out_area, string expected_area, int index)
{
    results << "TEST CASE " << index << endl;
    results << "Висота труби: \t" << pipe.getHeight() << " cм" << endl;
    results << "Радіус труби: \t"  << pipe.getRadius() << " cм" << endl;
    results << "Розрахована площа труби: \t" << out_area << " cм^2" << endl;
    results << "Очікувана площа труби: \t" << expected_area << " cм^2" << endl;
    if (out_area == expected_area)
        results << "TEST CASE RESULT: passed\n"<< endl;
    else
        results << "TEST CASE RESULT: failed\n"<< endl;
}


int main()
{
    SetConsoleOutputCP(1251);
    if (fileInDirectory() == false) { return 0; }

    ClassLab12_Tkachenko pipe;

    ifstream cases("../TestSuite/TestSuite.txt");
    ofstream results("../TestSuite/TestResults.txt");

    if (!cases.is_open() || !results.is_open())
    {
        cout << "Error: не вдалося відкрити файли." << endl;
        return 0;
    }

    for (int i = 1; i < 11; i++) {
        string pipe_height;
        string pipe_radius;
        string pipe_area;
        string line;

        getline(cases, line);
        pipe_height = line.erase(0, 8);
        getline(cases, line);
        pipe_radius = line.erase(0, 8);
        getline(cases, line);
        pipe_area = line.erase(0, 28);
        pipe.setHeight(pipe_height);
        pipe.setRadius(pipe_radius);
        line = to_string(pipe.LateralSurfaceArea());

        TestSuiteResults(results, pipe, line, pipe_area, i);
    }

    cases.close();
    results.close();
    return 0;
}
