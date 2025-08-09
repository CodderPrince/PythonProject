#include <bits\stdc++.h>
using namespace std;

int permutation(string str, int left, int right)
{
    // base case
    if (left == right)
    {
        // arr.push_back(str);
        cout << str << endl;
        // return;
    }

    else
    {
        for (int i = left; i <= right; i++)
        {
            cout << "left: " << left << endl;
            cout << "i: " << i << endl;
            swap(str[left], str[i]);
            permutation(str, left + 1, right);
        }
    }
}

int main()
{
    string str;
    cout << "Enter a String: ";
    cin >> str;
    int left = 0, right = str.size() - 1;

    // called a function
    permutation(str, left, right);
}