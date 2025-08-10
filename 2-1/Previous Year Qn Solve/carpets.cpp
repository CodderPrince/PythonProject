#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<char> s;
    string word = "carpets";
    cout << "Original word: " << word << endl;

    // Push characters onto the stack
    for (int i = 0; i < word.length(); i++)
    {
        s.push(word[i]);
    }

    // Pop characters off the stack and print them
    string rev = "";
    while (!s.empty())
    {
        rev += s.top();
        // cout << s.top();
        s.pop();
    }

    cout << "Reversed word: " << rev << endl;
    cout << endl;

    return 0;
}