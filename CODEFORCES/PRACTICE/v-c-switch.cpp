//vowel and consonant count using swith case

#include<bits/stdc++.h>
//#include<conio.h>
using namespace std;

int main()
{
    char ch;
    cin>>ch;
    ch = tolower(ch);
    switch(ch)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        cout<<"Vowel"<<endl;
        break;
        default:
        cout<<"Consonant"<<endl;
    }

   // getch();
    return 0;
}