/* write a c - program for linear Queue*/

#include <stdio.h>
#include <stdlib.h>
#define n 10 //size of the queue
int a[n]; //global declaration of array
int front=-1,rear=-1;
int insert_queue(int item)
{
    if(rear==n-1)
    {
        printf("\nQueue is full");//queue overflow condition
    }
    else
    {
        rear++;
        a[rear]=item;
    }
return 0;
}
int delete_queue()
{
 if(front==rear)
  {
    printf("\nQueue is empty");//queue underflow condition
  }
 else
 {
    front++;
    printf("\nDeleted element is: %d",a[front]);
 }  
 return 0; 
}
int display_queue()
{
   int i; 
    if(front==rear)
    {
        printf("\nQueue is empty");//queue underflow condition
    }
    else
    {
        for(int i=front+1;i<=rear;i++)
        {
            printf("\n %d ",a[i]);
        }
    }
    return 0;
}
int main()
{
int choice,item;
while (1)
{
 printf("\n 1:insert 2:delete 3:display 4:exit");
 printf("\n enter your choice:");
 scanf("%d",&choice);
 switch (choice)
 {
  case 1:
  printf("\n enter the data to insert:");
  scanf("%d",&item);
  insert_queue(item);
  break;
  case 2: delete_queue();
  break;
  case 3: display_queue();
  break;
  case 4: exit(1);//exit the program
  break;
 } //end of switch
} //end of while
return 0;
}
