#include <iostream>
using namespace std;
#define ll long long
#define nl endl;

string winner(ll a, ll b)
{

    if (a % 2 == b % 2)
    {
        return "Bob";
    }
    else
    {
        return "Alice";
    }
}

int main()
{

    ll t;
    cin >> t;

    while (t--)
    {

        ll a, b;
        cin >> a >> b;

        cout << winner(a, b) << endl;
    }
    return 0;
}
