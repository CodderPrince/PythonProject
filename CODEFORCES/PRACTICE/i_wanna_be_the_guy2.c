#include <stdio.h>

int main() 
{
    int n;
    scanf("%d", &n);

    int p;
    scanf("%d", &p);
    int levelsX[101] = {0};
    for (int i = 0; i < p; i++) 
    {
        int level;
        scanf("%d", &level);
        levelsX[level] = 1;
    }

    int q;
    scanf("%d", &q);
    for (int i = 0; i < q; i++) 
    {
        int level;
        scanf("%d", &level);
        levelsX[level] = 1;
    }

    int canPass = 1;
    for (int i = 1; i <= n; i++) 
    {
        if (levelsX[i] == 0) 
        {
            canPass = 0;
            break;
        }
    }

    if (canPass) 
    {
        printf("I become the guy.");
    } 
    else 
    {
        printf("Oh, my keyboard!");
    }

    return 0;
}
