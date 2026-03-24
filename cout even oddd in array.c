#include <stdio.h>

int main() {
     int arr[100],i,n,even=0,odd=0;
    printf("enter the no of element : ");
    scanf("%d",&n);
    
    printf("Enter elements:\n");
    for(i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        if(arr[i]%2==0)
        even++;
        
        else
            odd++;
        }
        printf("the no of even is=%d\n",even);
        printf("the no of even is=%d\n",odd);
        
    return 0;
}
    
