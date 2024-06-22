# include<stdio.h>
# include <ctype.h>
int main(){
    char c;
    int letter=0;
    int a=0, e=0 , i=0, o=0, u=0, k=0;
    while ((c=getchar())>=0){
        if (isalpha(c)){
            letter++;
            c= tolower(c);
            if (c=='a'|| c=='i'|| c=='e'|| c=='o'|| c=='u'){
                switch (c){
                    case 'a':
                    a++;
                    break;

                    case 'e':
                    e++;
                    break;

                    case 'i':
                    i++;
                    break;

                    case 'o':
                    o++;
                    break;

                    case 'u':
                    u++;
                    break;
                }
            }
            else{
                    
                k++;
                }
            
        }
    }
    int s = letter;
    printf("%d",s);
    printf(" no of vowel occurences\n");
    printf("a  %d; e  %d;  i  %d; o  %d; u  %d; rest %d\n",a ,e ,i,o,u, k );
    printf("percentage of total:\n");
    printf("a %0.2f%% ; e %0.2f%% ; i %0.2f%% ; o %0.2f%% ; u %0.2f%% ; rest %0.2f%% \n", ((float)(a*100)/ letter),((float)(e*100)/ letter),((float)(i*100)/ letter),((float)(o*100)/ letter),((float)(u*100)/ letter),((float)(k*100)/ letter));

    // printf("a  %0.2f%% ; e %0.2f \%; i %0.2f %; o %0.2f %; u %0.2f % ; rest %0.2f % \n", ((float)(a*100)/ letter),((float)(e*100)/ letter),((float)(i*100)/ letter),((float)(o*100)/ letter),((float)(u*100)/ letter),((float)(k*100)/ letter));
    // scanf("")

    return 0;
    
}