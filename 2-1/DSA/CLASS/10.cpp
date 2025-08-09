#include <bits/stdc++.h>
using namespace std;

vector<string> find_permutation(string S)
{
    vector<string> res;

    // Sort the string in lexicographical order
    sort(S.begin(), S.end());

    do
    {
        // Keep adding while there is next permutation
        res.push_back(S);
    } while (next_permutation(S.begin(), S.end()));

    return res;
}

int main()
{
    string S;
    cin >> S;
    vector<string> permutations = find_permutation(S);

    // Print the result
    for (const auto &perm : permutations)
    {
        cout << perm << endl;
    }

    return 0;
}
