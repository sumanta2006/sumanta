/* program to find the sum or average of numbers in an array using user inputs and for loops */


#include <stdio.h>

int main() {
    int n, i;
    float sum = 0.0, average, numbers[50];

    printf("How many numbers to add: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) 
    {
        scanf("%f", &numbers[i]);
        sum += numbers[i];
    }

    average = sum / n;
    printf("\n The numbers are:");
    for (i = 0; i < n; i++) 
    {
        printf(" %.2f", numbers[i]);
    }
    printf("\nSum = %.2f\n", sum);
    printf("Average = %.2f\n", average);

    return 0;
}
