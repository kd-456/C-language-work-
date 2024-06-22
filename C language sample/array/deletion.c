#include<stdio.h>
int main()
{
    int a[50],size,pos;
    printf("enter size ");
    scanf("%d",&size);
    printf("enter elemnts");
    for (int i=0;i<size;i++){
    scanf("%d",&a[i]);
    }
    // if want to delete a particualr elemt 
    printf("pos to be deleted");
    scanf("%d",&pos);
    if (pos<=0||pos>size){
        printf("invlid");

    }
    else{
        for (int i=pos-1;i<size-1;i++){
            a[i]=a[i+1];
        }
        size--;

    } 
    return 0;
}