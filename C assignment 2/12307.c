# include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main(){
    int a,b;
    printf("enter any two number\n");
    if (scanf("%d%d",&a,&b)!=2){
        printf("ERROR\n");
        exit(0);
    }
    
    if (a<b){
        printf("UP");
    }
    else if (a>b){
        printf("Down");
    }
    else {
        printf("EQUAL");
        
    }
    return 0;
}
