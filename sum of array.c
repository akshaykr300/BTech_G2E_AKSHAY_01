#include <stdio.h>

int main() {
    int a[100],n,i,sum=0;
    printf("enter the no of element : ");
    scanf("%d",&n);
    
    printf("enter the element\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<=n;i++){
        sum=sum+a[i];
    }
    printf("the sum of array=%d ",sum);
    
    return 0;
}