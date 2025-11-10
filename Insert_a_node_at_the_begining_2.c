/*Insert a node at the begining of a single linked list by user input*/
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void insertAtBeginning(struct Node** head_ref, int d)
{
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
   if(temp==NULL)
   {
       printf("Memory allocation failed\n");
   }
   else
   {
    
       temp->data = d;
       temp->next = *head_ref;
       *head_ref = temp;
   }
}

void printList(struct Node* node) {
    while (node != NULL) {
        printf("%d -> ", node->data);
        node = node->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;
    int n, data;

    printf("Enter the number of elements to insert at the beginning: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter data for node %d: ", i + 1);
        scanf("%d", &data);
        insertAtBeginning(&head, data);
    }

    printf("Linked list after insertions: ");
    printList(head);

    return 0;
}