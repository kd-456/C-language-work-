#include<stdio.h>
// APPROACH 1
// PERMUTAION OF ALL NUMBERS LESS THAN THE INPUTTED NUMBER  AT A SPACE OF 3 
// int main() {
//     int a, p = 0;
//     printf("enter a number greater than or equal to 3\n ");
//     scanf("%d", &a);
//     if (a < 3) {
//         printf("have entered no less than 3");
//         return 0;
//     }
//     for (int i = 1; i <= a; i++) {
//         for (int j = 1; j <= a; j++) {
//             for (int k = 1; k <= a; k++) {
//                 if (i != j && i != k && j != k) {
//                     printf("%d %d %d\n", i, j, k);
//                     p++;
//                 }
                
                
//             }
//         }
//     }
//     printf("total number of permutations: %d", p);
//     return 0;
// }
// APPROACH 2 
// CHOOSING NUMBERS LESS THAN THE INPUTTED NUMBER AND THEN FINDING THE PERMUTATION. 
int main() {
    int a, p = 0;
    int arr[3];
    printf("enter a number greater than or equal to 3\n ");
    scanf("%d", &a);
    if (a < 3) {
        printf("have entered no less than 3");
        return 0;
    }
    printf( "enter any 3 numbers less than the inputted number A\n");
    scanf("%d %d %d", &arr[0], &arr[1],&arr[2]);
    if ((arr[0] > a) || (arr[1]>a) || (arr[2]>a) ){
        printf(" number inputted are not less than A \n");
        return 1;
    }
    for (int i=0 ; i<3;i++){
        for (int j=0; j<3;j++){
            for (int k=0; k<3;k++){
                if (i != j && i != k && j != k){
                    printf("%d %d %d\n", arr[i], arr[j], arr[k]);
                    p++;
                }
            }
        }
    }
    printf("total number of permutations of the entered number which are less than 'a': %d", p);
    return 0;
}