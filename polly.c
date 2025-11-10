#include <stdio.h>
#include <stdlib.h>

struct Node 
{
    float coeff;
    int exp;
    struct Node* next;
};

// Function to insert a term in descending order
void insert(struct Node** start, float coeff, int exp) 
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->coeff = coeff;
    newNode->exp = exp;
    newNode->next = NULL;

    if (*start == NULL || (*start)->exp < exp) 
    {
        newNode->next = *start;
        *start = newNode;
    } else 
    {
        struct Node* temp = *start;
        while (temp->next != NULL && temp->next->exp > exp)
            temp = temp->next;

        if (temp->next != NULL && temp->next->exp == exp) 
        {
            temp->next->coeff += coeff;  // combine same exponent terms
        } else 
        {
            newNode->next = temp->next;
            temp->next = newNode;
        }
    }
}

// Function to display a polynomial
void display(struct Node* start) 
{
    struct Node* temp = start;
    while (temp != NULL) 
    {
        printf("%.0fx^%d", temp->coeff, temp->exp);
        temp = temp->next;
        if (temp != NULL)
            printf(" + ");
    }
    printf("\n");
}

// Function to add two polynomials
struct Node* addPoly(struct Node* p1, struct Node* p2) 
{
    struct Node* result = NULL;

    while (p1 != NULL && p2 != NULL) 
    {
        if (p1->exp > p2->exp) 
        {
            insert(&result, p1->coeff, p1->exp);
            p1 = p1->next;
        } else if (p1->exp < p2->exp) 
        {
            insert(&result, p2->coeff, p2->exp);
            p2 = p2->next;
        } else 
        {
            float sum = p1->coeff + p2->coeff;
            if (sum != 0)
                insert(&result, sum, p1->exp);
            p1 = p1->next;
            p2 = p2->next;
        }
    }

    while (p1 != NULL) 
    {
        insert(&result, p1->coeff, p1->exp);
        p1 = p1->next;
    }

    while (p2 != NULL) 
    {
        insert(&result, p2->coeff, p2->exp);
        p2 = p2->next;
    }

    return result;
}

int main() {
    struct Node *poly1 = NULL, *poly2 = NULL, *result = NULL;
    int n1, n2, i;
    float coeff;
    int exp;

    printf("Enter number of terms in 1st polynomial: ");
    scanf("%d", &n1);
    for (i = 0; i < n1; i++) 
    {
        printf("Enter coefficient and exponent for term %d: ", i + 1);
        scanf("%f %d", &coeff, &exp);
        insert(&poly1, coeff, exp);
    }

    printf("1st Polynomial: ");
    display(poly1);

    printf("\nEnter number of terms in 2nd polynomial: ");
    scanf("%d", &n2);
    for (i = 0; i < n2; i++) 
    {
        printf("Enter coefficient and exponent for term %d: ", i + 1);
        scanf("%f %d", &coeff, &exp);
        insert(&poly2, coeff, exp);
    }

    printf("2nd Polynomial: ");
    display(poly2);

    result = addPoly(poly1, poly2);

    printf("\nResultant Polynomial after addition: ");
    display(result);

    return 0;
}