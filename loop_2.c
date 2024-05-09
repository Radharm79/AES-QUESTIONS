#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i;
    while(1)
    {
        printf("\n1.Check No.\n2.Exit.\n");
        scanf("%d",&i);
        switch (i)
        {
        case 1:
            printf("Enter The Number:");
            scanf("%d",&n);
            if(n>0)
                printf("Positive!");
            if(n==0)
                printf("Zero!");
            else
                printf("Negative!");
            break;

        
        
        default:
            exit(0);
            break;
        }
    }
}