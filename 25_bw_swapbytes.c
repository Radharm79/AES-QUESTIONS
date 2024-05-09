#include<stdio.h>
int main()
{
    int num,swap_n;
    printf("Enter a hexadecimal no.:");
    scanf("%hx",num);
    swap_n=(((num>>8)& 0x00FF)|((num<<8)& 0xFF00));
    printf("%d",swap_n);
}