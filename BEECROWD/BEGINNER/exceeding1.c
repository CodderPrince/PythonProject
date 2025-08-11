#include<stdio.h>
int main()
{
    int x,z,sum=0,count=0;
    scanf("%d",&x);
    while(scanf("%d",&z))
    {//condition use kore z er value input nibo jotokhon z is greater than x
        if(z>x)
        {
            break;
        }
    }
    while(sum<z)
    {//every time x soho tar poroborti value add korte thabo jotokhon summation z er theke boro na hoi
        sum = sum+x;
        count++;//every time count korbo kotogulo value add korlam
        x++;
    }
    printf("%d\n",count);
}
/*question holo x & z input nite hobe and z is greater alltime x
z er value boro na howa porjonto input nite hobe
print korte hobe x er sathe tar poroborti kotogulo value sum korle z er
theke boro hobe*/