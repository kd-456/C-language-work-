#include<stdio.h>
int main(){
    int a ,b,c,days;
    printf("enter a  enter b enter c\n");
    scanf("%d  %d  %d", &a,&b,&c);
    if (a>31 || b>12 || a<1 ||b<1 ){
        printf("invalid input");
        return 1;
    }
    switch(b){
        case 1:
        days=31;
        if (a<days){
            a=a+1;
            
        }
        else if (a==days){
            a=1;
            b=2;
        }
        
        printf("%d:%d:%d", a,b,c);
        break;

        case 2:
        if ((c % 4 == 0 && c % 100 != 0) || c% 400 == 0){
            days=29;
            if (a<days){
                a=a+1;
            }
            else if (a==days){
                a=1;
                b=3;
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
                b=3;
            }
            else if (a==29 || a==30){
                printf("invalid\n");
                return 1;
            }    
        }    
        printf("%d:%d:%d", a,b,c);
        break;

        case 3:
        days=31;
        if (a<31){
            a=a+1;
        }
        else if (a==31){
            a=1;
            b=4;
        }
        printf("%d:%d:%d", a,b,c);
        break;

        case 4:
        days=30;
        if (a<30){
            a=a+1;
            
        }
        else if (a==30){
            a=1;
            b=5;
        }
        else if(a==31){
            printf("invalid input\n");
        }
        printf("%d:%d:%d", a,b,c);
        break;

        case 5:
        days=31;
        if (a<31){
            a=a+1;
            
        }
        else if (a==31){
            a=1;
            b=6;
        }
        printf("%d:%d:%d", a,b,c);
        break;

        case 6:
        days=30;
        if (a<30){
            a=a+1;
            
        }
        else if (a==30){
            a=1;
            b=7;
        }
        else if(a==31){
            printf("invalid input\n");
        }
        printf("%d:%d:%d", a,b,c);
        break;

        case 7:
        days=31;
        if (a<31){
            a=a+1;
            
        }
        else if (a==31){
            a=1;
            b=8;
        }
        printf("%d:%d:%d", a,b,c);
        break;

        case 8:
        days=31;
        if (a<31){
            a=a+1;
            
        }
        else if (a==31){
            a=1;
            b=9;
        }
        printf("%d:%d:%d", a,b,c);
        break;

        case 9:
        days=30;
        if (a<30){
            a=a+1;
            
        }
        else if (a==30){
            a=1;
            b=10;
        }
        else if(a==31){
            printf("invalid input\n");
        }
        printf("%d:%d:%d", a,b,c);
        break;

        case 10:
        days=31;
        if (a<31){
            a=a+1;
            
        }
        else if (a==31){
            a=1;
            b=11;
        }
        printf("%d:%d:%d", a,b,c);
        break;

        case 11:
        days=30;
        if (a<30){
            a=a+1;
            
        }
        else if (a==30){
            a=1;
            b=12;
        }
        else if(a==31){
            printf("invalid input\n");
        }
        printf("%d:%d:%d", a,b,c);
        break;

        case 12:
        days=31;
        if (a<31){
            a=a+1;
            
        }
        else if (a==31){
            a=1;
            b=1;
            c=c+1;
        }
        printf("%d:%d:%d", a,b,c);
        break;
    }
    return 0;
}
