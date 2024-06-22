#include <stdio.h>
#include <string.h>
#include<ctype.h>
void arr(void *array, int size, int stype, char *type) {
    printf("Enter %s array of size %d: ", type, size);
    for (int i = 0; i < size; i++) {
        if (!strcmp(type, "int")) {
            int *int_array = array;
            int input;
            do {
                printf("Enter integer value :" );
                if (scanf("%d", &input) != 1) {
                    printf("Invalid input integer value.\n");
                    scanf("%*[^\n]"); 
                } else {
                    break;
                }
            } while (1);
            int_array[i] = input;
        } else if (!strcmp(type, "char")) {
            char *char_array = array;
            char input;
            do {
                printf("enter char : ");
                if (scanf(" %c", &input) != 1) {
                    printf("wrong char.\n");
                    scanf("%*[^\n]"); 
                } else {
                    break;
                }
            } while (1);
            char_array[i] = input;
        } else if (!strcmp(type, "float")) {
            float *float_array = array;
            float input;
            do {
                printf("enter float: ");
                if (scanf("%f", &input) != 1) {
                    printf("invalid float\n");
                    scanf("%*[^\n]"); 
                } else {
                    break;
                }
            } while (1);
            float_array[i] = input;
        } else if (!strcmp(type, "double")) {
            double *double_array = array;
            double input;
            do {
                printf("Enter double value for index %d: ", i);
                if (scanf("%lf", &input) != 1) {
                    printf("Invalid input. Please enter a double value.\n");
                    scanf("%*[^\n]");
                } else {
                    break;
                }
            } while (1);
            double_array[i] = input;
        }
    }
}

int main() {
    int S;
    // int num;
    printf("enter the type of array you want to read : 1. int  2. char  3. float   4.double ");
    scanf("%d", &S);
    // printf("enter the length of array \n");
    // scanf("%d", &num);
    switch(S){
        case 1:
            int int_arr[5];
            arr(int_arr, 5, sizeof(int), "int");
            break;
        
        case 2:
        char char_arr[5];
        arr(char_arr, 5, sizeof(char), "char");
        break;
        
        case 3:
        float float_arr[5];
        arr(float_arr, 5, sizeof(float), "float");
        break;
        
        case 4:
        double double_arr[5];
        arr(double_arr, 5, sizeof(double), "double");
        break;
        
    }
    
    return 0;
}