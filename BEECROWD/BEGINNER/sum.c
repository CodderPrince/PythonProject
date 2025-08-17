#include<stdio.h>
int main(){   
    int n;
    int x, y, aux;
    int sum;
    scanf("%d",&n);
    while(1)
    {
                if(n == 0) break;
                scanf("%d%d",&x,&y);
                if(x > y)
                {
                     aux = x;
                     x = y;
                     y = aux;
                }//jodi x boro hoi tahole swap kore sort kore nite hobe
                sum=0;
                for(int i = x+1; i < y; i++)
                {//jehetu 1st number baad tai x er sathe 1 jog kora hoyese and y er aag porjonto loop cholese
                       if(i%2 != 0) 
                       {
                        sum = sum + i;
                       }
                }
                printf("%d\n",sum);
                n--;//test case 1 ghor kore komano hobe jate joto input dibo totogulo loop chole nahole infinite loop cholbe
    }
    return 0;
}