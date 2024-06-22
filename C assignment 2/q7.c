// #include<stdio.h>
// # include<ctype.h>
// #include<string.h>
// int main(){
//     char c;
//     int i, starting_word, ending;
//     while ((c= getchar()<=0)){
//         putchar(c);
        
//     }
//     for (i=0; i<strlen(c),i++){
//         if(!ispunct(c[i])){
//             printf("%s", c);
//         }
//         else if (c[i]==" "){
//             printf(" ");
//         }
//     }
//     return 0;
// }
// #include<stdio.h>
// #include<ctype.h>
// #include<string.h>
// #define N 50
// int main(){
//     FILE *fptr;
//     fptr =fopen("text.txt","r");
//     char word[N];
//     char ch;
//     if (NULL == fptr) {
//         printf("file can't be opened \n");
//     }
//     // fscanf(fptr,"%c",&ch);
//     // printf("%c",ch);
//     do {
//         ch = fgetc(fptr);
//         // printf("%c", ch);
//      while ((ch = getchar())>0){
//         if (isalpha(ch)){
//             for (int i =0; i<N;i++){
//                 word[i]=ch;
//                 ch=fgetc(fptr);
//             if (i>0){
//             word[i]='\0';
//             printf("%s\n",word);
//         }    
//         }
//     }
//     } 
// }   while (ch > 0);
//     fclose(fptr);
//     return 0;
// }
    // fclose(fptr);
    // return 0;
// }

#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define N 50

int main() {
    FILE *fptr;
    fptr = fopen("text.txt", "r");
    char word[N];
    char ch;
    if (NULL == fptr) {
        printf("file can't be opened \n");
    }
    do {
        ch = fgetc(fptr);
       
        if (isalpha(ch)) {
            int i = 0;
            // while ((ch = getchar())>0){
            while (isalpha(ch)) {
                word[i] = ch;
                ch = fgetc(fptr);
                i++;
                // word[i] = '\0';
                // printf("%s\n", word);
            }
            word[i] = '\0';
            printf("%s\n", word);
        
        }
    } while (ch > 0);
    fclose(fptr);
    return 0;
}
