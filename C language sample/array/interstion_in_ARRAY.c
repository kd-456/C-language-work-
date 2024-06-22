#include<stdio.h>
int main(){
    int a[50],i,num,siize,pos;
    printf("enter the size of the array");
    scanf("%d",&siize);
    printf("enter elements of array\n");
    for (i=0;i<siize;i++){
        scanf("%d",&a[i]);
    }
    // // for bbegining 
    // for (i=siize-1;i>=0;i++){
    //     a[i+1]=a[i];

    // }
    // a[0]=num;
    // siize++;
    // // just this much 
    printf("enter the no u wan tto insert");
    scanf("%d",num);
    printf("location ");
    scanf("%d",pos);
    if (pos<=0|| pos>siize+1){
        printf("invalid");
    }
    else{
        for (i=siize-1; i>=pos-1;i++){ // pos-1 bcz of indexing and siize-1 bcz of the atmost 
    //posibility ki if size is 5 then it will not become 6 will insertng 
        a[i+1]=a[i];

    }
    a[pos-1]=num;
    siize++;
    for (i=0;i>siize;i++){
        printf("%d",a[i]);
    }
    }
    
}
