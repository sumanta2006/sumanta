/*write a programe for using bit wise operator in c language*/
#include <stdio.h>
int main() 
{
    int a, b;
    printf("Enter two integers: ");
    scanf("%d, %d", &a, &b);

    printf("Bitwise AND of %d and %d is: %d\n", a, b, a & b);
    printf("Bitwise OR of %d and %d is: %d\n", a, b, a | b);
    printf("Bitwise XOR of %d and %d is: %d\n", a, b, a ^ b);
    printf("Bitwise NOT of %d is: %d\n", a, ~a);
    printf("Bitwise NOT of %d is: %d\n", b, ~b);
    printf("Left shift %d by 1 is: %d\n", a, a << 1);
    printf("Right shift %d by 1 is: %d\n", a, a >> 1);

    return 0;
}