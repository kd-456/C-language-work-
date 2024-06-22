#include<stdio.h>
#include<string.h>
// #include<ctype.h>
#define N 25
int main(){
    int i;
    // int occ=0;
    char ch;
    int count[N]={0};
    char chr[N];
    while((ch=getchar())>=0){
        i=0;
        while (ch!='\n' && ch!=' '){
            chr[i]=ch;
            ch=getchar();
            i++;
        
        }
        if (i>0){
            chr[i]='\0';
            int len=strlen(chr);
            // printf("%d",len);
            count[len]++;
        }
    for (i=1;i<N;i++){
        printf("length %d:%d\n",i,count[i]);
    }
        // printf("length %d:%d\n",i,count[i]);
        // int len=strlen(chr);
        // printf("%d",len);
    }
    return 0;
}