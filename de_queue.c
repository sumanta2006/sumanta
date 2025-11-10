/* Deque implementation in C */
#include <stdio.h>
#include <stdlib.h>

#define MAX 10

struct Deque 
{
    int arr[MAX];
    int front;
    int rear;
};

// Initialize the deque
void initDeque(struct Deque* dq) 
{
    dq->front = -1;
    dq->rear = -1;
}

// Check if deque is full
int isFull(struct Deque* dq) 
{
    return ((dq->front == 0 && dq->rear == MAX - 1) ||
            (dq->front == dq->rear + 1));
}

// Check if deque is empty
int isEmpty(struct Deque* dq) 
{
    return (dq->front == -1);
}

// Insert element at front
void insertFront(struct Deque* dq, int key) 
{
    if (isFull(dq)) 
    {
        printf("Deque is full\n");
        return;
    }

    if (isEmpty(dq)) 
    {
        dq->front = dq->rear = 0;
    } else if (dq->front == 0) 
    {
        dq->front = MAX - 1;
    } else 
    {
        dq->front = dq->front - 1;
    }

    dq->arr[dq->front] = key;
}

// Insert element at rear
void insertRear(struct Deque* dq, int key) 
{
    if (isFull(dq)) 
    {
        printf("Deque is full\n");
        return;
    }

    if (isEmpty(dq)) 
    {
        dq->front = dq->rear = 0;
    } else if (dq->rear == MAX - 1) 
    {
        dq->rear = 0;
    } else 
    {
        dq->rear = dq->rear + 1;
    }

    dq->arr[dq->rear] = key;
}

// Delete from front
void deleteFront(struct Deque* dq) 
{
    if (isEmpty(dq)) 
    {
        printf("Deque is empty\n");
        return;
    }

    printf("Deleted from front: %d\n", dq->arr[dq->front]);

    if (dq->front == dq->rear) 
    {
        dq->front = dq->rear = -1;
    } else if (dq->front == MAX - 1) 
    {
        dq->front = 0;
    } else 
    {
        dq->front++;
    }
}

// Delete from rear
void deleteRear(struct Deque* dq) 
{
    if (isEmpty(dq)) 
    {
        printf("Deque is empty\n");
        return;
    }

    printf("Deleted from rear: %d\n", dq->arr[dq->rear]);

    if (dq->front == dq->rear) 
    {
        dq->front = dq->rear = -1;
    } else if (dq->rear == 0) 
    {
        dq->rear = MAX - 1;
    } else 
    {
        dq->rear--;
    }
}

// Display the deque
void display(struct Deque* dq) 
{
    if (isEmpty(dq)) 
    {
        printf("Deque is empty\n");
        return;
    }

    printf("Deque elements: ");
    int i = dq->front;
    while (1) 
    {
        printf("%d ", dq->arr[i]);
        if (i == dq->rear)
            break;
        i = (i + 1) % MAX;
    }
    printf("\n");
}

// Main function to demonstrate deque operations
int main() {
    struct Deque dq;
    initDeque(&dq);

    insertRear(&dq, 10);
    insertRear(&dq, 20);
    insertFront(&dq, 5);
    insertFront(&dq, 2);

    display(&dq);

    deleteRear(&dq);
    deleteFront(&dq);

    display(&dq);

    return 0;
}
