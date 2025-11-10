//1
#include<stdio.h>
int main()
{
    int a=5;
    int b=10;
    int c=a+b;
    printf("THe sum is:%d",c);
    return 0;
}Time Complexity= O(1) because the program consists of a fixed set of operations that are executed once.
 the number of operations performed by the program does not vary with input size, the time complexity is O(1)

 //2
 #include<stdio.h>
int main()
{
    int n,i=1;
   while(i<n)
   {
       printf("%d",i);
       i*=2;
   }
   return 0;

}Time Complexity= O(log n) since i is multiplied by 2 in each step,the time complexity of this program is O(log n)

//3
 #include<stdio.h>
int main()
{
    int sum,n,i;
   for(i=1;i<=n;i++)
   {
       printf("%d",i);
       sum+=i;
   }
    return 0;
}Time Complexity= O(n) because  The loop runs n times adding the value of i to the variable sum in each step


//4
 #include<stdio.h>
int main()
{
    int sum=0,n,i;
   for(i=1;sum<=n;i++)
   {
       printf("%d",i);
       sum+=i;
   }
    return 0;
}Time Complexity= O(sqrt(n))   m*(m+1)/2 <= n
                               m^2 + m <= 2n


//5
#include<stdio.h>
int main()
{
    int n=5,i,j;
   for(i=1;i<=n;i++)
   {
       for(j=1;j<=n;j++)
       {
           printf("%d %d",i,j);
       }
       printf("\n");
   }
    return 0;
}Time Complexity= O(n^2) duita loop e n times run korbe tai


//6
#include<stdio.h>
int main()
{
    sum(int n)
    {
        int result =0;
        int i=1;
        while(i<=n)
        {
            result+=i;
            i++;
        }
        return result;
    }
}Time Complexity= O(n) because each step of the loop takes constant time, and the loop runs n times.

//7
#include<stdio.h>
int main()
{
    int product(int n)
    {
        if(n==0)
        {
            return 1;
        }
        else
        {
            return n * product(n-1);
        }

    }

}Time Complexity= O(n) because the function is called recursively n times,
            and each function call takes constant time.

//8
#include<stdio.h>
int main()
{
    int factorial(int n)
    {
        int result =1;
        for(int i=1;i<=n;i++)
        {
            result * =i;
        }
        return result;

    }

}Time Complexity= O(n) The loop runs n times, and each step of the loop takes constant time.

//9
#include<stdio.h>
int main()
{
    int primes(n);
    {

        for(int i=2;i<n;i++)
        {
           primes[i]=1;
        }
        for(int p=2;p*p<n;p++)
        {
            if(primes[p])
            {
                for(int i=p*p;i<n;i+=p)
                {
                    primes[i]=0;
                }
            }
        }

    }

}Time Complexity= O(n log log n)


//10
#include<stdio.h>
int main()
{
    int i,j,k,n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            for(k=0;k<n;k*2)
            {
                printf("%d %d %d\n",i,j,k);
            }
        }
    }

}Time Complexity= O(n^2 log n) because first 2 loops runs n times and third loop runs log_2(n)
                    total=(n*n*log_2(n))=n^2 log n

//11
#include<stdio.h>
int main()
{
    int i,n;
    for(i=0;i<n;i++)
    {
        int j=n;
        while(j>1)
        {

            j/=2;
        }
    }

}Time Complexity= O(n log n) because total=(n*log_2(n))=n log n


//12
#include<stdio.h>
int main()
{
    int i,j,k,n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
           statements;}}
           for(k=1;k<=n;k*=2)
           {
               printf("%d %d %d\n",i,j,k);
           }

}Time Complexity= O(n^2*log n) because first 2 loops runs n times and third loop runs log(n) times

//13
#include<stdio.h>
int main()
{
    int i,n;
    for(i=0;i<n;i++) for(i=0;i<n;i++)
    {
        for(i=2;i*i<=n;i++)
        {
           if(n%i==0)
           {
               printf("%d\n",i);
           }
        }
    }

}Time Complexity=  O(sqrt(n)*log n) because the inner loop runs faster than the middle loop.log n comes from n%i.


//14
#include<stdio.h>
int main()
{
    int i,n;
    for(i=0;i<n;i++)
        statements;
    {
        for(i=2;i*i<=n;i++)
        {
           if(n%i==0)
           {
               printf("%d\n",i);
           }
        }
    }

}Time Complexity= no answer because the statements within the loop are not specified

//15
#include<stdio.h>
int main()
{
    int i,n;
    for(i=0;i<n;i++)
        statements;
    {
        for(i=1;i*i<=n;i++)
            for(i=1;i<=n;i*2)
        {
           if(n%i==0)
           {
               printf("%d\n",i);
           }
        }
    }

}Time Complexity= O(sqrt(n)log n) because for inner loops=O(sqrt(n)*sqrt(n))=O(n) and for n%i,the time Complexity is log n


