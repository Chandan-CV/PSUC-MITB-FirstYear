#include<stdio.h>
int main(){
int a,b;
printf("Enter the values of a and b");
scanf("%d %d",&a, &b);

if(a<b){
    printf("%d is smaller than %d",a,b);
}
else{
    printf("%d is smaller than %d", b,a);
}
return 0;
}
