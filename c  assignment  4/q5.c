#include<stdio.h>
int main(){
    int a,b,c;
    int *p1,*p2,*p3;
    printf(" enter a   enter b   enter c");
    scanf("%d%d%d",&a,&b,&c);
    p1=&a;
    p2=&b; 
    p3=&c;
    printf("%d %d %d",*(p3),*(p1),*(p2));
    return 0;


}