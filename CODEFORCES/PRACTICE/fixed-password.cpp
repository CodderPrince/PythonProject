// prince

#include <bits\stdc++.h>
using namespace std;

int main()
{
    int password;

    while (std::cin >> password)
    {
        if (password == 1999)
        {
            std::cout << "Correct" << std::endl;
            break;
        }
        else
        {
            std::cout << "Wrong" << std::endl;
        }
    }

    return 0;
}
