#include <iostream>
#include <math.h>

using namespace std;

int main() 
{
    int a, b;
    cout << "Write your sides:" << endl;
    cin >> a >> b;
    if (a <= 0 || b <= 0){
        cout << "Wrong sides!" << endl;
    } 
    else{
        cout << "Calculate the perimeter, area, diagonal length..." << endl;
        cout << 2 * (a + b) << endl;
        cout << (a * b) << endl;
        cout << sqrt(a*a + b*b) << endl;
    }
    return 0;
}
