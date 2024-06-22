//ARRAYS = COLLECTION OF THE DATA ITEMS OF SAME TYPE 
// 1- DIMENSIONAL ARRAY ( LIKE A LIST) 
// 2- DIM ( LIKE A TABLE )
// SYNTAX DATA_TYPE NAME[SIZE];

// FOR ACESSING MARKS OF EACH CHILDREN ARRAY CAN BE USED . 
#include<stdio.h>

int main() {
    // Write C code here
    // printf("Hello world");
    int marks[]={23,4,3,53};
    for (int i=0;i<4;i++){
        printf("the value of %d elemnt of the array is %d\n ", i, marks[i]);
    }

    return 0;
}
// FOR 2 D ARRAY WE NEED 2 FOR LOOP 
#include<stdio.h>
int main() {
    // Write C code here
    // printf("Hello world");
    int marks[2][4]={{23,4,3,53},{2,4,54,63}};
    for (int i=0;i<2;i++)
    {
        for (int j=0; j<4; j++)
        {
        printf("the value of %d, %d elemnt of the array is %d\n ", i,j, marks[i][j]);
    }
}

    return 0;
}

// TO PRINT IN THE FORM OF THE MATRIX 
#include<stdio.h>
int main() {
    // Write C code here
    // printf("Hello world");
    int marks[2][4]={{23,4,3,53},{2,4,54,63}};
    for (int i=0;i<2;i++)
    {
        for (int j=0; j<4; j++)
        {
        // printf("the value of %d, %d elemnt of the array is %d\n ", i,j, marks[i][j]);
        printf("%d", marks[i][j]);

    }
    printf("\n");
}

    return 0;
}