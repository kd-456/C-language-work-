#include<stdio.h>
int main(){
    float a,b;
    printf("enter a no(in C)\n");
    scanf("%f",&a);
    b= ((9.0/5.0)*a)+32.0;
    printf("  %0.1f degree Celsius converts to  %0.1f degree fahrenheit ",a ,b);
    return 0;
}