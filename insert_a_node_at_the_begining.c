/* write a programme to insert a node at the begining by user input. */


#include <stdio.h>
#include <stdlib.h>

struct Node 
{
    int data;
    struct Node* next;
};

void insertAtBeginning(struct Node** head_ref, int new_data) 
{
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    if (new_node == NULL) 
    {
        printf("Memory not allocated \n");
        return;
    }
    else
    {
        new_node->data = new_data;
        new_node->next = (*head_ref);
        (*head_ref) = new_node;
    }
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
    insertAtBeginning(&head, data);

    printf("Enter data for the second node: ");
    scanf("%d", &data);
    insertAtBeginning(&head, data);
    printf("Enter data for the third node: ");
    scanf("%d", &data);
    insertAtBeginning(&head, data);

    printf("Linked list after insertion at beginning: ");
    displayList(head);

    return 0;
}