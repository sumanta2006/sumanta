/*LAB 1 - Write a program to create an array by taking user input. Now write a user-defined function to insert an element, delete an element, search an element from an array.
*/
//deletion an element into an array//
#include <stdio.h>
#define max 50
int main() {

int i,n,del,item;
int a[max];
printf("\n Enter n:");
scanf("%d",&n);
printf("\n Enter the array elements:");
for (i=0;i<n;i++)
{
scanf("%d",&a[i]);
}

 printf("Enter the index number of the element to be deleted: ");
 scanf("%d", &del);
 item = a[del];
for(i=del;i<=(n-2);i++)
{   if (a[i]=item)
    a[i]=a[i+1];
}
n=n-1;

printf("\n the  deleted element is : %d",item);
printf("\n array after deleion");
for(i=0;i<n;i++)
{
    printf("\n %d",a[i]);
}
 return 0;
} 