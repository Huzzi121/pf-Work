#include <stdio.h>

int main() {
    int n = 5;
    int i, j;
    int k;
    
    for (i = 1; i <= n; i++) {
        k = i % 2; // set the value of k to either 0 or 1
        for (j = 1; j <= i; j++) {
            printf("%d", k);
            k = 1 - k; // toggle the value of k between 0 and 1
        }
        printf("\n");
    }
    
    return 0;
}
