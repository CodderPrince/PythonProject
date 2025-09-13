#include <iostream>
#include <string>

std::string splitIntoSyllables(const std::string &word)
{
    std::string result;
    char prevChar = word[0];
    result += prevChar;

    for (size_t i = 1; i < word.size(); ++i)
    {
        char currentChar = word[i];

        if ((prevChar == 'a' || prevChar == 'e') && (currentChar == 'a' || currentChar == 'e'))
        {
            // VV case (vowel followed by vowel)
            result += '.'; // Add a dot after the first vowel in VV
        }
        else if ((prevChar == 'b' || prevChar == 'c' || prevChar == 'd') &&
                 (currentChar == 'a' || currentChar == 'e'))
        {
            // CVA case (consonant followed by vowel)
            result += '.';
        }
        else if ((prevChar == 'a' || prevChar == 'e') &&
                 (currentChar == 'b' || currentChar == 'c' || currentChar == 'd'))
        {
            // VCC case (vowel followed by consonant)
            result += '.';
        }

        result += currentChar;
        prevChar = currentChar;
    }

    return result;
}

int main()
{
    int t;
    std::cin >> t;

    while (t--)
    {
        int n;
        std::cin >> n;

        std::string word;
        std::cin >> word;

        std::string result = splitIntoSyllables(word);
        std::cout << result << std::endl;
    }

    return 0;
}
