#include<stdio.h>
int main()
{
    int n,p1,p2,b1,b2;
    printf("Enter a no.:");
    scanf("%d",&n);
    printf("Enter position of first bit to swap (0-31):");
    scanf("%d",&p1);
    printf("Enter position of 2nd bit to swap:");
    scanf("%d",&p2);
    if(p1<0 || p1>31||p2<0||p2>31)
        printf("Invalid position!");
    b1=(n>>p1) & 1;
    b2=(n>>p2) & 1;
    if(b1^b2)
        n^=(1<<p1);
        n^=(1<<p2);
    printf("Number after swapping bits %d",n);
}