#include<stdio.h>
int main(){
    float cm,inches;
    int feet;
    printf("enter no denoting cm\n");
    scanf("%f",&cm);
    inches= cm/(2.54);
    feet= inches/12;
    printf("%f centimeters is %d feet and  %0.1f inches.", cm, feet,inches);

}