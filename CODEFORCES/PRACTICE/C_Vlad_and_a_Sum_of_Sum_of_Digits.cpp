#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
const int MAX = 2000010;
int total(int a)
{
    int sum = 0;
    for (char c : to_string(a))
    {
        sum += c - '0';
    }
    return sum;
}
void solve()
{
    vector<int> v(MAX);
    for (int i = 1; i < MAX; i++)
    {
        v[i] = total(i) + v[i - 1];
    }
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << v[n] << endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    solve();
    return 0;
}
 Have you heard the name of Pirate Captain Jack Dumb? He is the most wanted blacklisted pirate who lives in
 Black Iceland. Recently he has learned about proper binary tree (a binary tree where every node other than
 leaves has two children, also known as full binary tree). With his little knowledge in C++ he wrote code that
 can display proper binary tree with height 1, 2 and 3.
 Figure: Proper/full binary tree with height 1,2 and 3
 It’s the night before ACM ICPC Regional Contest. Festive mode is going on amongst the organizer, participants
 and spectators. Rumours in the air-“Pirate Captain was seen in this city few hours ago”. Just at that time, Pirate
 Captain Jack Dumb broke into the judge’s room and hijacked one of your balloons. But Pirate Captain
 promised that, he will give back your balloon during contest if you can draw a proper/full binary tree with
 height N for him.
 Input
 The input begins with a single positive integer T(≤13) on a line by itself indicating the number of the cases.
 Each of the next T lines contains an integer N(1≤ N ≤13) denoting the required height of proper binary tree.
 2
JU NCPC Preliminary (Mock), 2023
 Output
 For each test case, print the test case number in a single line followed by desired proper binary tree. You should
 follow the exact format as sample input/output. Note that, trailing spaces are not allowed.
 Sample Input
 2
 1
 2
 Output for Sample Input
 Case 1:
 o--|__
 o--|
 2
 Case 2:
 o--|__
 o--| |__
 o--|__|
 o--|

SOLVE IN CPP BINARY TREE