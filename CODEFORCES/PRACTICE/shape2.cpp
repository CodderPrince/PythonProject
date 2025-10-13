#include <iostream>

int main()
{
    int N;
    std::cin >> N;

    for (int i = 1; i <= N; i++)
    {
        // Print spaces
        for (int j = 1; j <= N - i; j++)
        {
            std::cout << " ";
        }

        // Print asterisks
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            std::cout << "*";
        }

        std::cout << std::endl;
    }

    return 0;
}
