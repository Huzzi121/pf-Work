#include <stdio.h>

int main() {
    int n = 5;
    int i, j, k, spaces;
    int count = 1;
    
    // Upper half of the diamond
    for (i = 1; i <= n; i++) {
        spaces = n - i;
        for (j = 1; j <= spaces; j++) {
            printf(" ");
        }
        for (k = 1; k <= count; k++) {
            printf("*");
        }
        count += 2;
        printf("\n");
    }
    
    // Lower half of the diamond
    count = count - 4;
    for (i = n - 1; i >= 1; i--) {
        spaces = n - i;
        for (j = 1; j <= spaces; j++) {
            printf(" ");
        }
        for (k = 1; k <= count; k++) {
            printf("*");
        }
        count -= 2;
        printf("\n");
    }
    
    return 0;
}
