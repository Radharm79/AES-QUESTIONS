#include <stdio.h>

// Function to find the sum of array elements
int sumOfArray(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int size;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    // Input the elements of the array
    printf("Enter %d elements of the array:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Calculate the sum of array elements using the user-defined function
    int arraySum = sumOfArray(arr, size);
    
    // Output the sum of array elements
    printf("Sum of array elements: %d\n", arraySum);

    return 0;
}
