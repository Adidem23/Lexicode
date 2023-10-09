#include <stdio.h>

int main() {
    int n, i;
    double sum = 0.0, num;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    for (i = 1; i <= n; ++i) {
        printf("Enter number %d: ", i);
        scanf("%lf", &num);
        sum += num;
    }

    double average = sum / n;
    printf("Average: %.2lf\n", average);

    return 0;
}
