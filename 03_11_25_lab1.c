/* Insert a node at begin or end or, delete any node and delete at end and search or display the node in a Doubly linked list */

#include <stdio.h>
#include <stdlib.h>
struct Node 
{
    int data;
    struct Node* next;
    struct Node* prev;
};

struct Node *start = NULL;
void insert_begin(int data)
{
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    if (temp == NULL) 
    {
        printf("Memory allocation failed\n");
        return;
    }
    else
    {
        temp->data = data;
        temp->next = start;
        temp->prev = NULL;
        if (start != NULL) 
        {
            start->prev = temp;
        }
        start = temp;
    }

}
void insertAtEnd(int data) 
{
    
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    struct Node* last = start;

    if (temp == NULL) 
    {
        printf("Memory not allocated \n");
        return;
    }

    else
    {
        temp->data = data;
        temp->next = NULL;

        if (start == NULL) 
        {
            temp->prev = NULL;
            start = temp;
        }
        else
        {
            struct Node* p;
            p=start;
          while (p->next != NULL) 
         {
            p = p->next;
         }
          temp->prev = p;
          p->next = temp;

        
        }
    }
}
void displayList()
{
    struct Node *temp = start;
    printf("\n Doubly linked list: ");
   while (temp != NULL)
       {
              printf("%d <-> ", temp->data);
              temp = temp->next;
       }
       printf("NULL\n");
}
void delete_node( int given)
{
    struct Node *p=start;
    while(p!=NULL)
    {
        if(p->data==given)
           { break;}
        p=p->next;
    }
    if(p==NULL)
    {
        printf("Element not found\n");
        return;
    }
    else
    {
        if(p==start)
        {
           p->next->prev=NULL;
           start=p->next;
        }
        else if(p->next==NULL)
        {
            p->prev->next=NULL;
        }
        else
        {
            p->prev->next=p->next;
            p->next->prev=p->prev;
        }
        printf("Deleted element is : %d\n",p->data);
        free(p);
        
    }
}
void delete_end()
{
    struct Node *p=start;
    if(p==NULL)
    {
        printf("List is empty\n");
        return;
    }
    while(p->next!=NULL)
    {
        p=p->next;
    }
    if(p==start)
    {
        start=NULL;
    }
    else
    {
        p->prev->next=NULL;
    }
    printf("Deleted element is : %d\n",p->data);
    free(p);
}
void search(int key)
{
    struct Node* p;
    for(p=start;p!=NULL;p=p->next)
    {
        if(p->data==key)
        {
            printf("Element %d found in the list\n", key);
            return;
        }
    }
    printf("Element %d not found in the list\n", key);
}
int main() 
{
   int choice;
   printf("\n 1: Insert  begin \n 2: Insert end \n 3: Display the list \n 4: Delete a node \n 5: Delete at end \n 6: Search \n 7: Exit \n");
   while(1)
    {
         printf("\n Enter your choice : ");
         scanf("%d",&choice);
         switch(choice)
         {
              case 1: 
                {
                     int data;
                     printf("Enter data to insert at begin: ");
                     scanf("%d", &data);
                     insert_begin(data);
                     break;
                }
              case 4:
                {
                     int data;
                     printf("Enter data to delete: ");
                     scanf("%d", &data);
                     delete_node(data);
                     break;
                }
              case 3:
                {
                     displayList();
                     break;
                }
              case 2:
                {
                     int data;
                     printf("Enter data to insert at end: ");
                     scanf("%d", &data);
                     insertAtEnd( data);
                     break;
                }
              case 5:
                {
                     delete_end();
                     break;
                }
              case 6:
                {
                     int key;
                     printf("Enter element to search: ");
                     scanf("%d", &key);
                     search(key);
                     break;
                }
              case 7:
                {
                     printf("Exiting...\n");
                     exit(0);
                }
              default:
                {
                     printf("Invalid choice. Please try again.\n");
                }
         }
    }
   return 0;
}
