#include<stdio.h>
//factorial of n numbers using while loop and user input
int main(){
    int n,i=1,factorial=1;
    printf("enter the value of n\n");
    scanf("%d",&n);
    while(i<=n){
        factorial *= i;
        i++;
    }
    printf("faoctoiral of %d is %d",n,factorial);
    return 0;
}