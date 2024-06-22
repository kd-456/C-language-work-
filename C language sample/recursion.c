// FACTORIAL THROUGH RECURSION 
#include <stdio.h>
int fac(int num){
    if (num==1 || num==0){
        return 1;
    }
    else{
        return ( num * fac(num));
    }
}
int main() {
    int num;
    printf("enter number");
    scanf("%d",&num);
    // printf("factorial of %d is %d\n", num, fac(num));
   

    return 0;
}