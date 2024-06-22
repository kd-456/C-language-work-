#include<stdio.h>
#define lines 10000
#include<string.h>
#include<stdlib.h>
# include <ctype.h>
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
            // if (isaplha(ch)){
                // ch=tolower(ch);
            // }
            i++;
        }
        
        // printf("%s", line[i]);
        line[i]='\0';
        len=strlen(line);
        char  word[lines];
        // int word_len=strlen(word);
        printf("the word that u want to searh for \n");
        scanf("%s",word);
        int word_len=strlen(word);
        int count=0;

        for (int i = 0; i <= len - word_len; i++) {
        if (strncmp(word,&line[i],word_len) == 0) {
            count++;
        }
        }
        printf("the word is %s\n",word);
        printf("the sentence is %s\n",line);
        printf("The word occurs %d times \n",count);

        // for (int i=0;i<=len-word_len;i++){
        //     flag=1;
        //     for (int j=0;j<word_len;j++){
        //         if (line[i+j] != word[j]){
        //             flag=0;
        //             break;
        //         }
        //     }
        //     if (flag){
        //         count++;
        //     }

        // }
        // printf("the ount iis %d",count);
        // for (int i=0; len>)
        // for (int i=0;i<len;i++){
        //     printf("%s",line[i]);
        //     if (word==line[i]){
        //         printf("%c\n",line[i]);
        //     }
        //     printf("%c",line[i]);
        // // }
    }
    return 0;
}
// }

