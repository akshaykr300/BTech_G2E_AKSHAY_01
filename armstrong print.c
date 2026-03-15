#include <stdio.h>

int main() {
    int n, i, num, digit, sum;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Armstrong numbers from 1 to %d are:\n", n);

    for(i = 1; i <= n; i++)
    {
        num = i;
        sum = 0;

        while(num != 0)
        {
            digit = num % 10;
            sum = sum + digit*digit*digit;
            num = num / 10;
        }

        if(sum == i)
            printf("%d ", i);
    }

    return 0;
}