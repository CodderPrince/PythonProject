#include<stdio.h>
int main(){
char name[33];
printf("Enter your name:\n");
gets(name);
printf("Hello! %s",name);
return 0;
}
