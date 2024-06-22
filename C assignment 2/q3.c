#include<stdio.h>
// #include<string.h>
#include<stdlib.h>
#include<math.h>
#define N 50
int main(){
    int b,i=0,number;
    int sum=0;
    char integer[N];
    int num[N];
    printf("enter the integer\n");
    scanf("%s",integer);
    printf("enter the base\n");
    scanf("%d",&b);
    printf("Input    Output\n");
    printf("-----    -----\n");

    if ((b > 10)  || b<1){
        printf("invalid base");
        return 1;
    }
    // number = atoi(integer); 
    for (i=0; integer[i]!='\0';i++){
        number = integer[i]-'0';
        if (number >b){
            continue;
            // num[i]=number;
            // printf("%d",num[i]);
        }
        else{
            num[i]=number;
            // printf("%d\n",num[i]);
            sum= sum*b+number;
        }
            // printf("%d\n",num[i]);
    }       
        printf("  %d ", b);

        for (i=0; integer[i]!='\0';i++){
            number = integer[i]-'0';
            if (number >b){
            continue;
        }
        else{
            printf("%d",number);
        }
}
        printf("   %d\n", sum);
        return 0;
        }
        // printf("%d %d   %d\n",b,atoi(integer),sum);
    //   }  
    


