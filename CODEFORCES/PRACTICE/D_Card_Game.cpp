#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        char trump;
        cin >> trump;
        vector<pair<int, char>> cards(2 * n);
        for (int i = 0; i < 2 * n; i++)
        {
            string card;
            cin >> card;
            cards[i] = make_pair(card[0] - '0', card[1]);
        }
        sort(
            cards.begin(), cards.end(), [&](const pair<int, char> &a, const pair<int, char> &b) {
                if (a.second == b.second)
                    return a.first > b.first;
                if (a.second == trump)
                    return true;
                if (b.second == trump)
                    return false;
                return a.second < b.second;
            });
        for (int i = 0; i < 2 * n; i += 2)
        {
            cout << cards[i].first << cards[i].second << " " << cards[i + 1].first << cards[i + 1].second << "\n";
        }
    }
    return 0;
}
