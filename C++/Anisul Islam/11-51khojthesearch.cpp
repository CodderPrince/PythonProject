#include<bits/stdc++.h>
#include<cstring>
using namespace std;

int main()
{
	int T,i,j,k,l;
	char str[50],str2[50];
	cin>>T;
	while(T--){
		cout<<"The string"<<endl;
		cin>>str;
		cout<<"The substring"<<endl;
		cin>>str2;
		k=strlen(str);
		l=strlen(str2);
		
		for(i=0;i<(k-l);i++){
			if(str2[0]==str[i]){
				for(j=1;j<l;j++){
					if(str2[j]!=str[i+j])
					break;
				}
				if(j==l){
					cout<<i<<endl;
					break;
				}
			}
		}
	}
}