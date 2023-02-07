// Write a c program to swap 2 numbers using a temp variable
#include<stdio.h>

int main(){
    int n1, n2, temp;
    printf("enter the values of the 2 numbers, n1 and n2 respectively");
    scanf("%d %d", &n1, &n2);
    temp= n1;
    n1= n2;
    n2 = temp;
    printf("n1: %d, n2: %d", n1, n2);    
    return 0;
}