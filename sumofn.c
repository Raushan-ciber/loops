#include<stdio.h>

int main(){
    int n,sum=0,i=1;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    while( i<=n){
        sum += i;
        i++;
    }
    printf("value of %d natural number is %d",n,sum);
    return 0;
}