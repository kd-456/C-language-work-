// SQUARE WITH HASHING PATTERN
/*#include<stdio.h>
int main()
{
    int n,i;
    printf("size we want");
    scanf("%d",&n);
    for (i=0; i<n;i++){
        for (int j=0;j<n;j++){
            printf("#");
        }
        printf("\n");
    }
    
    
    return 0;
}
*/

//  HOLLOW SQUARE WITH HSHING 
#include<stdio.h>
int main()
{
    int n,i;
    printf("size we want");
    scanf("%d",&n);
    for (i=0; i<n;i++){
        for (int j=0;j<n;j++){
            if (i==0||i==n-1){
                printf("#");
            }
            else if (j==0 || j==n-1){
                printf("#");
            }
            else{
                printf(" ");
            }
            
        }
        printf("\n");
    }
    
    
    return 0;
}