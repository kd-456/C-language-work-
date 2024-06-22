#include<stdio.h>
#include <ctype.h>
#include <string.h>

#define N 50

int main() {
    FILE *fptr;
    fptr = fopen("text.txt", "r");
    char word[N];
    char ch;
    
    int lines=0,comments=0,blank=1,blanklines=0;

    if (NULL == fptr) {
        printf("file can't be opened \n");
    }
    do {
        ch = fgetc(fptr);
        if (ch=='\n'){
            lines++;
            
            if (blank){
                blanklines++;
            }
            blank=1;
        }
        else{
            if(!isspace(ch)){
                blank=0;
            }
        }

    } while (ch!=EOF);
    fclose(fptr);
    printf("Number of lines: %d\n", lines);
    printf("Number of lines: %d\n", comments);
    printf("Number of blank lines: %d\n", blanklines);
    printf("Percentage of blank lines: %.2f%%\n", ( blanklines*100.0) / lines);
    return 0;
}
