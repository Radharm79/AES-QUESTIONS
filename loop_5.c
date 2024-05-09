#include<stdio.h>
int main()
{
    int i,n,c,d;
    printf("Enter till which number:\n");
    scanf("%d",&d);
    for(n=2;n<=d;n++)
    {
        c=0;
        for(i=1;i<=n;i++)
        {
            if(n%i == 0)
                c++;
        }
        if (c==2)
        {
            printf("%d\t",n);
        }
    }   
}