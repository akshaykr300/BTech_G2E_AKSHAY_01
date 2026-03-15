#include <stdio.h>

int main() {
    char ch;
    printf("enter the character to check vowel : ");
    scanf("%c",&ch);
    
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U') {
        printf("the character is vowel");
    }
    else{
        printf("the charcter is consonent");
    }

    return 0;
}