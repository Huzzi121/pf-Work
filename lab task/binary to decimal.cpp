#include <stdio.h>

int main() {
    int binary_num, decimal_num = 0, base = 1, rem;

    printf("Enter a binary number: ");
    scanf("%d", &binary_num);

    while (binary_num > 0) {
        rem = binary_num % 10;
        decimal_num += rem * base;
        binary_num /= 10;
        base *= 2;
    }

    printf("Decimal equivalent: %d\n", decimal_num);

    return 0;
}
