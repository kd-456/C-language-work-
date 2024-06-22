#include<stdio.h>
int main(){
    int a,hr ,min,sec;
    printf("enter the integer\n");
    scanf("%d",&a);
    hr= a/3600;
    min= (a % 3600)/60;
    sec= a%60;
    printf("%d seconds is equivalent to %d hours, %d minutes and  %d seconds. ", a, hr, min, sec);
    return 0;
}
