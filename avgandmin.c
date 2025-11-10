#include<stdio.h>
int a[50]; // global declaration of array
int main()
{
    int n,i,m,a;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the array elements: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    m=minimum(n);
    printf("The min value is: %d\n", m);
    a=average(n);
    printf("Average value is: %d\n", a);
    return 0;
}
int minimum(int n)
{
    int i, min = a[0];
    for(i=1;i<n;i++)
    {
        if(a[i] < min)
            min = a[i];
    }
    return minimum;
}
int average(int n)
{
    int i, avg,sum ;
    for(i=0; i<n; i++)
    {
        sum += a[i];
         avg = sum / n;
    }
    return average;
}