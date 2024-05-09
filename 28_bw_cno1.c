#include<stdio.h>
int main()
{
    int n,c=0;
    printf("Enter a no.:");
    scanf("%d",&n);
    while (n)
    {
        c+=n&1;
        n>>=1;
    }
    printf("Number of 1's are:%d",c);
    
}