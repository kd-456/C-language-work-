// #include <stdio.h>
// #include <sys/time.h>
// struct cache_entry {
//     int key;
//     int val;
// };

// int num_calls = 0;
// struct cache_entry cache[1];

// int fib(int n) {
//     num_calls++;

//     /* BLOCK-1: add some code here */
//     int cache_index = 0;
//     if (cache[cache_index].key == n - 1) {
//         return cache[cache_index].val;
//     }

//     if (n == 0 || n == 1) {
//         return n;
//     }
//     int r2 = fib(n-2);
//     int r = (fib(n-1) + r2) % 10000;
    
//     /* BLOCK-2: add some code here. */
//     cache[cache_index].key = n;
//     cache[cache_index].val = r2;
    
//     return r;
// }
// int main() {
// struct timeval start;
// struct timeval end;
// unsigned long t;
// int r;
// gettimeofday(&start, 0);
// r = fib(100000);

// gettimeofday(&end, 0);
// t = ((end.tv_sec * 1000000) + end.tv_usec) -
// ((start.tv_sec * 1000000) + start.tv_usec);
// printf("r:%d\n", r);
// printf("elapsed time: %lf milliseconds\n", t/1000.0);
// return 0;
// }
#include<stdio.h>
#include<sys/time.h>
struct cache_entry {
    int key;
    int val;
};

int num_calls = 0;
struct cache_entry cache[1];

int fib(int n) {
    num_calls++;

    /* BLOCK-1: add some code here */
    int c = 0;
    if (cache[c].key == n) {
        return cache[c].val;
    }

    if (n == 0 || n == 1) {
        return n;
    }
    int r1=fib(n-1);
    int r2 = fib(n-2);
    int r = (r1 + r2) % 10000;
    
    /* BLOCK-2: add some code here. */
    cache[c].key = n-1;
    cache[c].val = r1;
    
    return r;
}
// int main() {
//     struct timeval start;
//     struct timeval end;
//     unsigned long t;
//     int r;

//     int n_values[] = {100000, 500000, 1000000};
//     int num_n_values = sizeof(n_values) / sizeof(n_values[0]);
    
//     for (int i = 0; i < num_n_values; i++) {
//         gettimeofday(&start, 0);
//         r = fib(n_values[i]);
//         gettimeofday(&end, 0);
//         t = ((end.tv_sec * 1000000) + end.tv_usec) - ((start.tv_sec * 1000000) + start.tv_usec);
//         printf("n = %d, r = %d, time = %lf milliseconds\n", n_values[i], r, t/1000.0);
//     }

//     return 0;
// }
int main() {
    struct timeval start;
    struct timeval end;
    unsigned long t;
    int r;

    // n = 100,000
    gettimeofday(&start, 0);
    r = fib(500000);
    gettimeofday(&end, 0);
    t = ((end.tv_sec * 1000000) + end.tv_usec) -((start.tv_sec * 1000000) + start.tv_usec);
    printf("n = 100000, r = %d, elapsed time: %lf milliseconds\n", r, t/1000.0);

    return 0;
}

