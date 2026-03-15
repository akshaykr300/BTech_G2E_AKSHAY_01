#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if(ch >= 'a' && ch <= 'z')
    {
        ch = ch - 32;   // convert to uppercase
        printf("Uppercase: %c", ch);
    }
    else if(ch >= 'A' && ch <= 'Z')
    {
        ch = ch + 32;   // convert to lowercase
        printf("Lowercase: %c", ch);
    }
    else
    {
        printf("Not an alphabet");
    }

    return 0;
}
