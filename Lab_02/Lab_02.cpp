#include <iostream>
#include <cmath>
#include "windows.h";

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    string commit = "commit 2 old";

    double Pi = 4 * atan(1.);
    double a, z1, z2;
    
    cout << "Введіть число a: ";
    cin >> a;

    z1 = (2 * ((sin(3 * Pi - 2 * a)) * (sin(3 * Pi - 2 * a)))) * (cos((5*Pi)+(2*a))* cos((5 * Pi) + (2 * a)));
    
    z2 = (1.0/4)-((1.0/4)*(sin((5.0/2)*Pi - 8*a)));

    cout << endl <<"Відповідь рівння 1: " << z1 << endl << "Відповідь рівння 2: " << z2;

    return 0;
}

