/*write a c program on pointers using function calling */
#include<stdio.h>
int main()
{
   int a=30 ,b=20;
   printf("Before swapping: a=%d, b=%d\n",a,b);
   swap(a,b);
   printf("After swapping: a=%d, b=%d\n",a,b);
   swap_using_address(&a,&b); 
   printf("\n a=%d,b=%d",a,b);
   return 0;
}
void swap(int x,int y)
{
   int temp;
   temp=x;
   x=y;
   y=temp;
}
void swap_using_address(int *x,int *y)
{
   int temp;
   temp=*x;
   *x=*y;
   *y=temp;
}

