#include <stdio.h>

int main() {
    int i, j, rows;

    // Prompt user for the number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Outer loop to handle the number of rows
    for (i = 1; i <= rows; i++) {
        // Inner loop to handle the number of stars in each row
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        // Move to the next line after printing all stars in the current row
        printf("\n");
    }

    return 0;
}
