#include <stdio.h>
#include <sys/time.h>

void mul(int A[2][2], int R[2][2], int n) {
    if (n == 1) {
        R[0][0] = A[0][0]; R[0][1] = A[0][1];
        R[1][0] = A[1][0]; R[1][1] = A[1][1];
        return;
    }
    if (n % 2 == 0) {
        mul(A, R, n/2);
        // mul2 takes two 2x2 matrices as input and
        // returns the multiplication in the first
        // matrix
        mul(R, R, 2); // R <- R * R
    }
    else {
        mul(A, R, (n-1)/2);
        mul(R, R, 2); // R <- R * R
        int temp[2][2];
        mul(R, temp, 1);
        mul(temp, A, 1); // R <- R * A
    }
}

int fib(int n) {
    if (n <= 1) {
        return n;
    }
    int A[2][2];
    int R[2][2];
    A[0][0] = 1; A[0][1] = 1;
    A[1][0] = 1; A[1][1] = 0;
    mul(A, R, n-1);
    // R contains An-1
    return R[0][0];
}
// int main() {
// struct timeval start;
// struct timeval end;
// unsigned long t;
// struct retval r;
// gettimeofday(&start, 0);
// r=fib(10000000);
// long  int z=r.x+r.y;
// gettimeofday(&end, 0);
// t = ((end.tv_sec * 1000000) + end.tv_usec) -((start.tv_sec * 1000000) + start.tv_usec);
// printf("r:%d\n", z);
// printf("elapsed time: %lf milliseconds\n", t/1000.0);
// return 0;
// }
int main() {
    struct timeval start;
    struct timeval end;
    unsigned long t;
    int r;

    int n_values[] = {100000, 500000, 1000000, 100000000, 1000000000, 2000000000};
    int num_n_values = sizeof(n_values) / sizeof(n_values[0]);
    
    for (int i = 0; i < num_n_values; i++) {
        gettimeofday(&start, 0);
        r = fib(n_values[i]);
        gettimeofday(&end, 0);
        t = ((end.tv_sec * 1000000) + end.tv_usec) - ((start.tv_sec * 1000000) + start.tv_usec);
        printf("n = %d, r = %d, time = %lf milliseconds\n", n_values[i], r, t/1000.0);
    }

    return 0;
}


#include <stdio.h>
#include <sys/time.h>
void mul(int A[2][2], int R[2][2], int n) {
if (n == 1) {
R[0][0] = A[0][0]; R[0][1] = A[0][1];
R[1][0] = A[1][0]; R[1][1] = R[1][1];
return;
}
if (n % 2 == 0) {
mul(A, R, n/2);
// mul2 takes two 2x2 matrices as input and
// returns the multiplication in the first
// matrix
mul2(R, R); // R <- R * R
}
else {
mul(A, R, (n-1)/2);
mul2(R, R); // R <- R * R
mul2(R, A); // R <- R * A
}
}
int fib(int n) {
if (n <= 1) {
return n;
}
int A[2][2];
int R[2][2];
A[0][0] = 1; A[0][1] = 1;
A[1][0] = 1; A[1][1] = 0;
mul(A, R, n-1);
// R contains An-1
return R[0][0];
}
int main() {
    struct timeval start;
    struct timeval end;
    unsigned long t;
    int r;
    
    
    int n_values[] = {100000, 500000, 1000000, 100000000, 1000000000, 2000000000};
    int num_n_values = sizeof(n_values) / sizeof(n_values[0]);
    for (int i = 0; i < num_n_values; i++) {
        gettimeofday(&start, 0);
        r = fib_mod(n_values[i]);
        gettimeofday(&end, 0);
        t = ((end.tv_sec * 1000000) + end.tv_usec) - ((start.tv_sec * 1000000) + start.tv_usec);
        printf("n = %d, r = %d, time = %lf milliseconds\n", n_values[i], r, t/1000.0);
    }
    
    return 0;
}