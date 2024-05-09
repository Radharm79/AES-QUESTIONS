#include<stdio.h>
int main()
{
    char s;
    int a,b;
    printf("Enter 2 no.s:");
    scanf("%d%d",&a,&b);
    printf("Enter which operation?\n + , - ,* ,/");
    scanf("%c",&s);
    switch (s)
    {
    case '+':
        printf("%d+%d=%d",a,b,a+b);
        break;
    case '-':
        printf("%d-%d=%d",a,b,a-b);
        break;
    case '*':
        printf("%d*%d=%d",a,b,a*b);
        break;
    case '/':
        printf("%d/%d=%d",a,b,a/b);
        break;
    case '%':
        printf("%d % %d=%d",a,b,a%b);
        break;
    
    default:
        break;
    }
}