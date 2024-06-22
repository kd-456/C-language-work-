#include <stdio.h>
int main(){
    int action;
    float a;
    while (1){ // true  not working ,, only when while (1)
        printf("Press 1 for Kms to miles\n");
        printf("Press 2 for inches to foots\n");
        printf("Press 3 for cms to inches\n");
        printf("Press 4 for pounds to kgs\n");
        printf("Press 5 for inches to meters\n");
        printf("Enter the conversion you want to do  \n");
        scanf("%d", &action);
        switch (action)
        {
            case 1:
            printf("enter value in kms");
            scanf("%f",&a );
            printf("value from kms %f to miles %f",a,a*0.621);
            break;
            case 2:
            printf("enter value in inches");
            scanf("%f",&a);
            printf("value of %f inches is %f in foots", a,a*0.083);

        }
   
    }
    return 0;
}
