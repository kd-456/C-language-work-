#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main(){
    char ch1,ch2;
    char accept[]={'A', 'B', 'C', 'D', 'E', 'F'};
    int num[]={10, 11, 12, 13, 14, 15};
    // printf("%d",num[1]);
    int length= strlen(accept);
    int len = sizeof(num)/sizeof(num[0]);
    // printf("%d",len);
    printf("enter the characters\n");
    scanf("%c %c",&ch1,&ch2);
    // printf("KDG %c%c\n",ch1,ch2);
    if ( (ch1 >= 'A' && ch1 <= 'F') && (ch2 >= 'A' && ch2 <= 'F')) {
        for (int i=0;i<6;i++){
            if (ch1==accept[i] ){
                printf("%d",num[i]);
            }
            if (ch2==accept[i]){
                printf("%d",num[i]);
            }
        }
        // switch(ch1){
        //     case 1:
        //     if (ch1 ='A'){
        //         printf("%d",10);
        //     }
        
        
    }
    else {
        printf("Invalid characters\n");
    }
    // for (int i=0;i< length;i++){
    //     // printf("%c",accept[i]);
    //     if ( ch1== accept[i] && ch2== accept[i]){
    //         printf("The hexadecimal value of the characters %c%c is %d%d \n", ch1, ch2,num[i],num[i]);
    //     }
    // }


    return 0;
}