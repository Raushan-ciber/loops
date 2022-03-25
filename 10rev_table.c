#include<stdio.h>

int main(){
    int a=10;
    for(int i=a;i;i--){
        printf("%d*%d=%d\n",a,i,a*i);
    }
    return 0;
}