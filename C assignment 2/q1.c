# include<stdio.h>
int main(){
    int a, max, min,b,sum;
    float avg;
    printf("enter a number ");
    scanf("%d",&a);
    sum=a;
    max= a;
    min= a;
    for (int i=1; i<10; i++){
        printf("enter the number");
        scanf("%d",&b);
        sum+=b;
        // avg= sum/10;
        // scanf("the average of the given  numbers is %f", avg);

        if (b>max){
            max=b;
        }
        
        if (b<min){
            min=b;
        }
        // scanf("maximun number is %d", max);
        // scanf("minimum number is %d  ", min);
    }
    avg= (float) sum/10;
    printf("the average of the given  numbers is %f\n", avg);
    printf("maximum number is %d\n",max);
    printf("minimum number is %d\n", min);
    return 0;
}