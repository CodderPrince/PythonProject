// prince

#include <bits\stdc++.h>
using namespace std;

int main()
{
    char ch;
    cin >> ch;
    char nextChar;
    nextChar = ch + 1;
    if (ch == 'z')
    {
        nextChar = 'a';
    }
    cout << nextChar << endl;

    return 0;
}