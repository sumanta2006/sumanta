/* write a Polynomial addition program using single linked list */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
struct poly 
{
    float coeff;
    int exp;
    struct poly* next;
};
struct poly *start = NULL;
void insert(int coeff, int power)
{
    struct poly* newNode = (struct poly*)malloc(sizeof(struct poly));
    newNode->coeff = coeff;
    newNode->exp = power;
    newNode->next = NULL;

    if (start == NULL) 
    {
        start = newNode;
    }
    else 
    {
        struct poly* temp = start;
        struct poly* prev = NULL;

        while (temp != NULL && temp->exp > power) 
        {
            prev = temp;
            temp = temp->next;
        }

        if (prev == NULL) 
        {
            newNode->next = start;
            start = newNode;
        } 
        else if (temp == NULL) 
        {
            prev->next = newNode;
        } 
        else 
        {
            newNode->next = temp;
            prev->next = newNode;
        }
    }
}
int main() 
{
    float coeff;
    int power, n, i,x;
    printf("Enter the number of terms in the polynomial: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) 
    {
        printf("Enter coefficient and exponent for term %d: ", i + 1);
        scanf("%f, %d", &coeff, &power);
        insert(coeff, power);
    }

    printf("The polynomial is: ");
    struct poly* temp = start;
    while (temp != NULL) 
    {
        printf("%.0fx^%d", temp->coeff, temp->exp);
        temp = temp->next;
        if (temp != NULL) 
        {
            printf(" + ");
        }
    }
    printf("\n");
    
    printf("Enter a value for x to evaluate the polynomial: ");
    scanf("%d", &x);
    float result = 0;
    temp = start;
    while (temp != NULL) 
    {
        result += temp->coeff * pow(x, temp->exp);
        temp = temp->next;
    }
    printf("The result of the polynomial evaluation at x = %d is: %.0f\n", x, result);
    return 0;
}
