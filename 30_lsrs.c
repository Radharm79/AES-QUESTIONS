#include<stdio.h>
int main()
{
    int num = 10; 

    int left_shift_result = num << 2; 
    
    printf("Left shift result: %d\n", left_shift_result); 

    
    int right_shift_result = num >> 2; 
    
    printf("Right shift result: %d\n", right_shift_result);
}
