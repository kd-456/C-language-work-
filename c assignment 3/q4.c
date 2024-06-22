#include<stdio.h>
#include<string.h>
#define N 1000
int replace(char *str){
    int i,count=0;
    for (i=0;str[i]!='\0';i++){
        if (str[i]==' '){
            str[i]='-';
            count+=1;

        }
    }
    return count;
}
int main(){
    char str[N];
    int count;
    printf("enter the string\n");
    scanf("%[^\n]",&str);
    count=replace(str);
    printf("new string %s\n",str);

    printf("no of spaces %d\n",count);

    return 0;

}
// int main(){
//     char *str;
//     printf("enter the string");
//     scanf("%s",&str);
//     // char ch[]={"0"};
// }
