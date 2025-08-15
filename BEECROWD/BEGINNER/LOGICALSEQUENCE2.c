#include <stdio.h>
int main()
{
    int n,a,b,i,j,k,l,m=1;
    scanf("%d %d",&a,&n);
    k=n/a;//row sonkha eta 3,99 hole 99/3=33 ta row hobe
    l=a;
    for(i=1;i<=k;i++)
	{
		printf("%d",m);
		for(j=m+1;j<=l;j++)
		{//1st number jeta input dibo every row te totogulo number print hobe
			printf(" %d",j);
		}
		printf("\n");
		m=m+a;//next number jekhan theke start hobe
		l=l+a;//l er value 1st number er somanupathik hare increase kora hoyese
	}
    return 0;
}