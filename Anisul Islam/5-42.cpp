#include<stdio.h>
int main()
{
	int T,n;
	scanf("%d", &T);
	while(T--){
    
		scanf("%d",&n);
		int m=n-1;
		for(int i=1,j=n;i<=m;i++){
			printf("2^%d + ",j);
			j--;
		}
		
		printf("2 + 1\n");
	}
	return 0;
}
