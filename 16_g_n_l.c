#include <stdio.h>

// Global variable declaration
int globalVar = 10;

// Function declaration
void func();

int main() {
    // Local variable declaration
    int localVar = 20;

    printf("Inside main function:\n");
    printf("Global variable (globalVar): %d\n", globalVar);
    printf("Local variable (localVar): %d\n", localVar);

    // Calling the function
    func();

    return 0;
}

// Function definition
void func() {
    printf("\nInside func function:\n");
    printf("Global variable (globalVar): %d\n", globalVar);

    // Trying to access localVar will result in a compilation error because it's not in the scope of this function.
    // printf("Local variable (localVar): %d\n", localVar); // Uncommenting this line will result in an error
}
