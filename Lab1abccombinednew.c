/*LAB 1 - Write a program to create an array by taking user input. 
Now write a user-defined function to insert an element, delete an element, 
search an element from an array.*/
#include <stdio.h>
int a[50];
int search(int item1, int n)
{
    int i,success=0;
    for(i=0;i<n;i++)
    {
        if(a[i]==item1)
        {
            success=1;
            break;
        }
    }
    if(success==1)
    printf("\nItem found");
    else
    printf("\nNot found");
    return success;
}
int insert(int item2, int n,int ins)
{
    int i;
    for(i=n;i>=ins;i--)
    {
        a[i]=a[i-1];
    }
    a[ins-1]=item2;
    printf("\nNew array");
    for(i=0;i<n;i++)
    {
        printf("\n%d",a[i]);
    }
  return 0;  
}
int delete(int del, int n)
 {
    int i,index;
    int deleted = a[del-1];
    index=del-1;
    for(i = index; i < n - 1; i++)
     {
        a[i] = a[i + 1];
    }
    n--;
    printf("\nDeleted element:%d ",deleted);
    printf("\nArray after deletion:\n");
    for(i = 0; i < n; i++) 
    {
        printf("\n%d ",a[i]);
    }
    return 0;
}

int main() 
{
    int i,n,item1,item2,ins,del;
    printf("\nEnter the number of elements in the array: ");
    scanf("%d", &n);
    printf("\nEnter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nEnter the element to search: ");
    scanf("%d", &item1);
    search(item1,n);
    printf("\nEnter the element to insert: ");
    scanf("%d", &item2);
    printf("\nEnter the index number to be inserted: ");
    scanf("%d", &ins);
    insert(item2,n,ins);
    printf("\nEnter the index no. of the element to be delete: ");
    scanf("%d", &del);
    delete(del,n);
    return 0;
}