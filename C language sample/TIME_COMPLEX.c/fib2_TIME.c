#include <stdio.h>
#include <sys/time.h>

int fib_mod(int n) {
    if (n == 0 || n == 1) {
        return n;
    }
    int prev = 1;
    int pprev = 0;
    int res, i;
    for (i = 2; i <= n; i++) {
        res = (prev + pprev) % 10000;
        pprev = prev;
        prev = res;
    }
    printf(" sds %d",res);
    return res;
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
// int main() {
//     struct timeval start;
//     struct timeval end;
//     unsigned long t;
//     int r;

//     // n = 100,000
//     gettimeofday(&start, 0);
//     r = fib(100000);
//     gettimeofday(&end, 0);
//     t = ((end.tv_sec * 1000000) + end.tv_usec) -
//         ((start.tv_sec * 1000000) + start.tv_usec);
//     printf("n = 100000, r = %d, elapsed time: %lf milliseconds\n", r, t/1000.0);

//     // n = 500,000
//     gettimeofday(&start, 0);
//     r = fib(500000);
//     gettimeofday(&end, 0);
//     t = ((end.tv_sec * 1000000) + end.tv_usec) -
//         ((start.tv_sec * 1000000) + start.tv_usec);
//     printf("n = 500000, r = %d, elapsed time: %lf milliseconds\n", r, t/1000.0);

//     // n = 1,000,000
//     gettimeofday(&start, 0);
//     r = fib(1000000);
//     gettimeofday(&end, 0);
//     t = ((end.tv_sec * 1000000) + end.tv_usec) -
//         ((start.tv_sec * 1000000) + start.tv_usec);
//     printf("n = 1000000, r = %d, elapsed time: %lf milliseconds\n", r, t/1000.0);

//     return 0;
// }

// #include <stdio.h>
// #include <sys/time.h>

// int fib(int n) {
//     if (n == 0 || n == 1)
//         return n;
//     return (fib(n-1) + fib(n-2)) % 10000;
// }

// int main() {
//     struct timeval start;
//     struct timeval end;
//     unsigned long t;
//     int r;

//     // n = 100,000
//     gettimeofday(&start, 0);
//     r = fib(100000);
//     gettimeofday(&end, 0);
//     t = ((end.tv_sec * 1000000) + end.tv_usec) -
//         ((start.tv_sec * 1000000) + start.tv_usec);
//     printf("n = 100000, r = %d, elapsed time: %lf milliseconds\n", r, t/1000.0);

//     // n = 500,000
//     gettimeofday(&start, 0);
//     r = fib(500000);
//     gettimeofday(&end, 0);
//     t = ((end.tv_sec * 1000000) + end.tv_usec) -
//         ((start.tv_sec * 1000000) + start.tv_usec);
//     printf("n = 500000, r = %d, elapsed time: %lf milliseconds\n", r, t/1000.0);

//     // n = 1,000,000
//     gettimeofday(&start, 0);
//     r = fib(1000000);
//     gettimeofday(&end, 0);
//     t = ((end.tv_sec * 1000000) + end.tv_usec) -
//         ((start.tv_sec * 1000000) + start.tv_usec);
//     printf("n = 1000000, r = %d, elapsed time: %lf milliseconds\n", r, t/1000.0);

//     return 0;
// }












// // int fib(int n) {
// // if (n == 0 || n == 1) {
// // return n;
// // }
// // int prev = 1;
// // int pprev = 0;
// // int res, i;
// // for (i = 2; i <= n; i++) {
// // res = prev + pprev;
// // pprev = prev;
// // prev = res;
// // }
// // return res;
// // }