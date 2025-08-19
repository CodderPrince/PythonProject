#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T,n,i,j,flag=0;
	cin>>T;
	while(T--){
		flag=0;
		cin>>n;
	
		
		for(i=2;i<=n/2;i++){
			if(n%i==0){
				flag++;
				break;
			}
			else flag=0;
		}
		if(flag==0 || n==2)
		cout<<n<<" is a prime"<<endl;
		else cout<<n<<" is not a prime"<<endl;
	}
}