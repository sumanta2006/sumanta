/* Array implementation of stack using two stacks */
#include <stdio.h>
#include <stdlib.h>
#define MAX 10 // size of the stack
struct Stack 
{
    int arr[MAX];
    int top1;
    int top2;
}
// Initialize the stack
void initStack(struct Stack* stack) 
{
    stack->top1 = -1;
    stack->top2 = MAX;
}
// Check if stack is full
int isFull(struct Stack* stack) 
{
    return (stack->top1 + 1 == stack->top2);
}

// Check if stack is empty
int isEmpty(struct Stack* stack) 
{
    return (stack->top1 == -1 && stack->top2 == MAX);
}
// Push element onto stack 1    
void push1(struct Stack* stack, int value) 
{
    if (isFull(stack)) 
    {
        printf("Stack is full\n");
        return;
    }
    stack->arr[++stack->top1] = value;
}

// Push element onto stack 2
void push2(struct Stack* stack, int value) 
{
    if (isFull(stack)) 
    {
        printf("Stack is full\n");
        return;
    }
    stack->arr[--stack->top2] = value;
}
// Pop element from stack 1
int pop1(struct Stack* stack) 
{
    if (stack->top1 == -1) 
    {
        printf("Stack 1 is empty\n");
        return -1; // Indicating stack is empty
    }
    return stack->arr[stack->top1--];
}
// Pop element from stack 2
int pop2(struct Stack* stack) 
{
    if (stack->top2 == MAX) 
    {
        printf("Stack 2 is empty\n");
        return -1; // Indicating stack is empty
    }
    return stack->arr[stack->top2++];
}
// Display elements of stack 1
void display1(struct Stack* stack) 
{
    if (stack->top1 == -1) 
    {
        printf("Stack 1 is empty\n");
        return;
    }
    printf("Stack 1 elements: ");
    for (int i = 0; i <= stack->top1; i++) 
    {
        printf("%d ", stack->arr[i]);
    }
    printf("\n");
}
// Display elements of stack 2
void display2(struct Stack* stack) 
{
    if (stack->top2 == MAX) 
    {
        printf("Stack 2 is empty\n");
        return;
    }
    printf("Stack 2 elements: ");
    for (int i = MAX - 1; i >= stack->top2; i--) 
    {
        printf("%d ", stack->arr[i]);
    }
    printf("\n");
}
// Main function to demonstrate stack operations
int main() 
{    
    struct Stack stack;
    initStack(&stack);
    int choice, value;

    while (1) 
    {
        printf("\n1: Push to Stack 1
            \n2: Push to Stack 2
            \n3: Pop from Stack 1
            \n4: Pop from Stack 2
            \n5: Display Stack 1
            \n6: Display Stack 2
            \n7: Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter value to push to Stack 1: ");
                scanf("%d", &value);
                push1(&stack, value);
                break;
            case 2:
                printf("Enter value to push to Stack 2: ");
                scanf("%d", &value);
                push2(&stack, value);
                break;
            case 3:
                value = pop1(&stack);
                if (value != -1) {
                    printf("Popped from Stack 1: %d\n", value);
                }
                break;
            case 4:
                value = pop2(&stack);
                if (value != -1) {
                    printf("Popped from Stack 2: %d\n", value);
                }
                break;
            case 5:
                display1(&stack);
                break;
            case 6:
                display2(&stack);
                break;
            case 7:
                exit(0);
            default:
                printf("Invalid choice\n");
        }
    }
    return 0;
}