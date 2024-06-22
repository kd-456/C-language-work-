# include<stdio.h>
int main(){
    int i,sum=0;
    printf("enter the number ");
    scanf("%d",&i);
    while (i>-999 || i<-999){
        sum +=i;
        printf("enter the no");
        scanf("%d",&i);
        
        // if (i=-999){
        //     return 1;
        // }
    }
    printf("the sum of number without -999 is %d", sum);
    return 0;
}