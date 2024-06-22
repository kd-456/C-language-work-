#include <stdio.h>

int main()
{
  int blank_char, tab_char, new_line;
  blank_char = 0;
  tab_char = 0;
  new_line = 0;
  int c;
  printf("Number of blanks, tabs, and newlines:\n");
  printf("Input few words/tab/newlines\n");
  for (; (c = getchar()) != EOF;) // for reading the character a para
  {
    if ( c == ' ' ){
      blank_char++;
    }
    if ( c == '\t' ){
      tab_char++;
    }
    if ( c == '\n' ){
      new_line++;
    }
  }  
  printf("blank=%d,tab=%d,newline=%d\n",blank_char,tab_char,new_line);
}
// OR IF WANT TO DO USING WHILE
#include <stdio.h>

int main()
{
  long ctr_char, ctr_word, ctr_line;
  int c;
  int flag;

  ctr_char = 0;
  flag = ctr_line = ctr_word = 0;
  printf("Input a string and get number of characters, words and lines:\n");
  while ((c = getchar()) != EOF)
  {
    ++ctr_char;
    if (c == ' ' || c == '\t')
    {
      flag = 0;
    }
    else if (c == '\n')
    {
      ++ctr_line;
      flag = 0;
    }
    else
    {
      if (flag == 0){
        ++ctr_word;
      }
      flag = 1;
    }
  }
  printf("\nNumber of Characters = %ld",ctr_char);
  printf("\nNumber of words = %d",ctr_word);
  printf("\nNumber of lines = %d",ctr_line);
}
