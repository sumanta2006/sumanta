/* C program to check whether a number is even or odd */
#include <stdio.h>
int main()
{
   int n,r;
   printf("\n Enter n:");
   scanf("%d",&n);
   r=n%2;
   if (r==0)
  {
    printf("The number%d is even",n);
  }
    else   
   {
     printf("The number%d is odd",n);
   }  
    return 0;
}