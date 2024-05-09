#include<stdio.h>
int main()
{
    int a,b,temp,n,m;
    printf("Enter the 2 no.s:");
    scanf("%d%d",&a,&b);
    n=a;
    m=b;
    while(b!=0)
    {
        temp=b;
        b=a%b;
        a=temp;
    }
    printf("HCF(%d,%d)=%d",m,n,a);
}