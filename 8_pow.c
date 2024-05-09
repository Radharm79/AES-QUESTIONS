#include<stdio.h>
#include<math.h>
int main()
{
    int x,n,v;
    printf("\nEnter a no.:\n And its power:");
    scanf("%d%d",&x,&n);
    v=pow(x,n);
    
    printf("%d^%d=%d",x,n,v);
}