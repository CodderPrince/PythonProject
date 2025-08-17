#include<stdio.h>
int main()
{
    int price, quan;
    double due,pay;
    scanf("%d %d %lf",&price,&quan,&due);
    /*1st price 2nd quantity 3rd due price
    quan*due korlei koto taka pay korte hobe peye jabo*/
    pay = quan*due;
    scanf("%d %d %lf",&price,&quan,&due);
    pay = pay + quan*due;
    printf("VALOR A PAGAR: R$ %.2lf\n",pay);
    return 0;
}