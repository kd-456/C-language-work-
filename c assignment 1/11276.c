#include<stdio.h>
int main(){
    float r, area;
    float pi= 3.14159;
    printf("enter the radius\n ");
    scanf("%f",&r);
    if (r<0){
        printf("Negative values not permitted.");
        return 1;
    }
    area= pi*r*r;
    printf("The area of a circle of radius %f units is %f units" , r, area);
    return 0;
}

    
