#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007            // 1e9 + 7
#define PI 3.14159265358979323846 // acos(-1)
#define nl "\n"

// globally create result vector array
vector<string> result;

// create generatePermut function
vector<string> generatePermut(string str, int left, int right)
{
    // base case
    if (left == right)
    {
        result.push_back(str);
        return result;
    }
    else
    {
        for (int i = left; i <= right; i++)
        {
            swap(str[left], str[i]);
            generatePermut(str, left + 1, right);
            swap(str[left], str[i]);
        }
    }
}
int main()
{
    string str;
    cout << "Enter a string: ";
    cin >> str;

    // create à vector array to store all types of comb.
    generatePermut(str, 0, str.size() - 1);

    // print output
    for (const string &perm : result)
    {
        cout << perm << " ";
    }
    cout << nl;

    return 0;
}