#include<stdio.h>

int main(){
    int n,sum=0;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        sum += i;
        
    }
    printf("sum of %d natural number is %d",n,sum);
    return 0;
}