/* Write a C program to find the sum of two matrices in a two-dimensional array.*/

/*  #include <stdio.h>

#define MAX 10    // Maximum size of the matrices.

int main() 
{
    int m1[MAX][MAX], m2[MAX][MAX], sum[MAX][MAX];
    int i, j, r, c;

    printf("Enter rows and columns of matrices:- ");
    scanf("%d %d", &r, &c);

    printf("Enter elements of first matrix:-\n");
    for(i = 0; i < r; i++) 
    {
        for(j = 0; j < c; j++) 
        {
            scanf("%d", &m1[i][j]);
        }
    }

    printf("Enter elements of second matrix:-\n");
    for(i = 0; i < r; i++) 
    {
        for(j = 0; j < c; j++) 
        {
            scanf("%d", &m2[i][j]);
        }
    }

    // Calculate sum
    for(i = 0; i < r; i++) 
    {
        for(j = 0; j < c; j++) 
        {
            sum[i][j] = m1[i][j] + m2[i][j];
        }
    }

    // Display result
    printf("Sum of the two matrices:-\n");
    for(i = 0; i < r; i++) 
    {
        for(j = 0; j < c; j++) 
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
*/

/*Write a C program to find the sum and transpose of two matrices in a two-dimensional array.*/
#include <stdio.h>

#define MAX 10    // Maximum size of the matrices.

int main() 
{
    int m1[MAX][MAX], m2[MAX][MAX], sum[MAX][MAX];
    int i, j, r, c;

    printf("Enter rows and columns of matrices:- ");
    scanf("%d %d", &r, &c);

    printf("Enter elements of first matrix:-\n");
    for(i = 0; i < r; i++) 
    {
        for(j = 0; j < c; j++) 
        {
            scanf("%d", &m1[i][j]);
        }
    }

    printf("Enter elements of second matrix:-\n");
    for(i = 0; i < r; i++) 
    {
        for(j = 0; j < c; j++) 
        {
            scanf("%d", &m2[i][j]);
        }
    }

    // Calculate sum
    for(i = 0; i < r; i++) 
    {
        for(j = 0; j < c; j++) 
        {
            sum[i][j] = m1[i][j] + m2[i][j];
        }
    }

    // Display result
    printf("Sum of the two matrices:-\n");
    for(i = 0; i < r; i++) 
    {
        for(j = 0; j < c; j++) 
        {
            printf("%d ", sum[j][i]);
        }
        printf("\n");
    }

    return 0;
}
