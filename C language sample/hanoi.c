// C++ Recursive program for Tower of Hanoi

#include <stdio.h>
// T1 = A
// T2 = B
// T3 = C
// T4 = D

void move(int n, char src_t, char dst,char tmp1, char tmp2)
{
    if (n == 0)
        return;
    if (n == 1)
    {
        printf("move disk %d for rod %s to rod %s",n,src_t,dst);
        return;
    }

    move(n - 2, src_t, tmp1, tmp2, dst);
    printf("move disk %d for rod %s to rod %s",n-1,src_t,tmp2);

    printf("move disk %d for rod %s to rod %s",n,src_t,dst);

    printf("move disk %d for rod %s to rod %s",n-1,tmp2,dst);
    move(n - 2, tmp1, dst, src_t, tmp2);
}
int main()
{
    int n = 4;
    move(n, 'A', 'D', 'B', 'C');
    return 0;
}