#include <stdio.h>

int main() {
    double num1, num2, sum;

    // Input
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    // Perform addition
    sum = num1 + num2;

    // Output
    printf("Sum: %.2lf\n", sum);

    return 0;
}
