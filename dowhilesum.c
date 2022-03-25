#include<stdio.h>

int main(){
    int n,sum=0,i=0;
    printf("enter the value of n\n");
    scanf("%d",&n);
    do{
        sum += i;
    }while(i<=n);
    printf("sum of %d natural number is %d",n,sum);
    return 0;
}