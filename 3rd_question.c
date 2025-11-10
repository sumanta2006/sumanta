#include<stdio.h>
void print_xy(int x, int y)
{
    int *ptr;
    x = 0;
    ptr = &x;
    y = *ptr;
    *ptr = 1;
    printf("%d,%d", x, y);
}
