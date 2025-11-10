/* Write a programe to insert a new node at the end of the linked list by user input */

#include <stdio.h>
#include <stdlib.h>

struct Node 
{
    int data;
    struct Node* next;
};

void insertAtEnd(struct Node** head_ref, int new_data) 
{
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    struct Node* last = *head_ref;

    if (new_node == NULL) 
    {
        printf("Memory not allocated \n");
        return;
    }

    new_node->data = new_data;
    new_node->next = NULL;

    if (*head_ref == NULL) 
    {
        *head_ref = new_node;
        return;
    }

    while (last->next != NULL) 
    {
        last = last->next;
    }
    last->next = new_node;
}

void displayList(struct Node* node) 
{
    while (node != NULL) 
    {
        printf("%d -> ", node->data);
        node = node->next;
    }
    printf("NULL\n");
}

int main() 
{
    struct Node* head = NULL;
    int data;

    printf("Enter data for the first node: ");
    scanf("%d", &data);
    insertAtEnd(&head, data);

    printf("Enter data for the second node: ");
    scanf("%d", &data);
    insertAtEnd(&head, data);

    printf("Enter data for the third node: ");
    scanf("%d", &data);
    insertAtEnd(&head, data);

    printf("Linked list after insertion at end: ");
    displayList(head);

    return 0;
}