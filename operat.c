#include <stdio.h>

int main() {
    int a,b,result;
    char operator;
    printf("enter the number=");
    scanf("%d",&a);
    
    printf("enter the second number=");
    scanf("%d",&b);
    
    printf("enter operator(+,-,/,*,%): ");
    scanf(" %c", &operator);
    
    switch(operator) {
         case '+':
         result = a+b;
         printf("result=%d",result);
         break;
         case '-' :
         result=a-b;
         printf("result=%d",result);
         break;
         case '/' :
         result=a/b;
         printf("result=%f",result);
         break;
         case '*' :
         result=a*b;
         printf("result=%d",result);
         break;
         case '%' :
         result=a%b;
         printf("result=%f",result);
         break;
         default:
         printf("invalid operator"); 
    }
    return 0;
}