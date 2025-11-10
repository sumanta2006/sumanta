/*write a C program to find GCD and LCM of two numbers using while loop*/
#include<stdio.h>
int main()
{
    int a,b,r,m ,lcm    ;
    printf("\n Enter a and b:");
    scanf("%d,%d",&a,&b);
    r=a%b;
    m=a*b;
    while(r!=0)
    {
        a=b;
        b=r;
        r=a%b;
    }
    printf("\n GCD is %d",b);
    lcm=m/b;
    printf("\n LCM is %d", lcm);
    return 0;
}

