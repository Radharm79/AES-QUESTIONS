#include<stdio.h>
int main()
{
    int a,b,sum=0,i;
    printf("Enter the 2 no.s:");
    scanf("%d%d",&a,&b);
    for(i=1;i<=b;i++)
    {
        sum+=a;
    }
    printf("\n%d * %d = %d",a,b,sum);
}