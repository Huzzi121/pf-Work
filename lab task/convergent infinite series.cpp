#include <stdio.h>

int main() {
    int i, n;
    float sum = 0, fact = 1;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Calculate the sum of the series
    for (i = 1; i <= n; i++) {
        fact *= i; // Calculate factorial
        sum += 1.0 / fact; // Add the term to the sum
    }

    printf("Sum of the series 1/1! + 1/2! + 1/3! + ... + 1/n! = %f", sum);

    return 0;
}
