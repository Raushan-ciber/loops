#include<stdio.h>

int main(){
    int a=1,n;
    printf("enter a number\n");
    scanf("%d",&n);
    do{
        printf("%d\n",a);
        a++;
    }while(a<=n);
    return 0;
}