/* write a c program to find the factorial of 'n' natural number */
#include <stdio.h>

int main() 
{
    int n; unsigned long long fact = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) 
    {
        fact *= i;
    }

    printf("The factorial of %d is: %d\n", n, fact);
    return 0;
}
 