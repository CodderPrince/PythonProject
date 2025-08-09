#include <iostream>
#include <vector>
#include <string>
using namespace std;

void permute(string s, int left, int right, vector<string> &result)
{
    if (left == right)
    {
        result.push_back(s);
    }
    else
    {

        for (int i = left; i <= right; i++)
        {
            swap(s[left], s[i]);                 // Swap the current character with the leftmost character
            permute(s, left + 1, right, result); // Recursively call for the remaining characters
            swap(s[left], s[i]);                 // Backtrack to the original string
        }
    }
}

vector<string> generatePermutations(string s)
{
    vector<string> result;
    permute(s, 0, s.size() - 1, result);
    return result;
}

int main()
{
    // string s="abc";
    string s;
    cout << "Enter a string: ";
    cin >> s;

    vector<string> permutations = generatePermutations(s);

    // cout << "Permutations of the string \"" << s << "\":" << endl;
    // cout<<s<<endl;
    for (const string &perm : permutations)
    {
        cout << perm << " ";
    }

    return 0;
}
