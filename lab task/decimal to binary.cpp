#include <stdio.h>

int main() {
    int dec_num, rem, quotient, i = 1, binary_num = 0;

    printf("Enter a decimal number: ");
    scanf("%d", &dec_num);

    quotient = dec_num;

    while (quotient != 0) {
        rem = quotient % 2;
        quotient = quotient / 2;
        binary_num = binary_num + rem * i;
        i = i * 10;
    }

    printf("The binary equivalent of %d is %d", dec_num, binary_num);

    return 0;
}
