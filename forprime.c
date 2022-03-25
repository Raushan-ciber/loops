#include<stdio.h>
//find prime number using for loop


int main(){
    int num,prime=0;;
    printf("Enter a number \n");
    scanf("%d",&num);
    for(int i=2;i<num;i++){
        if(num%i==0){
            prime=1;
            break;
        }
        
    }
    if(prime=1){
        printf("%d is a prime number\n",num);
    }
    else{
        printf("%d is not a prime number\n",num);
    }
    return 0;
}