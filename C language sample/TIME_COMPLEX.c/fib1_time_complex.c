#include <stdio.h>
#include <sys/time.h>

struct retval
{
    long  int x;
    long  int y;
};


struct retval fib(int n) {
    struct retval ret;
    struct retval r;
    if(n==1){
        r.x=1;
        r.y=0;
        return r;
        }
    printf("2");
    ret=fib(n-1);
    printf("3");
    r.x=ret.x+ret.y;
    r.y=ret.x;
    return r;

    }
int main() {
struct timeval start;
struct timeval end;
unsigned long t;
struct retval r;
gettimeofday(&start, 0);
r=fib(10000000);
long  int z=r.x+r.y;
gettimeofday(&end, 0);
t = ((end.tv_sec * 1000000) + end.tv_usec) -((start.tv_sec * 1000000) + start.tv_usec);
printf("r:%d\n", z);
printf("elapsed time: %lf milliseconds\n", t/1000.0);
return 0;
}
// #include <stdio.h>
// #include <sys/time.h>

// void fib(int n, int* pre) {
//     if (n == 1) {
//         pre[0] = 1;
//         pre[1] = 0;
//         return;
//     }

//     int temp[2];
//     fib(n-1, temp);
//     pre[0] = (temp[0] + temp[1]) % 10000;
//     pre[1] = temp[0];
// }

// int main() {
//     struct timeval start;
//     struct timeval end;
//     unsigned long t;
//     int r[2];
//     gettimeofday(&start, 0);
//     fib(100000, r);
//     gettimeofday(&end, 0);
//     t = ((end.tv_sec * 1000000) + end.tv_usec) - ((start.tv_sec * 1000000) + start.tv_usec);
//     printf("r:%d\n", r[0]);
//     printf("elapsed time: %lf milliseconds\n", t/1000.0);
//     return 0;
// }

// // #include<stdio.h>
// // #include <sys/time.h>
// // int fib(int n) {
// //     if(n==1){
// //         return (1,0);
// //     }
// //     else{

// //     }

// // // return (fib(n-1) + fib(n-2)) % 10000;
// // }
// // int main() {
// // struct timeval start;
// // struct timeval end;
// // unsigned long t;
// // int r;
// // gettimeofday(&start, 0);
// // r = fib(44);

// // gettimeofday(&end, 0);
// // t = ((end.tv_sec * 1000000) + end.tv_usec) -
// // ((start.tv_sec * 1000000) + start.tv_usec);
// // printf("r:%d\n", r);
// // printf("elapsed time: %lf milliseconds\n", t/1000.0);
// // return 0;
// // }