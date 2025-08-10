#include <iostream>
#include <string>
using namespace std;

int replaceAndCount(string &text, const string &patternA, const string &patternB)
{
    int counter = 0;
    size_t pos = text.find(patternB);

    while (pos != string::npos)
    {
        text.replace(pos, patternB.length(), patternA);
        counter++;
        pos = text.find(patternB, pos + patternA.length());
    }

    return counter;
}

int main()
{
    string text = "ABCDABCDABCDABCD";
    string patternA = "XYZ";
    string patternB = "ABCD";

    int replacements = replaceAndCount(text, patternA, patternB);

    cout << "Modified text: " << text << endl;
    cout << "Total replacements: " << replacements << endl;

    return 0;
}