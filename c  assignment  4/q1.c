#include<stdio.h>

int main(){

    int a ,b,c,days;
    enum b { JANUARY = 1, FEBRUARY, MARCH, APRIL, MAY, JUNE, JULY, AUGUST, SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER };
    // enum b  JANUARY;
    char* month[] = {"empty", "JANUARY", "FEBRUARY", "MARCH", "APRIL", "MAY", "JUNE", "JULY", "AUGUST", "SEPTEMBER", "OCTOBER", "NOVEMBER", "DECEMBER"};
    printf("enter a  enter b enter c\n");
    scanf("%d  %d  %d", &a,&b,&c);
    if (a>31 || b>12 || a<1 ||b<1 ){
        printf("invalid input");
        return 1;
    }
    switch(b){
        case JANUARY:
        days = 31;
        if (a < days) {
            a = a + 1;
            b=JANUARY;
        } else if (a == days) {
            a = 1;
            b= FEBRUARY;
        }
        printf("%d %s %d", a,month[b] , c);
        break;

        case FEBRUARY:
        if ((c % 4 == 0 && c % 100 != 0) || c% 400 == 0){
            days=29;
            if (a<days){
                a=a+1;
            }
            else if (a==days){
                a=1;
                b=MARCH;
            }
            else if (a>days){
                printf("invalid\n");
                return 1;
            }
        }
        else {
            days=28;
            if (a<days){
                a=a+1;
            }
            else if (a==days){
                a=1;
                b=MARCH;
            }
            else if (a==29 || a==30){
                printf("invalid\n");
                return 1;
            }    
        }    
        printf("%d %s %d", a,month[b],c);
        break;

        case MARCH:
        days=31;
        if (a<31){
            a=a+1;
        }
        else if (a==31){
            a=1;
            b=APRIL;
        }
        printf("%d %s %d", a,month[b],c);
        break;

        case APRIL:
        days=30;
        if (a<30){
            a=a+1;
            
        }
        else if (a==30){
            a=1;
            b=MAY;
        }
        else if(a==31){
            printf("invalid input\n");
        }
        printf("%d %s %d", a,month[b],c);
        break;

        case MAY:
        days=31;
        if (a<31){
            a=a+1;
            
        }
        else if (a==31){
            a=1;
            b=JUNE;
        }
        printf("%d %s %d", a,month[b] , c);
        break;

        case JUNE:
        days=30;
        if (a<30){
            a=a+1;
            
        }
        else if (a==30){
            a=1;
            b=JULY;
        }
        else if(a==31){
            printf("invalid input\n");
        }
        printf("%d %s %d", a,month[b] , c);
        break;

        case JULY:
        days=31;
        if (a<31){
            a=a+1;
            
        }
        else if (a==31){
            a=1;
            b=AUGUST;
        }
        printf("%d %s %d", a,month[b] , c);
        break;

        case AUGUST:
        days=31;
        if (a<31){
            a=a+1;
            
        }
        else if (a==31){
            a=1;
            b=SEPTEMBER;
        }
        printf("%d %s %d", a,month[b] , c);
        break;

        case SEPTEMBER:
        days=30;
        if (a<30){
            a=a+1;
            
        }
        else if (a==30){
            a=1;
            b=OCTOBER;
        }
        else if(a==31){
            printf("invalid input\n");
        }
        printf("%d %s %d", a,month[b] , c);
        break;

        case OCTOBER:
        days=31;
        if (a<31){
            a=a+1;
            
        }
        else if (a==31){
            a=1;
            b=NOVEMBER;
        }
        printf("%d %s %d", a,month[b] , c);
        break;

        case NOVEMBER:
        days=30;
        if (a<30){
            a=a+1;
            
        }
        else if (a==30){
            a=1;
            b=DECEMBER;
        }
        else if(a==31){
            printf("invalid input\n");
        }
        printf("%d %s %d", a,month[b] , c);
        break;

        case DECEMBER:
        days=31;
        if (a<31){
            a=a+1;
            
        }
        else if (a==31){
            a=1;
            b=JANUARY;
            c=c+1;
        }
        printf("%d %s %d", a,month[b] , c);
        break;
    }
    return 0;
}
