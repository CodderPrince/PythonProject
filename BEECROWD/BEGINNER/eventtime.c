#include <stdio.h>
int main(){
 int d1,h1,m1,s1,d2,h2,m2,s2;
 int str1[51],str2[5],del[5];
 scanf("%s %d %d %s %d %s %d",str1,&d1,&h1,del,&m1,del,&s1);
scanf("%s %d %d %s %d %s %d",str2,&d2,&h2,del,&m2,del,&s2);
int total_sec1 = s1 + m1*60 + h1*60*60 + d1*24*60*60 ;
int total_sec2 = s2 + m2*60 + h2*60*60 + d2*24*60*60 ;
//sob input ke second e convert kore nilam
int total_sec = total_sec2 - total_sec1;//data
int day = total_sec/(24*60*60);//w
//total sec ke day te convert korlam
int ts1 = total_sec - day*24*60*60;
//ekhon obosisto second ber korlam
int hour = ts1/(60*60);//x
int ts2 = total_sec - (day*24*60*60) - (hour*60*60);
int min = ts2/60;
int sec = total_sec - (day*24*60*60) - (hour*60*60) - min*60;
//int sec = ts3/60;

    printf("%d dia(s)\n", day);
    printf("%d hora(s)\n", hour);
    printf("%d minuto(s)\n", min);
    printf("%d segundo(s)\n", sec);
 return 0;
}