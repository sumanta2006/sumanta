/*Write display function of a doubly linked list*/
#include <stdio.h>
#include <stdlib.h>

struct Node 
{
    int data;
    struct Node* next;
    struct Node* prev;
};

void display_List(struct Node* head) 
{
    struct Node* temp = head;
    printf("Doubly linked list : \n");
    while (temp != NULL) 
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
