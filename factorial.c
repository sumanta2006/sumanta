/* Factorial function*/
#include <stdio.h>
int fact(int n)
{
    int i,r;
    if(n==0)
    {
        r=1;
    }
    else
    {   r=1;
        for(i=1;i<=n;i++)
        {
            r=r*i;
        }
    }
    return r;
}
int main()
{
    int n,r,result;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Enter r: ");
    scanf("%d",&r);
    result = (fact(n)/(fact(r) * fact(n - r)));
    printf("NCR:= %d\n",result);
    return 0;
}