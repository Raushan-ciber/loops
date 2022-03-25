#include<stdio.h>
//find factorial using input 
int main(){
    int factorial=1,n,i;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    for(int i=n;i>0;i--){
        factorial = factorial*i;
    }
    printf("factorial of %d is %d",n,factorial);
    return 0;
}