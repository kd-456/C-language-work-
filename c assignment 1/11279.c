#include<stdio.h>
int main(){
    int a , b ,c,e,f ,g ,sum, differ,diff1, firstTwoDigits,firstTwoDigit ;
  
    printf("enter the first time\n");
    scanf("%d",&a);
    firstTwoDigits = a / 100;
    // printf(" %d\n", firstTwoDigits) ;
   
    e= a%100;
    // printf("%0.2d\n",e);
    printf("enter the second time\n");
    scanf("%d",&b);
    firstTwoDigit = b / 100;
    // printf(" %d\n", firstTwoDigit) ;
    // e= a%100;
    // printf("%0.2d",e);
    f=b%100;
    // printf("%0.2d\n",f);
    if ((f+e) <60){
        sum= f+e;
        // printf(" %d\n", sum );
        // g=a+b;
        g=firstTwoDigit+firstTwoDigits;
        if (g>24){
            g=g-24;
        }
        printf(" %d %02d\n", g,sum);
        
        // printf("%0.2d ", g);
    }
    else{
        differ= 60-f;
        if ((differ-e)>0){
            diff1= differ-e;
            // printf("%d", diff1);

        }
        else{
            diff1= e-differ;
            // printf(" %d\n", diff1);
        }
        // sum= diff1;
        if (diff1 < 10) {
            printf("0%d",diff1);
        }
        else{
                printf("%d",diff1);
            }
    
        // printf("%d\n", sum);
        g= firstTwoDigit+ firstTwoDigits+1;
        if (g>24){
            g=g-24;
        }
        // printf("%d", g);
        printf("the time after addition is  %d%02d ", g,diff1);
    }
    return 0;
}