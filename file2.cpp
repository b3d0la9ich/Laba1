#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a = 5, b = 3, c = 2;
    int per = a + b + c;
    cout << per << endl;
    int polyper = per / 2;
    cout << sqrt(polyper*(polyper - a)*(polyper - b) * (polyper - c)) << endl;
    if (a == b || a == c || b == c)
    {
        cout << "The triangle is isosceles" << endl;
    }
    else
    {
        cout << "The triangle is not isosceles" << endl;
    }
}