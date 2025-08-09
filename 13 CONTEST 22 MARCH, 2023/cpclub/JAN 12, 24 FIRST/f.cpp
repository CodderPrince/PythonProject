#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl endl

bool isValid(const unordered_set<string> &dictionary, const string &sentence)
{
    vector<bool> dp(sentence.size() + 1, false);
    dp[0] = true;

    for (int i = 1; i <= sentence.size(); i++)
    {
        // last of the sentence loop iterates
        for (int j = i - 1; j >= 0; j--)
        {
            if (dp[j])
            {
                string word = sentence.substr(j, i - j);
                if (dictionary.find(word) != dictionary.end())
                {
                    // jodi sentence er moddhe ager word khuje na pai tahole false
                    dp[i] = true;
                    break;
                }
            }
        }
    }

    return dp[sentence.size()];
}

int main()
{
    int n;
    cin >> n;

    unordered_set<string> dictionary;
    for (int i = 0; i < n; i++)
    {
        string word;
        cin >> word;
        dictionary.insert(word);
    }

    string sentence;
    cin >> sentence;

    if (isValid(dictionary, sentence))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
