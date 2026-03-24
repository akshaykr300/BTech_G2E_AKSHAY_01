#include <stdio.h>

int main() {
    int arr[100],i,rev[100],n;
    printf("enter the no of element : ");
    scanf("%d",&n);
    
    printf("Enter elements:\n");
    for(i = 0; i < n; i++){
        scanf("%d ",&arr[i]);
    }
      for(i=0;i<n;i++){
          rev[i]=arr[n-i-1];
      }
      printf("reverse\n");
     for(i=0;i<n;i++){
         printf("%d ",rev[i]);
     }
    return 0;
}