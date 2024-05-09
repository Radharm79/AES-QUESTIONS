#include<stdio.h>
int main()
{
    int n,rev=0;
    printf("Enter a no.:");
    scanf("%d",&n);

    while (n>0)
    {
        rev=rev<<1;
        if(n&1==1)
            rev=rev^1;
        n=n>>1;
    }
    printf("Reversed bit no is:%d",rev);
}