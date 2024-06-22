#include <stdio.h>

int main() {
    float a,b, smallest, largest;
    printf("Enter a number: ");
    scanf("%f", &a);
    smallest = a;
    largest=a;
    for (int i = 1; i < 10; i++) {
        printf("Enter a number: ");
        scanf("%f", &b);
        
        if (b > largest) {
            largest = b;
        }
        if (b < smallest) {
            smallest = b;
        }
    }
    printf("The largest number is: %f\n", largest);
    printf("The smallest number is: %f\n", smallest);
    return 0;
}

