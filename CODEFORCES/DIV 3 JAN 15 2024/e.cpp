#include <iostream>
#include <algorithm>

using namespace std;
// prince
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x[4], y[4];

        for (int i = 0; i < 4; ++i)
        {
            cin >> x[i] >> y[i];
        }

        sort(x, x + 4);
        sort(y, y + 4);

        int sideLength = max(x[2] - x[1], y[2] - y[1]);
        int area = sideLength * sideLength;

        cout << area << endl;
    }

    return 0;
}
