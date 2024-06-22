// #include<stdio.h>
// // #include<stdlib.h>
// int main(){
//     int a,b;
//     float total_pay=0;
//     // printf("enter the rate of pence");
//     // scanf("%d",&a);
//     printf("enter hrs");
//     scanf("%d",&b);
//     // if (b<0){
//     //     printf("hr cant be 0");
//     //     ;
//         // exit(0);
//     // }
//     while(a!=0){
//     // total_pay=0;
//     if (a==0){
//         printf("cant be 0");
//         // exit(0);
//         break;
//     }
//     if (b<0){
//         printf("hrs cant be less than 0 \n");
//         printf("enter positive hr\n ");
//         scanf("%d",b);
//         if (b>0){
//             continue;
//         }
//         else{
//             break;
//         }

//     }
//     if (b<=40){
//         // a=a;
//         total_pay= a*b;
//     }
//     else if (b>40 && b<=60 ){
//         total_pay= 40*a+((b-40)*a)/2;
//     }
//     else{
//         total_pay= 40*a+20*a*1.5+((b-60)*a*2);
//     }
//     total_pay+=b;
//     printf("Pay at %d pence/hr for %d hours is %.2f pounds\n", a, b, total_pay / 100.0);
//     }
    
//         // printf("Pay at %d pence/hr for %d hours is %.2f pounds\n", a, b, total_pay / 100.0);
//         return 0;
// }
#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b;
    int total_pay , sum;
    printf("enter the rate of pence: ");
    scanf("%d",&a);
    if (a<0){
        printf("rate cant be -ve\n");
        printf("enter the new rate : \n");
        scanf("%d",&a);
    }
    while (a!=0) {
        // printf("Enter the rate of pence: ");
        // scanf("%d", &a);
        // if (a == 0) {
        //     break;
        // }

        printf("enter hrs: ");
        scanf("%d", &b);
        if (b < 0) {
            printf("Hrs cant be -ve\n");
            break;
            printf("enter no greater than 0\n");
            scanf("%d",&b);
            if (b>0){
                continue;
            }
            else{
                break;
            }
        }

        if (b <= 40) {
            total_pay = a * b;
            sum+=total_pay;
        } else if (b <= 60) {
            total_pay = 40 * a + (b - 40) * a * 1.5;
            sum+=total_pay;
        } else {
            total_pay = 40 * a + 20 * a * 1.5 + (b - 60) * a * 2;
            sum+=total_pay;
        }
        // printf("enter the rate of pence");
        // scanf("%d",&a);

        printf("Pay at %d pence/hr for %d hours is %.2f pounds\n", a, b, total_pay / 100.0);

        printf("enter the rate of pence : ");
        scanf("%d",&a);
        if (a<0){
        printf("rate cant be -ve\n");
        printf("enter the new rate\n");
        scanf("%d",&a);
    }
    // printf("tota pay s %d",sum);
    }

    printf("Total pay is %.2f pounds\n", sum / 100.0);

    return 0;
}