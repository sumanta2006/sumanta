/* write a c program ude of goto statements */
#include<stdio.h>
int main()
{
int  n,s=0 ;
start:
printf("\n enter the number (9 to exit): ");
scanf("%d",&n);
if(n!=9)
{
    if(n<0)
    goto start;
    s+=n;
    goto start;
}
printf("\n sum = %d",s);
return 0;
}