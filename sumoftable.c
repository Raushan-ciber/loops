#include<stdio.h>
//sum of all number in a table using input
int main(){
    int n,sum=0,i;
    printf("Enter a number");
    scanf("%d",&n);
    for(i=1;i<=10;i++){
        sum+= (n*i);
    }
    printf("sum of all the numbers in %d is %d",n,sum);
    return 0;
}
//sucessful