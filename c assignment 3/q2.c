#include<stdio.h>
#define lines 10000
#include<string.h>
// #include<stdlib.h>
// # include <ctype.h>
int main(){
    char ch; 
    char line[lines];
    int len; 
    // int i=0;
    while((ch=getchar())>=0){
        int i=0;
        while (ch!='\n' && ch!=EOF){
            line[i]=ch;
            ch=getchar();
            i++;
        }
        line[i]='\0';
        len=strlen(line);
        for (int i=len-1;i>=0;i--){
            printf("%c",line[i]);
        }
    }
    return 0;
}