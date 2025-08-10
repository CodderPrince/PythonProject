#include <stdio.h>

using namespace std;

int main(){
	int a,b;
	while(true){
		scanf("%d %d",&a,&b);
		if(a == 0 && b == 0) break;
		if(a > b) printf("%d %d\n",b,a);
		else{
			printf("%d %d\n",a,b);
		}
	}
}