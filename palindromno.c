#include <stdio.h>

int main() {
    int num, t, rev = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    t = num;

    while(num != 0)
    {
        digit = num % 10;
        rev = rev * 10 + digit;
        num = num / 10;
    }

    if(t == rev)
        printf("Number is Palindrome");
    else
        printf("Number is Not Palindrome");

    return 0;
}