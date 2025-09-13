#include <iostream>

int findUniqueDigit(int a, int b, int c)
{
    if (a != b && a != c)
    {
        return a;
    }
    else if (b != a && b != c)
    {
        return b;
    }
    else
    {
        return c;
    }
}//prince

int main()
{
    int t;
    std::cin >> t;

    while (t--)
    {
        int a, b, c;
        std::cin >> a >> b >> c;

        int result = findUniqueDigit(a, b, c);
        std::cout << result << std::endl;
    }

    return 0;
}
