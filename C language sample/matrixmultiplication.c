#include<stdio.h>
# define A 50
int main(){
    int a[A][A], b[A][A], product[A][A];
    int a_row,b_row,a_col,b_col;
    int i,j,k;
    int sum=0;

    printf("enter row and col of a\n");
    scanf("%d %d",&a_row, &a_col);

    printf("a's elements\n");
    for (i=0; i<a_row;i++){
        for (j=0; j<a_col;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter row and col of b\n");
    scanf("%d %d",&b_row, &b_col);

    if (b_row != a_col){
        printf("not possible ");
    }
    else{
    printf("a's elements\n");
    for (i=0; i<b_row;i++){
        for (j=0; j<b_col;j++){
            scanf("%d",&a[i][j]);
        }
    }
    }

    for (i=0; i<a_row;i++){
        for (j=0;j<b_col;j++){
            for (k=0; k<b_row;k++){
                sum+=a[i][k]*b[k][j];
            }
            product[i][j] = sum;
            // sum=0;
        }
    }
    printf("matrix mul\n");
    for (i=0; i<a_row; i++){
        for (j=0;j<b_col;j++){
            printf("%d", product[i][j]);

        }
        printf("\n");
    }
    return 0;
}
 