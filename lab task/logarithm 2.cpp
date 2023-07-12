#include <stdio.h>
#include <math.h>

int main() {
    double x, term, sum = 0;
    int i;

    printf("Enter the value of x: ");
    scanf("%lf", &x);

    for (i = 1; i <= 7; i++) {
        term = pow((x - 1) / x, i) / (2 * i);
        sum += term;
    }

    printf("The natural logarithm of %lf is approximately: %lf", x, sum);

    return 0;
}
