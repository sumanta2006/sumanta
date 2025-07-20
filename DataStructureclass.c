//Insert an element into an array//
#include <stdio.h>
int main() {

int i,n,ins,item;
int a[50];
printf("\n Enter the size of array:");
scanf("%d",&n);
printf("\n Enter the array elements:");
for (i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
 printf("Enter the element to insert: ");
 scanf("%d", &item);
printf("\n Enter the position to insert:");
scanf("%d",&ins);
for (i=n;i>=ins;i--)
{
    a[i]=a[i-1];
}
a[ins-1]=item;
printf("\n new updated array:");
for(i=0;i<n;i++)
{
    printf("\n%d",a[i]);

}
 return 0;
}
