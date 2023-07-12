#include <stdio.h>

int main() {
    int n, i = 1;
    float sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    while (i <= n) {
        sum += 1/i;
        printf("1/%d + ", i);
        i++;
    }

    printf("\nSum of the series is: %f", sum);
    return 0;
}
