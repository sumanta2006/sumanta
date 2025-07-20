/*LAB 1 - Write a program to create an array by taking user input. Now write a user-defined function to insert an element, delete an element, search an element from an array.
*/
//searched an element into an array//
#include <stdio.h>
#define max 50
int main() {

int i,n,success=0,item;
int a[max];
printf("\n Enter n:");
scanf("%d",&n);
printf("\n Enter the array elements:");
for (i=0;i<n;i++)
{
scanf("%d",&a[i]);
}

 printf("Enter the element to be searched: ");
 scanf("%d", &item);
for (i=0;i<n;i++)
{   if (a[i]==item)
    {
        success=1;
        break;
    }
}
if (success==1)
printf("\n the element is found:");
else
printf("\n not found:");
 return 0;
} 
 