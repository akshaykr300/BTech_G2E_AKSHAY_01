#include <stdio.h>

int main() {
    int num, sum, d1, d2;

    printf("Enter a number between 10 and 99: ");
    scanf("%d", &num);

    if(num >= 10 && num <= 99)
    {
        d1 = num / 10;   // first digit
        d2 = num % 10;   // second digit
        sum = d1 + d2;

        printf("Sum of digits = %d", sum);
    }
    else
    {
        printf("Number is not between 10 and 99");
    }

    return 0;
}