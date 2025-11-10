/*Insert a node at the end of a doubly linked list by user input*/
#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int data;
    struct node* next;
    struct node* prev;
};
struct node* start = NULL;

void insert_At_End(int data) 
{
    struct node* temp;
    temp = (struct node*)malloc(sizeof(struct node));
    if (temp == NULL) 
    {
        printf("Memory not allocated\n");
        return;
    }
    else 
    {
        temp->data = data;
        temp->next = NULL; 
        if(start == NULL) 
        {
            temp->prev = NULL;
            start = temp;
            return;
        }
        else 
       {
        struct node* p = start;
        while (p->next != NULL) 
        {
            p = p->next;
        }
        temp->prev = p;
        p->next = temp;

        
       }

    }
}
void display() 
{
    struct node* temp;
    temp = start;
    if (temp == NULL) 
    {
        printf("List is empty\n");
        return;
    }
    printf("Doubly linked list: ");
    while (temp != NULL) 
    {
        printf("%d <-> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() 
{
    int n, data;
    printf("Enter the number of elements to insert at the end: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) 
    {
        printf("Enter data for node %d: ", i + 1);
        scanf("%d", &data);
        insert_At_End(data);
    }
    display();
    return 0;
}