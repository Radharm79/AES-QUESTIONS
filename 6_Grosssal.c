#include <stdio.h>

int main() {
    float basicSalary, allowances,deductions, grossSalary;

    // Input basic salary and allowances
    printf("Enter basic salary: ");
    scanf("%f", &basicSalary);
    printf("Enter allowances: ");
    allowances=basicSalary*0.2;
    deductions=basicSalary*0.1;

    // Calculate gross salary
    grossSalary = basicSalary + allowances -deductions;

    // Display gross salary
    printf("Gross Salary: %.2f\n", grossSalary);

    return 0;
}
