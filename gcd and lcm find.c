#include <stdio.h>

int main() {
   int a,b,i,gcd,lcm;
   printf("enter the number of a and b : ");
   scanf("%d%d",&a,&b);
   
   for(i=1;i<=a && i<=b;i++){
       if(a%i==0 && b%i==0){
           gcd=i;
       }
   }
   lcm=(a*b)/gcd;
   printf("the gcd=%d\n",gcd);
    printf("the lcm=%d\n",lcm);
   
    return 0;
}