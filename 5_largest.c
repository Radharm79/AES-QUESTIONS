#include<stdio.h>
int main()
{
    int a,b,c,lar;
    printf("\nEnter 3 no.s:\n");
    scanf("%d%d%d",&a,&b,&c);
    lar=(a>b)?((a>c)?a:c):((b>c)?b:c);
    printf("Largest=%d",lar);

}