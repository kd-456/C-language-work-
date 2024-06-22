#include<stdio.h>
#include<string.h>
struct description
    {
        char name[100];
        int age;
        char address[100];
        int birthdate[8];
        
    };
int main(){
    int a ;
    printf("enter the no of people about whom u want ot add the details\n");
    scanf("%d",&a);
    struct description s[a];
    for (int i=0;i<a;i++)
    {
        printf("enter name\n");
        scanf("%s",&s[i].name);
        printf("enter age\n");
        scanf("%d",&s[i].age);
        if (s[i].age<1){
            printf("invalid age\n");
            return 1;
        }
        printf("Enter address: ");
        scanf(" %[^\n]%*c", s[i].address);
        // int birth;
        printf("enter birthdate\n");
        scanf("%d",s[i].birthdate);
        // int len1=strlen(birth);
        // for (int i=0;i<len1;i++){
        //     // printf("%d",&birth[i]);
        //     if (i==0 & i==1){
        //         printf("%d",birth[i]);
        //     }
        //     if(i==2 &i==3){
        //         printf("  %d",birth[i]);
        //         if (birth[i]>12){
        //             printf("invalid mths\n");
        //             break;
        //         }
        //     }
        //     if (i>3){
        //         printf("     %d  ",birth[i]);
        //     }
        // }
        // scanf("%d",&s[i].birthdate);
        
    }
    printf("----database------\n");
    printf("name age address birthdate(DDMMYYYY)\n");
    // printf("%d",s[0].birthdate[0]);
    // printf("%d",s[1].birthdate[1]);

    for (int j=0;j<a;j++){
        // printf("----dtabbase------\n");
        // printf("name age address DDMMYYYY\n");
        printf("%s  %d  %s  %d\n",s[j].name,s[j].age,s[j].address,s[j].birthdate);
    }
    

   return 0; 
}
   
    
    