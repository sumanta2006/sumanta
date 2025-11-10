/* write a c program to implement circular queue */
#include <stdio.h>
#include <stdlib.h>
#define n 10 //size of the queue
int a[n]; //global declaration of array
int front = 0, rear = 0, flag = 0;
int insert_circular_queue(int item)
{
if(front==rear&&flag==1)
{
    printf("\n circular Queue is full"); //queue overflow condition
}
else
{
    a[rear] = item;
    rear = (rear + 1) % n; //circular increment
    if (front == rear)
        flag = 1; //indicating queue is full
}
return 0;
}
int delete_circular_queue()
{
int d;
if(front==rear&&flag==0)
{
printf("\n circular queue is empty:");
}
else
{
    d=a[front];
    printf("\n Deleted element is: %d", d);
    front = (front + 1) % n; //circular increment
    flag=0;
    return d;
}
return 0;
}
void display_circular_queue()
{
    int i;
    if(front==rear&&flag==0)
    {
        printf("\n circular queue is empty"); //queue underflow condition
    }
    else
    {
        printf("\n Circular Queue elements are: ");
        for(i = front;i<=rear-1;i++)
        {
            printf("%d ", a[i]);
        }
    }

}
int main()
{
    int choice, item;
    while (1)
    {
        printf("\n 1:insert 2:delete 3:display 4:exit");
        printf("\n enter your choice:");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                printf("\n enter the data to insert:");
                scanf("%d", &item);
                insert_circular_queue(item);
                break;
            case 2:
                delete_circular_queue();
                break;
            case 3:
                display_circular_queue();
                break;
            case 4:
                exit(1);
                break;
        }//end of switch
    }//end of the while loop
    return 0;
}// end of the main fn