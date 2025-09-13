#include <iostream>
#include <vector>
#include <string>

using namespace std;

char findReplacedLetter(const vector<string> &square)
{
    char replacedLetter = '?';

    // Check rows
    for (int row = 0; row < 3; ++row)
    {
        int letterCount[3] = {0};

        for (int col = 0; col < 3; ++col)
        {
            if (square[row][col] != '?')
            {
                ++letterCount[square[row][col] - 'A'];
            }
        }

        for (int i = 0; i < 3; ++i)
        {
            if (letterCount[i] == 0)
            {
                replacedLetter = 'A' + i;
                break;
            }
        }

        if (replacedLetter != '?')
        {
            break;
        }
    }

    // Check columns
    if (replacedLetter == '?')
    {
        for (int col = 0; col < 3; ++col)
        {
            int letterCount[3] = {0};

            for (int row = 0; row < 3; ++row)
            {
                if (square[row][col] != '?')
                {
                    ++letterCount[square[row][col] - 'A'];
                }
            }

            for (int i = 0; i < 3; ++i)
            {
                if (letterCount[i] == 0)
                {
                    replacedLetter = 'A' + i;
                    break;
                }
            }

            if (replacedLetter != '?')
            {
                break;
            }
        }
    }

    return replacedLetter;
}

int main()
{
    int t;
    cin >> t;
//prince
    while (t--)
    {
        vector<string> square(3);

        for (int i = 0; i < 3; ++i)
        {
            cin >> square[i];
        }

        char replacedLetter = findReplacedLetter(square);
        cout << replacedLetter << endl;
    }

    return 0;
}