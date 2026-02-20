int main() {
    int a,b,c;
    printf("enter first no \n");
    scanf("%d",&a);
     printf("enter second no \n");
    scanf("%d",&b);
     printf("enter third no \n");
    scanf("%d",&c);
    
    if(a>b && a>c) {
        printf("the biggest number is a");
    } 
    else if(b>a && b>c) {
        printf("the biggest number is b");
    }
    else{
        printf("the biggest number is c");
    }

    return 0;
}