#include <stdio.h>

int main() {
    float a ,b;
    float c;
    
    printf("enter a\n");
    scanf("%f",&a);
    printf("enter b\n");
    scanf("%f",&b);
    printf("sum is %f\n",a+b);
    c= (a+b)/2;
    printf("the average of  the number %f and %f is %.2f\n", a,b,c);
    printf("the sum of the squares of the number is %f", ((a*a) + (b*b)));

    return 0;
}
