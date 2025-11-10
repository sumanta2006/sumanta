/*Insert a node at the end of a s ingle linked list by user input*/

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void insertAtEnd(struct Node** head_ref, int d) 
{
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    if (temp == NULL) 
    {
        printf("Memory allocation failed\n");
        return;
    }
    temp->data = d;
    temp->next = NULL;

    if (*head_ref == NULL) 
    {
        *head_ref = temp;
    } else 
    {
        struct Node* p = *head_ref;
        while (p->next != NULL) 
        {
            p = p->next;
        }
        p->next = temp;
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

    printf("Enter the number of elements to insert at the end: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter data for node %d: ", i + 1);
        scanf("%d", &data);
        insertAtEnd(&head, data);
    }

    printf("Linked list after insertions: ");
    printList(head);

    return 0;
}