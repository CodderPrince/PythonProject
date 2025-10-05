/*
Let's Try!!!!!!!!!   It's a game!!!!!!!!!    Let's Fun!!!!!!!!!
Guess a number from (1 to 10) and computer also generate a number 1 to 10
If your guess number == computer generated random number
you have won the game!
*/ 

#include <bits\stdc++.h>
using namespace std;

int main()
{
    while (1)
    {
        int randomNumber, guessNumber;
        cout << "Enter a Guess Number (1 to 10): ";
        cin >> guessNumber;

        randomNumber = 1 + rand()%10;
        if (guessNumber == randomNumber)
        {
            cout << "Hurrah! You have won the game!" << endl<<endl;
            break;
        }
        else
        {
            cout << "Alas! You have lost the game! Try again." << endl;
            cout << "Random number was: " << randomNumber << endl<< endl;
        }
    }

    return 0;
}