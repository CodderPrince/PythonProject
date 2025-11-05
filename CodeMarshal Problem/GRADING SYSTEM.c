#include<stdio.h>
int main(){
int n,i,t,a;
scanf("%d",&t);
for(i=1; i<=t; i++)
{
    scanf("%d",&a);
    if(a>=90 && a<=100)
    {


        printf("Student %d: A+\n",i);

}
else if(a>=80 && a<=89)
{
    printf("Student %d: A\n",i);
}
else if(a>=70 && a<=79)
{
    printf("Student %d: A-\n",i);
}
else if(a>=60 && a<=69)
{
    printf("Student %d: B+\n",i);
}
else if(a>=50 && a<=59)
{
    printf("Student %d: B-\n",i);
}
else if(a>=40 && a<=49)
{
    printf("Student %d: C\n",i);
}
else if(a>=35 && a<=39)
{
    printf("Student %d: D\n",i);
}
else if(a>=0 && a<=34)
{
    printf("Student %d: F\n",i);
}
}
return 0;
}
