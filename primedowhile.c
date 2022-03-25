#include<stdio.h>

int main(){
    int n,i=2,flag=0;;
    printf("enter a number \n");
    scanf("%d",&n);
    do{
        if(n%2==0 && n!=2){
            flag=1;
            break;
        }
        i++;
    }while(n<i);
    if(flag==1){
        printf("number is not prime\n");
    }
    else{
        printf("number is prime\n");
    }
    
    return 0;
}