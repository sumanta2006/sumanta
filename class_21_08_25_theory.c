/* write a programme to store marks of n number of students, where n will be user input. and finally display the marks */

#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int n, i;
    float *p; 
    printf("Enter the number of students: ");
    scanf("%d", &n);

    p = (float *)malloc(n * sizeof(float));
    if (p == NULL) 
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    for (i = 0; i < n; i++) 
    {
        printf("Enter marks for student %d: ", i + 1);
        scanf("%f", &p[i]);
    }

    printf("Marks entered will :\n");
    for (i = 0; i < n; i++) 
    {
        printf("Student %d: %.2f\n", i + 1, p[i]);
    }

    return 0;
}
