/*#include <iostream>
#include <string>

int main() {
    int n;
    std::cin >> n;
    while(n--) {
        int a, b;
        std::cin >> a >> b;
        std::string result = "";
        for(int i = 0; i < a; i++) {
            result += 'a' + (i % b);
        }
        std::cout << result << std::endl;
    }
    return 0;
}*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl endl

int main()
{
    ll n;
    cin >> n;
    while (n--)
    {
        ll a, b;
        cin >> a >> b;
        ll i, j;
        string str = "";
        for (i = 0; i < a; i++)
        {
            for (j = 0; j < b; j++)
            {
                char ch = 'a' + j;
                str += ch;
            }
        }
        cout << str << nl;
    }

    return 0;
}
