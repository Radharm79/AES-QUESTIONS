#include<stdio.h>
int main()
{
    int p,t,r,si;
    printf("Enter principal amount, time period and rate of interest:");
    scanf("%d%d%d",&p,&t,&r);
    si=p*t*r/100;
    printf("Simple interesrt is:%d",si);
}