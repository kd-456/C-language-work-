#include <stdio.h>
#include <string.h>
#include<ctype.h>
void arr(void *arrayq, int size, int stype, char *type) {
    printf("Enter %s array of size %d: ", type, size);
    // for (int counter=0; counter<size; counter++){
    //     printf("Enter Value:- ");
    //     if (!strcmp(type, "int")){
    //         scanf("%d", &arrayq[counter]);
    //     }
    //     else{
    //         printf("Enter Integer");
    //     }
    // }

    // for (int c; c<size; c++){
    //     printf("Values are %d", &arrayq[c]);
    // }


    for (int i = 0; i < size; i++) {
        if (!strcmp(type, "int")) {
            int * inte_array = arrayq;
            int input;
            int c=0;
            while (c<5) {
                printf("Enter integer value :\n" );
                // printf("Counter - value %d", c);
                if (scanf("%d", &input) != 1) {
                    printf("Invalid input integer value.\n");
                    scanf("%*[^\n]");
                } else {
                    inte_array[i]=input;
                    c++;
                }
            } ;
            // inte_array[i] = input;
            int in;
            // int *o=in;
            for (int i =0; i<5;i++){
                printf("%d ", (int*)&inte_array[i]);
            }
            printf("enter the elemt that is to be found\n");
            scanf("%d",&in);
            for (int i=0;i<size;i++){
                if ((int*)in == (int*)&inte_array[i]){
                    printf("fsdj %d %p ",in , &inte_array);
                    printf("the particular value is at %d",i);
                    break;
                }
                else{
                    printf("Not Found");
                }
            }
            break;
        } else if (!strcmp(type, "char")) {
            char *char_array = arrayq;
            char input;
            int c=0;
            while (c<5) {
                printf("enter char :\n ");
                if (scanf(" %c", &input) != 1) {
                    printf("wrong char.\n");
                    scanf("%*[^\n]"); 
                } else {
                    char_array[i]=input;
                    c++;
                }
            } ;
            // char_array[i] = input;
            char p;
            printf("enter the number that u want to find from the array\n");
            scanf("  d%c",&p);
            // int n = sizeof(char_array) / sizeof(char_array[0]);
            for(int k=0;k<size;k++){
                if (char_array[k]==p){
                    printf("the value %c is at %d ", p,k);
                    break;
                }
                else{
                    printf("not found\n");
                }
            }
            break;
            
        } else if (!strcmp(type, "float")) {
            float *float_array = arrayq;
            float input;
            int c=0;
            while (c<5) {
                printf("enter float:\n ");
                if (scanf("%f", &input) != 1) {
                    printf("invalid float\n");
                    scanf("%*[^\n]"); 
                } else {
                   float_array[i]=input;
                   c++;
                }
            } ;
            float in;
            printf("enter the elemt that is to be found\n");
            scanf("%f",&in);
            for (int i=0;i<size;i++){
                if (in == float_array[i]){
                    printf("fsdj %d %p ",in , &float_array);
                    printf("the particular value is at %d",i);
                    break;
                }
                else{
                    printf("Not Found");
                }
            }
            break;

            // float_array[i] = input;
        } else if (!strcmp(type, "double")) {
            double *double_array = arrayq;
            double input;
            int c=0;
            while (c<5) {
                printf("Enter double value : ");
                if (scanf("%lf", &input) != 1) {
                    printf("Invalid input. Please enter a double value.\n");
                    scanf("%*[^\n]");
                } else {
                    double_array[i]=input;
                    c++;
                }
            } ;
            double in;
            printf("enter the elemt that is to be found\n");
            scanf("%d",&in);
            for (int i=0;i<size;i++){
                if (in == double_array[i]){
                    printf("fsdj %d %p ",in , &double_array);
                    printf("the particular value is at %d",i);
                    break;
                }
                else{
                    printf("Not Found");
                }
            }
            // double_array[i] = input;
        }
        break;
    }
}

int main() {
    int S;
    // int num;
    int int_arr[5];
    char char_arr[5];
    float float_arr[5];
    double double_arr[5];

    printf("enter the type of array you want to read : 1. int  2. char  3. float   4.double ");
    scanf("%d", &S);
    // printf("enter the length of array \n");
    // scanf("%d", &num);
    switch(S){
        case 1:
            arr(int_arr, 5, sizeof(int), "int");
            break;
        
        case 2:
            arr(char_arr, 5, sizeof(char), "char");
            break;
        
        case 3:
        // float float_arr[5];
        arr(float_arr, 5, sizeof(float), "float");
        break;
        
        case 4:
        // double double_arr[5];
        arr(double_arr, 5, sizeof(double), "double");
        break;
        
    }
    
    return 0;
}

// char p;
//             printf("enter the number that u want to find from the array\n");
//             scanf("%c",&p);
//             int n = sizeof(char_array) / sizeof(char_array[0]);
//             for(int k=0;k<n;k++){
//                 if (char_array[k]==p){
//                     printf("the value %c is at %d ", p,k);
//                 }