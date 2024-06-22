#include <stdio.h>
#define N 10
int main() {
  char chr;
  printf("\n");
  for (chr = 65; chr <= 122; chr = chr + 1) { // these 65 and all are the ascii values of alphabets.
    if (chr > 90 && chr < 97)
      continue;
    printf("[%2d-%c] ", chr, chr);
  }
  return 0;
}

// or 
#include <stdio.h>

int main() {
    char c = 'A';
    int i = 65;
    
    printf("Alphabet Set:\n");
    
    while(c <= 'Z' && i <= 90) {
        printf("[%d-%c] ", i, c);
        c++;
        i++;
    }
    
    printf("\n");
    return 0;
}

// ALPHABET PRITNIGN JUST THE NOS FORM THEM 
int main(){
  char* letter="abcdefghijklmnopqurstuwxyz ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  int n;
  printf("ascii value of leteers\n");
  for (n=0;n<65;n++){
    printf("%d",letter[n]);
    // if((n+1) % 6 == 0)   // its used when want to print each in cluster of 6 
    //          printf("\n");
  }
}