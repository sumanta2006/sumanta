/*write a program to find the real roots of a quadratic equation*/
#include <stdio.h>
#include <math.h>
int main()
{
 int a, b, c;
    float d, root1, root2;
    printf("Enter coefficients a, b and c: ");  
    scanf("%d, %d, %d", &a, &b, &c);
    d = b * b - 4 * a * c; // calculate discriminant    
     if (d < 0)
     printf("Roots are imaginary\n");
     else
        root1 = (-b + sqrt(d)) / (2 * a);
        root2 = (-b - sqrt(d)) / (2 * a);
        printf("the real roots are :%f and %f\n", root1, root2);

        












return 0;
}