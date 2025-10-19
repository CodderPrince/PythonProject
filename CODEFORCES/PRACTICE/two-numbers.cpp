// prince

#include <bits\stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int x, y, z;
    x = floor((double)a / b);
    y = ceil((double)a / b);
    z = round((double)a / b);
    cout << "floor " << a << " / " << b << " = " << x << endl;
    cout << "ceil " << a << " / " << b << " = " << y << endl;
    cout << "round " << a << " / " << b << " = " << z << endl;

    return 0;
}