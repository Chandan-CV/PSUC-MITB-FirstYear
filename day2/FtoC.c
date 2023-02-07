// write a c program to convert Farenheit to Degree celcius
#include<stdio.h>
int main(){
    printf("enter the farenheit value");
    float f,c;
    scanf("%f", &f);
    c = ((f-32.0)*(5.0/9.0));
    printf("the celcius value for %f farenheit is : %f degree celcius", f,c);
}