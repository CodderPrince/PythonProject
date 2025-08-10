#include <iostream>
#include <stack>
#include <string>

using namespace std;

int precedence(char op) {
    if (op == '+' || op == '-')
        return 1;
    else if (op == '*' || op == '/')
        return 2;
    else if (op == '^')
        return 3;
    else
        return -1;
}

string infixToPostfix(string infix) {
    stack<char> s;
    string postfix;
    for (int i = 0; i < infix.length(); i++) {
        if (infix[i] >= 'a' && infix[i] <= 'z' || infix[i] >= 'A' && infix[i] <= 'Z')
            postfix += infix[i];
        else if (infix[i] == '(')
            s.push('(');
        else if (infix[i] == ')') {
            while (!s.empty() && s.top() != '(') {
                postfix += s.top();
                s.pop();
            }
            s.pop();  // pop the '('
        } else {
            while (!s.empty() && precedence(infix[i]) <= precedence(s.top())) {
                postfix += s.top();
                s.pop();
            }
            s.push(infix[i]);
        }
    }
    while (!s.empty()) {
        postfix += s.top();
        s.pop();
    }
    return postfix;
}

int main() {
    string infix = "L - (A + B ^ (D + E/F) ^ G) - K";
    string postfix = infixToPostfix(infix);
    cout << "Infix: " << infix << endl;
    cout << "Postfix: " << postfix << endl;
    return 0;
}