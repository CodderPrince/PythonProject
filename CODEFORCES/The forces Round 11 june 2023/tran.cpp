#include <iostream>
using namespace std;

int main()
{
    char line1[105];
    char line2[105];
    char temp[105];
    int len = 0;

    cin >> line1;
    cin >> line2;

    while (line1[len] != '\0')
    {
        len++;
    }
    int x = len - 1;
    int c = 0;

    for (int i = 0; i < len; i++)
    {
        temp[i] = line1[x - i];
    }
    for (int i = 0; i < len; i++)
    {
        if (temp[i] != line2[i])
        {
            c++;
        }
    }

    if (c == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}