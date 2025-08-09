/*
Problem no: 6
Generate Parenthesis
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007            // 1e9 + 7
#define PI 3.14159265358979323846 // acos(-1)
#define nl "\n"

// globally declare n
int n;

// globally declare ans array
vector<string> ans;
void func(int n, int open, int close, string str)
{
    // base case
    if (str.size() == 2 * n)
    {
        ans.push_back(str);
        return;
    }

    if (open < n)
    {
        func(n, open + 1, close, str + '(');
    }
    if (close < open)
    {
        func(n, open, close + 1, str + ')');
    }
}

int main()
{

    cout << "Input the number of n: ";
    cin >> n;
    func(n, 0, 0, "");

    // print
    for (auto const &x : ans)
    {
        cout << x << endl;
    }
    cout << endl;

    return 0;
}