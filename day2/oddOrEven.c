// check if a number is odd or even
#include<stdio.h>

int main(){
    int n;
    printf("enter the number to be checked");
    scanf("%d", &n);
    if(n%2==0){
        printf("the number: %d is even", n);        
    }
    else{
        printf("The number: %d is odd", n);
    }
    return 0;
}