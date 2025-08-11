 #include <stdio.h>
 int main(){
    int notes, aux;
    scanf("%d", &notes);
    printf("%d\n", notes);
    printf("%d nota(s) de R$ 100,00\n", notes/100);//576/100=5.76 print 5
    aux = (notes%100);//576%100=76 shesher 2 sonkha count hobe
    printf("%d nota(s) de R$ 50,00\n", aux/50);//76/50=1.52 print 1
    aux = (aux%50);// scientific calc.= 76/50=1.52-1(decimal value)=.52*50(divisible value)=26
    printf("%d nota(s) de R$ 20,00\n", aux/20); //26/20=1.3                                                                                                                       
    aux = (aux%20);//scientific calc.= 26/520=1.3-1(decimal value)=.3*20(divisible value)=6
    printf("%d nota(s) de R$ 10,00\n", aux/10);//6/10=.6 not print no decimal value
    aux = (aux%10);//6%10=6 thake
    printf("%d nota(s) de R$ 5,00\n", aux/5);//6/5=1.2 print 1
    aux = (aux%5);//scientific calc.= 6/5=1.2-1(decimal value)=.2*5(divisible value)=1
    printf("%d nota(s) de R$ 2,00\n", aux/2);//1/2=.5 no decimal
    aux = (aux%2);//1%2=1
    printf("%d nota(s) de R$ 1,00\n", aux/1);//print 1
    return 0;
 }