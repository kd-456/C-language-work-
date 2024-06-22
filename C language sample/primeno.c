//ROW CONTAINING 20 PRIME NO 
// 1ST JUST FOR THE PRIME NOS.
# include <stdio.h>
int main() {
    int a,i;
    printf("enter a ");
    scanf("%d", &a);
    for (i=2; i<a;i++){
        if (a%i==0){
            printf("is  not prime %d %d\n", a, i);
            break;
        }
    }
        if (i==a){
            printf("si prime %d\n ", a);
        }
    
    return 0;
}


// NOs PRIME OR NOT FROM 1 TO 200 

int main() {
    int i,j;
    for (i=2; i<200;i++){
        for (j=2;j<i;j++){
            if (i%j==0){
                printf("%d is not prime \n",i);
                break;
            }
            else{
                printf("%d is prime \n", i);
                break;
                
            }
        }
    }
    // Write C code here
    printf("Hello world");

    return 0;
}

//PROPER
int main() {
    int i,j, count;
    for (i=2; i<200;i++){
        for (j=2;j<i;j++){
            if (i%j==0){
                // printf("%d is not prime \n",i);
                break;
            }
            else{
                count++;
                 printf(" %d ", i);
                if (count == 20) {
                    // printf(" %d ", i);
                    printf("\n");
                    count = 0;
                // printf("%d is prime \n", i);
                // for ( int k=1;k<20;k++){
                    // printf(" %d ", i);
                    // break;
                    
                }
                break;
                
            }
        }
    }
   

    return 0;
}