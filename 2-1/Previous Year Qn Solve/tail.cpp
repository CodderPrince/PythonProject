#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<int> s;

    s.push(1);
    s.push(2);
    s.push(3);

    while (!s.empty())
    {
        cout << s.top() << endl;
        s.pop();
    }
    cout << endl;
    return 0;
}