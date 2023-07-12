#include <stdio.h>

int main() {
    int i, j;

    for(i = 1; i <= 10; i++) {
        // Pattern (a)
        for(j = 1; j <= i; j++) {
            printf("*");
        }
        
        
        // Pattern (b)
        for(j = 10; j >= i; j--) {
            printf("*");
        }
        
        
        // Pattern (c)
        for(j = 10; j > i; j--) {
            printf(" ");
        }
        for(j = 1; j <= i; j++) {
            printf("*");
        }
        
        
        
        // Pattern (d)
        for(j = 10; j > i; j--) {
            printf(" ");
        }
        for(j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
