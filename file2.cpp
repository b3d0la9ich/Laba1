#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Write your sides:" << endl;
    cin >> a >> b >> c;
    cout << "Calculating the perimeter, the area according to the Heron formula, checking for isosceles" << endl;
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
    return 0;
}