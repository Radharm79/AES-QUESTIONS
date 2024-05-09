#include<stdio.h>
int main()
{
    int n,sum=0,i;
    printf("Enter till which no ypu want to add:");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
        sum=sum+i;
    printf("%d",sum);
}