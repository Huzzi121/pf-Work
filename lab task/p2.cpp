#include <stdio.h>

int main() 
{
    int rows, count = 1, space, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 0; i < rows; i++) {
        for (space =1; space <= rows - i; space++) {
            printf("  ");
        }
        for (j = 0; j <= i; j++) {
           printf("%4d", count);
		   count++; 
        }
        printf("\n");
    }

    return 0;
}
