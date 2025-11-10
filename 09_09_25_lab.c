/* program to find the biggest numbers from 'n' numbers stored in one dimensional array*/
#include <stdio.h>

int main() 
{
    int n, i, max=0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d numbers: ", n);
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    for(i=0; i<n; i++) 
    {
        if(arr[i] > max ) 
        {
            max = arr[i];
        } 
       
    }
    printf("The biggest number is: %d\n", max);
    return 0;
}
