//area_of_a_circle.c
//prince

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double R;
    cin >> R;

    double pi = 3.141592653;
    double area = pi * R * R;

    cout << fixed << setprecision(9) << area << endl;

    return 0;
}
