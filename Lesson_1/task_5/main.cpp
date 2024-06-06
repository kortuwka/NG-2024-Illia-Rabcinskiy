#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;

    cout << "Enter a,b,c: ";
    cin >> a >> b >> c;

    double D = (b * b) - (4 * a * c);
    if (D >= 0)
        cout << "x1: " << (-b + sqrt(D))/(2 * a);
    if (D > 0)
        cout << "x2: " << (-b - sqrt(D))/(2 * a);
    if (D < 0)
        cout << "No result";
    return 0;
}
