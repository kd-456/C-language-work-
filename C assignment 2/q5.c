#include<stdio.h>
#include<stdlib.h>
int main(){
    int a,p=0;
    printf("enter a");
    // scanf("%d",&a);
    if (scanf("%d",&a)!=1){
        printf("Error");
        return 0;
    }
    if (a<1){
            printf("Error");
            exit(0);
        }
    while (a!=1){
        if (a%2==0){
            a=a/2;
            printf("Next Value is %d\n", a);
            // p++;
            // printf("number of steps are %d",p);
        }
        else {
            a=(a*3)+1;
            printf("Next Value is %d\n",a);
            // p++;
            // printf("numb")
        }
        p++;
        // printf("number of steps are %d",p);
    }
    
    printf("number of steps are %d",p);
    return 0;
}