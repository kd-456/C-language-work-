#include <stdio.h>
int main()
{
    char name[20], surname[30], address[30];
    int age;
    printf("enter  name: ");
    scanf("%s", name);
    printf("enter surname: ");
    scanf("%s", surname);
    printf("enter address: ");
    scanf(" %[^\n]", address);
    printf("enter age ");
    scanf("%d", &age);
    printf("Name: %s %s\n", name, surname);
    printf("Address: %s\n", address);
    printf("Age: %d\n", age);
    return 0;
}