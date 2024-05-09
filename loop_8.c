#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,s,c;
    float sr;
    printf("Till What?");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=pow(i,2);
        c=pow(i,3);
        sr=pow(i,0.5);
        printf("Square of %d = %d\nCube of %d = %d\nSquare root of %d = %.2f",i,s,i,c,i,sr);
    }
}