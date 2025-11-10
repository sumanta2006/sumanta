/* Insert a node at begin or end or, delete any node and delete at end and display the node in a single linked list */

#include <stdio.h>
#include <stdlib.h>

struct Node 
{
    int data;
    struct Node* next;
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
          p->next = temp;
        }
    }   

}
void delete_node( int given)
{
    struct Node *p,*temp,*prev;
    p=start;
    for(prev=start;p!=NULL;prev=p,p=p->next)
    {
        if(p->data==given)
           { break;}
        prev=p;
    }
    if(p==NULL)
    {
        printf("Element not found\n");
        return;
    }
    else
    {
        if(p==start)
            start=p->next;
        else
        {
            prev->next=p->next;
            printf("Deleted element is : %d\n",p->data);
             free(p);
        }
    }    
   
}
void delete_end()
{
    struct Node *p,*prev,*temp;
    p=start;prev=start;
    if(start==NULL)
    {
        printf("List is empty\n");
        return;
    }
    while(p->next!=NULL)
    {
        temp=p;
        prev=prev->next;
        break;
    }
    temp->next=NULL;
    printf("Deleted element is : %d\n",p->data);
    free(p);
}

void search(int key)
{
    struct Node* current = start;
    int position = 0;
    while (current != NULL) 
    {
        if (current->data == key) 
        {
            printf("Element %d found at position %d\n", key, position);
            break;
        }
        current = current->next;
        position++;
    }
    if (current == NULL) 
    {
        printf("Element %d not found in the list\n", key);
    }
}
void displayList()
{
    struct Node *p = start;
   while (p->next != NULL)
       {
              printf("%d -> ", p->data);
              p = p->next;
       }
       printf("%d is the value of last node\n", p->data);
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
                     exit(0);
                }
              default:
                {
                     printf("Invalid choice, please try again.\n");
                }
          }

    }
}