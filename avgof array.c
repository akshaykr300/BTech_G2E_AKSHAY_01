#include <stdio.h>

int main() {
    int a[100],n,i,sum=0;
    float avg=0.0;
    printf("enter the no of element : ");
    scanf("%d",&n);
    
    printf("enter the element\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<=n;i++){
        sum=sum+a[i];
        avg=sum/n;
    }
    printf("the average of array=%.2f ",avg);
    
    return 0;
}