#include <stdio.h>
#include <string.h>
#include<ctype.h>


int finder_function(void *arrayq, int size, int stype, char *type,int sota ){
    printf("Enter %s array of size %d: ", type, size);
    if (sota =1){
        if (!strcmp(type, "int")) {
            int inte_array[5];
            // int inte_array[]={0};
            // int * inte_array = arrayq;
            int input;
            int c=0;
            while (c<5) {
                printf("Enter integer value :\n" );
                // printf("Counter - value %d", c);
                if (scanf("%d", &input) != 1) {
                    printf("Invalid input integer value.\n");
                    scanf("%*[^\n]");
                } else {
                   
                    inte_array[c]=input;
                    c++;
                }
            } ;
            // inte_array[i] = input;
            int in;
            // int *o=in;
            // for (int i =0; i<5;i++){
            //     printf("%d ", (int*)&inte_array[i]);
            // }
            printf("enter the elemt that is to be found\n");
            scanf("%d",&in);
            for (int i=0;i<size;i++){
                if (in == inte_array[i]){
                    // printf("fsdj %d %p ",in , &inte_array);
                    printf("the particular value is at %d",i);
                    break;
                }
                else{
                    printf("Not Found");
                }
            }
            // break;
}
    }
    if (sota=2){
        if (!strcmp(type, "char")) {
            // char *char_array = arrayq;
            char char_array[5];
            char input;
            int c=0;
            while (c<5) {
                printf("enter char :\n ");
                if (scanf(" %c", &input) != 1) {
                    printf("wrong char.\n");
                    scanf("%*[^\n]"); 
                } else {
                    char_array[c]=input;
                    c++;
                }
            } ;
            char in;
            printf("enter the elemt that is to be found\n");
            scanf("%c",&in);
            for (int i=0;i<size;i++){
                if (in == char_array[i]){
                    // printf("fsdj %d %p ",in , &char_array);
                    printf("the particular value is at %d",i);
                    break;
                }
                else{
                    printf("Not Found");
                }
            }
            
    }
    
    }if (sota=3){
        if (!strcmp(type, "float")) {
            float *float_array = arrayq;
            float input;
            int c=0;
            while (c<5) {
                printf("enter float:\n ");
                if (scanf("%f", &input) != 1) {
                    printf("invalid float\n");
                    scanf("%*[^\n]"); 
                } else {
                   float_array[c]=input;
                   c++;
                }
            } ;
            float in;
            printf("enter the elemt that is to be found\n");
            scanf("%f",&in);
            for (int i=0;i<size;i++){
                if (in == float_array[i]){
                    // printf("fsdj %d %p ",in , &float_array);
                    printf("the particular value is at %d",i);
                    break;
                }
                else{
                    printf("Not Found");
                }
            }
        }
    } if (sota = 4){
        if (!strcmp(type, "double")) {
            // double *double_array = arrayq;
            double double_array[5];
            double input;
            int c=0;
            while (c<5) {
                printf("Enter double value : ");
                if (scanf("%lf", &input) != 1) {
                    printf("Invalid input. Please enter a double value.\n");
                    scanf("%*[^\n]");
                } else {
                    double_array[c]=input;
                    c++;
                }
            } ;
            double in;
            printf("enter the elemt that is to be found\n");
            scanf("%d",&in);
            for (int i=0;i<size;i++){
                if (in == double_array[i]){
                    // printf("fsdj %d %p ",in , &double_array);
                    printf("the particular value is at %d",i);
                    break;
                }
                else{
                    printf("Not Found");
                }
            }
        
        }
        
    }
    }
int main() {
    int S;
    
    int int_arr[5];
    char char_arr[5];
    float float_arr[5];
    double double_arr[5];
    printf("enter the type of array you want to read : 1. int  2. char  3. float   4.double ");
    scanf("%d", &S);
    // finder_function(int_arr, 5, sizeof(int), "int",1);
    // break;
    switch(S){
        case 1:
            finder_function(int_arr, 5, sizeof(int), "int",1);
            break;

        case 2:
            finder_function(char_arr, 5, sizeof(char), "char",2);
            break; 

        case 3:
        
        finder_function(float_arr, 5, sizeof(float), "float",3);
        break;  

        case 4:
        finder_function(double_arr, 5, sizeof(double), "double",4);
        break; 
    }
    
    
    return 0;
}

