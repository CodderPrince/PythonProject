#include <iostream>
#include <stack>
#include <string>
#include <cctype>
#include <unordered_map>
using namespace std;

// Function to perform arithmetic operations
int applyOperation(int a, int b, char op)
{
    switch (op)
    {
    case '+':
        return a + b;
    case '-':
        return a - b;
    case '*':
        return a * b;
    case '/':
        return a / b;
    }
    return 0;
}

// Function to evaluate the infix expression
int evaluateInfix(const string &expression)
{
    stack<int> values; // Stack to store integers
    stack<char> ops;   // Stack to store operators

    // Precedence mapping
    unordered_map<char, int> precedence = {{'+', 1}, {'-', 1}, {'*', 2}, {'/', 2}};

    for (size_t i = 0; i < expression.length(); i++)
    {
        // If the token is a whitespace, skip it
        if (isspace(expression[i]))
            continue;

        // If the token is an operand, parse it and push it to the values stack
        if (isdigit(expression[i]))
        {
            int val = 0;
            while (i < expression.length() && isdigit(expression[i]))
            {
                val = (val * 10) + (expression[i] - '0');
                i++;
            }
            values.push(val);
            i--;
        }
        else if (expression[i] == '(')
        {
            // If the token is '(', push it to the ops stack
            ops.push(expression[i]);
        }
        else if (expression[i] == ')')
        {
            // If the token is ')', solve the entire brace
            while (!ops.empty() && ops.top() != '(')
            {
                int val2 = values.top();
                values.pop();
                int val1 = values.top();
                values.pop();
                char op = ops.top();
                ops.pop();
                values.push(applyOperation(val1, val2, op));
            }
            ops.pop();
        }
        else
        {
            // The token is an operator
            while (!ops.empty() && precedence[ops.top()] >= precedence[expression[i]])
            {
                int val2 = values.top();
                values.pop();
                int val1 = values.top();
                values.pop();
                char op = ops.top();
                ops.pop();
                values.push(applyOperation(val1, val2, op));
            }
            ops.push(expression[i]);
        }
    }

    // Entire expression has been parsed, apply remaining ops to remaining values
    while (!ops.empty())
    {
        int val2 = values.top();
        values.pop();
        int val1 = values.top();
        values.pop();
        char op = ops.top();
        ops.pop();
        values.push(applyOperation(val1, val2, op));
    }

    // Top of values contains the result
    return values.top();
}

int main()
{
    string expression = "3 + 5 * 2 - 8"; // Example expression
    cout << "Result of the expression '" << expression << "' is: " << evaluateInfix(expression) << endl;
    return 0;
}
