#include <stdio.h>

// Define structure for item
struct Item {
    char name[50];
    float price;
    int quantity;
};

// Function to calculate total amount of purchased items
float calculateTotal(struct Item item[], int size) {
    float total = 0.0;
    for (int i = 0; i < size; i++) {
        total += item[i].price * item[i].quantity;
    }
    return total;
}

int main() {
    int size;

    // Input the number of items
    printf("Enter the number of items: ");
    scanf("%d", &size);

    // Declare an array of structures
    struct Item items[size];

    // Input details of each item
    for (int i = 0; i < size; i++) {
        printf("\nEnter details of item %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", items[i].name);
        printf("Price: ");
        scanf("%f", &items[i].price);
        printf("Quantity: ");
        scanf("%d", &items[i].quantity);
    }

    // Calculate total amount using the user-defined function
    float totalAmount = calculateTotal(items, size);

    // Output the total amount
    printf("\nTotal amount of purchased items: $%.2f\n", totalAmount);

    return 0;
}
