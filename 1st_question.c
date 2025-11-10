/*1.Find the output with explanation. Memory address can be taken randomly.*/
#include <stdio.h>
int main() 
{
    int a = 10;
    int *p = &a;
    printf("Address of a: %p\n", p);
    printf("Value of a: %d\n", *p);
    return 0;
}
