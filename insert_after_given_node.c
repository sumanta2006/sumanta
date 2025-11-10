/* Insert a node after a given node by using input in a single linked list*/

#include <stdio.h>
#include <stdlib.h>

struct Node 
{
    int data;
    struct Node* next;
};
struct Node* head = NULL;
void insert_after(int given, int d) 
{
    struct Node* p, *temp;
    for(p=head; p!=NULL; p=p->next)
    {
        if(p->data==given)
        {
            break;
        }
    }
    if(p==NULL)
    {
        printf("given node not found and insertion not possible\n");
        return;
    }
    else
    {
        temp = (struct Node*)malloc(sizeof(struct Node));
        if (temp == NULL) 
        {
        printf("Memory allocation failed\n");
        return;
        }

     temp->data = d;
     temp->next = p->next;
     p->next = temp;
    }   
}

void displayList(struct Node* head) 
{
    struct Node* current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

int main() 
{
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    head->data = 1;
    head->next = (struct Node*)malloc(sizeof(struct Node));
    head->next->data = 2;
    head->next->next = (struct Node*)malloc(sizeof(struct Node));
    head->next->next->data = 3;
    head->next->next->next = NULL;

    printf("Original list: ");
    displayList(head);

    int new_data, position;
    printf("Enter the new data to insert: ");
    scanf("%d", &new_data);
    printf("Enter the position after which to insert (1-based index): ");
    scanf("%d", &position);

    struct Node* current = head;
    for (int i = 1; i < position && current != NULL; i++) 
    {
        current = current->next;
    }

    insert_after(current->data, new_data);

    printf("List after insertion: ");
    displayList(head);

    // Free allocated memory
    while (head != NULL) 
    {
        struct Node* temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}