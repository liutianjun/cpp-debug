/*
 * 编译方式：gcc .\ret_value_ptr.c
 * 运行方式：.\a.exe
 */
#include <stdio.h>

void funCount(int x, int *a)
{
    x = 2 * x - 1;
    // printf("x=%d\n", x);
    // printf("before opertation a=%d\n", *a);
    *a = *a + x;
    // printf("a=%d\n", *a);
    return;
}

void main()
{
    int x = 10;
    funCount(x, &x);
    printf("outValue=%d\n", x);
}