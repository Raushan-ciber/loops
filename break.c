#include<stdio.h>

int main(){
    int n=0;
    do{
        printf("%d\n",n);
        n++;
        if( n==4){
            break;
        }


    }while(n<=10);
    return 0;
}