#include<stdio.h>
int main()
{
    int n;
    printf("Till what?");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        if(i%2==0)
            printf("%d is even",i);
        else 
        {
            printf("%d is odd",i);
        }
        
    }
}
