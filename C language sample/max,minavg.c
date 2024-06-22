// ACCEPT VALUE TILL 0 OR -VE AND FIND MAX, MINN AND AVG
#include <stdio.h>

int main() {
    int a,min, max,s=0,c=0;
    float avg;
    // Write C code here
    printf("enter a no pos");
    scanf("%d",&a);
    if (a<=0){
        printf("non pos no");
        
    }
    min=a;
    max=a;
    while (a>0){
        s+=a;
        printf("s %d\n",s);
        c++;
        printf("c %d\n", c);
        if (a>max){
            max=a;
            printf("max %d", max);
        }
        else{
            max=max;
        }
        if (a<min){
            min=a;
        }
        else{
            min=min;
        }
        printf("next no");
        scanf("%d",&a);
        
    }
    avg= s/ c;
    printf("final max %d\n", max);
    printf("minfinal %d\n", min);
    printf("average %f\n",avg);
    return 0;
}