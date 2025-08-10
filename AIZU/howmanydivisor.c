/*a,b,c tinta input nile a theke b er moddhe c er gunitok ber korte hobe
c ke vag jai emon koto sonkha a theke b er moddhe ase ber korte hobe*/
#include <stdio.h>
int main()
{
	int a, b, c,i,count=0;
	scanf("%d%d%d", &a, &b, &c);
	for (i = a; i <= b; i++)
    {
		if (c % i == 0)
        {
         count++;
        }
	}
	printf("%d\n", count);
	return 0;
}