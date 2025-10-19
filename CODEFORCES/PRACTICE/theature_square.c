//theature_square
#include<stdio.h>

int main()
    {
        long long int n,m,a;
        scanf("%lld %lld %lld",&n,&m,&a);
        long long int total_length, total_width;
        total_length = (n+a-1)/a;
        total_width = (m+a-1)/a;
        printf("%lld\n",total_length*total_width);

        return 0;
    }