#include <stdio.h>

int main() {
    int n = 5;
    int i, j, k, spaces;
    int count = 1;
    
    for (i = 1; i <= n; i++) {
        spaces = n - i;
        for (j = 1; j <= spaces; j++) {
            printf(" ");
        }
        for (k = 1; k <= count; k++) {
            printf("%d", i);
        }
        count += 2;
        printf("\n");
    }
    
    return 0;
}

