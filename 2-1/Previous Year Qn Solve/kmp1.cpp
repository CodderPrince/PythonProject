#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> computeLPS(string pattern)
{
    int n = pattern.size();
    vector<int> lps(n, 0);
    int len = 0;
    int i = 1;
    while (i < n)
    {
        if (pattern[i] == pattern[len])
        {
            len++;
            lps[i] = len;
            i++;
        }
        else
        {
            if (len != 0)
            {
                len = lps[len - 1];
            }
            else
            {
                lps[i] = 0;
                i++;
            }
        }
    }
    return lps;
}

void KMPSearch(string text, string pattern)
{
    int m = pattern.size();
    int n = text.size();
    vector<int> lps = computeLPS(pattern);
    int i = 0; // index for text[]
    int j = 0; // index for pattern[]

    while (i < n)
    {
        if (pattern[j] == text[i])
        {
            i++;
            j++;
        }
        if (j == m)
        {
            cout << "Pattern found at index " << i - j << endl;
            j = lps[j - 1];
        }
        else if (i < n && pattern[j] != text[i])
        {
            if (j != 0)
                j = lps[j - 1];
            else
                i = i + 1;
        }
    }
}

int main()
{
    string text = "abaabacbbacbabacbaaababacbaba";
    string pattern = "aaaba";
    KMPSearch(text, pattern);
    return 0;
}
