#include <stdio.h>

int main() {
    int x, y, i, result = 1;

    printf("Enter value of x: ");
    scanf("%d", &x);

    printf("Enter value of y: ");
    scanf("%d", &y);

    i = 1;
    while(i <= y)
    {
        result = result * x;
        i++;
    }

    printf("Result = %d", result);

    return 0;
}