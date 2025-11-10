/*write a c program wheather a number is prime or not prime using for loop */
/*#include<stdio.h>
int main()
{
    int n,i;
    printf("\n Enter a number: ");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            printf("%d is not prime",n);
            return 0;
        }
    }
    printf("%d is prime",n);
    return 0;
}
*/
#include<stdio.h>
int main()
{
    int n,i;
    printf("\n Enter a number:");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        break;
    }
    if(i==n)
    {
        printf("%d is prime",n);
    }
    else
    {
        printf("%d is not prime",n);
    }
    return 0;
}



