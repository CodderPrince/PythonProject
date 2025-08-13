#include <stdio.h>
int main()
{
    int a,b,match_number=0,second_input,draw=0,gremio_joy=0,inter_joy=0;
    while(1)
    {
        scanf ("%d %d", &a, &b);
        if(a>b) 
        inter_joy++;
        if(a<b) 
        gremio_joy++;
        if(a==b) 
        draw++;
        match_number++;
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d",&second_input);
        if(second_input==1)
            continue;
        if(second_input==2)
            break;
    }
    printf("%d grenais\n",match_number);
    printf("Inter:%d\n",inter_joy);
    printf("Gremio:%d\n",gremio_joy);
    printf("Empates:%d\n",draw);
    if(inter_joy>gremio_joy)
        printf("Inter venceu mais\n");
    if(inter_joy<gremio_joy)
        printf("Gremio venceu mais\n");
    if(gremio_joy==inter_joy)
        printf("Nao houve vencedor\n");
    return 0;
}