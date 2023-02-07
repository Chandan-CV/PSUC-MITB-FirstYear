// Write a c program to swap 2 numbers using a temp variable
#include <stdio.h>

int main()
{
    int n1, n2;
    printf("enter the values of the 2 numbers, n1 and n2 respectively");
    scanf("%d %d", &n1, &n2);
    printf("numbers before swap:\n"); //10, 20
    printf("n1: %d, n2: %d \n", n1, n2);
    n1 = n1* n2; //200
    n2 = n1/n2; // 10
    n1 = n1/n2; // 20
    printf("numbers before swap: \n");
    printf("n1: %d, n2: %d \n", n1, n2);
    return 0;
}