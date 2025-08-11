#include <stdio.h>
int main() 
{
    int n, i, id, game, count;
    while (scanf("%d %d", &n, &i) != EOF) 
    /*first e 2ta input nite hobe first input test case number and 2nd game id
    i=7= seven test case game id=5558= eta amar gamming id*/
    {
        count = 0;
        for (int j = 0; j < n; j++) 
        {
            scanf("%d %d", &id, &game);
            if (id == i && game == 0)
            /*ekhon find every test case which id is 5558 && also question condition when
            game=0 that is my gamming then count this*/
            {
                count++;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}
