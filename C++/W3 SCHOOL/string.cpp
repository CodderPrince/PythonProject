#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl endl

int main()
{
    string name;
    getline(cin,name);
    cout<<name<<nl;
    string f = "Nahian.CSE 14";
    cout<<f.length()<<nl;
    string l = "prince";
    string full = f + " " + l;
    cout << full << nl;
    string f2 = f.append(l);
    cout << f2 << nl;
    
    return 0;
}