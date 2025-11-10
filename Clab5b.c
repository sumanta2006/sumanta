/* C program to check whether a number is big.*/
#include <stdio.h>
int main()
{
   int n1,n2,big;
   printf("\n Enter n1 and n2:");
   scanf("%d,%d",&n1,&n2);
   if (n1>n2)
  {
    printf("The number%d is big",n1);
  }
    else
   {
     printf("The number%d is big",n2);
   }
    return 0;
}