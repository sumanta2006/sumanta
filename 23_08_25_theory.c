/* Write a programme to display the value of the last node of a single linked list by user input. */

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void displayLastNode(struct Node* head) {
    if (head == NULL) {
        printf("The list is empty.\n");
        return;
    }

    struct Node* current = head;
    while (current->next != NULL) {
        current = current->next;
    }
    printf("The last node's value is: %d\n", current->data);
}

int main() {
    struct Node* head = NULL;
    struct Node* second = NULL;
    struct Node* third = NULL;

    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));

    printf("Enter data for the first node: ");
    scanf("%d", &head->data);
    head->next = second;

    printf("Enter data for the second node: ");
    scanf("%d", &second->data);
    second->next = third;

    printf("Enter data for the third node: ");
    scanf("%d", &third->data);
    third->next = NULL;

    displayLastNode(head);

    free(head);
    free(second);
    free(third);

    return 0;
}