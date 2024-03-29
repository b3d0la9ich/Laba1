#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    cout << "Write your sides:" << endl;
    cin >> a >> b >> c;
    if ( a+b<=c || a+c <= b || b+c <= a || a<0 || b<0 || c<0) {
        cout << "Wrong sides!" << endl;
    }
    else {
        cout << "Calculating the perimeter, the area according to the Heron formula, checking for isosceles" << endl;
        double per = a + b + c;
        cout << per << endl;
        double polyper = per / 2.0;
        double area = sqrt(polyper * (polyper - a) * (polyper - b) * (polyper - c));
        cout << area << endl;
        if (a == b || a == c || b == c) {
            cout << "The triangle is isosceles" << endl;
        }
        else {
            cout << "The triangle is not isosceles" << endl;
        }
    }
    return 0;
}
//Изменение крутое