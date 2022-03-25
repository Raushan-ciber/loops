#include<stdio.h>
//find prime number using while loop and user input.
int main(){
    int num,prime=0,i=2;

    printf("Enter a number\n");

    scanf("%d",&num);

    while(i<num ){
        if(num%i==0 &&num!=2){
            prime=1;
            break;
        }
        i++;
    }
    if(prime==1){
        printf("%d is a not a prime number\n",num);
    }
    else{
       printf("%d is prime number\n",num);
    }
    
    return 0;
}