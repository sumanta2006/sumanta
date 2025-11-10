/* Two polynomial operations: addition by user input. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
struct poly1 
{
    float coeff1;
    int exp1;
    struct poly1* next1;
};
struct poly1 *start1 = NULL;
void insert (int coeff1, int power1)
{
    struct poly1* newNode1 = (struct poly1*)malloc(sizeof(struct poly1)); // 1st pollynomial node allocation.
    newNode1->coeff1 = coeff1;
    newNode1->exp1 = power1;
    newNode1->next1 = NULL;

    if (start1 == NULL) 
    {
        start1 = newNode1;
    }
    else 
    {
        struct poly1* temp1 = start1;
        struct poly1* prev1 = NULL;

        while (temp1 != NULL && temp1->exp1 > power1) // Insertion in descending order of exponents.
        {
            prev1 = temp1;
            temp1 = temp1->next1;
        }

        if (prev1 == NULL) 
        {
            newNode1->next1 = start1;
            start1 = newNode1;
        } 
        else if (temp1 == NULL) 
        {
            prev1->next1 = newNode1;
        } 
        else 
        {
            newNode1->next1 = temp1;
            prev1->next1 = newNode1;
        }
    }
}

struct poly2 
{
    float coeff2;
    int exp2;
    struct poly2* next2;
};

struct poly2 *start2 = NULL;
void insert2(int coeff2, int power2)
{
    struct poly2* newNode2 = (struct poly2*)malloc(sizeof(struct poly2)); // 2nd polynomial node allocation.
    newNode2->coeff2 = coeff2;
    newNode2->exp2 = power2;
    newNode2->next2 = NULL;

    if (start2 == NULL) 
    {
        start2 = newNode2;
    }
    else 
    {
        struct poly2* temp2 = start2;
        struct poly2* prev2 = NULL;

        while (temp2 != NULL && temp2->exp2 > power2) // Insertion in descending order of exponents.
        {
            prev2 = temp2;
            temp2 = temp2->next2;
        }

        if (prev2 == NULL) 
        {
            newNode2->next2 = start2;
            start2 = newNode2;
        } 
        else if (temp2 == NULL) 
        {
            prev2->next2 = newNode2;
        } 
        else 
        {
            newNode2->next2 = temp2;
            prev2->next2 = newNode2;
        }
    }
}
int main() 
{
    float coeff1;
    int power1, n1, i,x;
    printf("Enter the number of terms in the 1st polynomial: "); // Input for 1st polynomial.
    scanf("%d", &n1);

    for (i = 0; i < n1; i++) 
    {
        printf("Enter coefficient and exponent for term %d: ", i + 1); // Input for 1st polynomial.
        scanf("%f  %d", &coeff1, &power1);
        insert(coeff1, power1);
    }

    printf("The polynomial is: "); // Display 1st polynomial.
    struct poly1* temp1 = start1;
    while (temp1 != NULL) 
    {
        printf("%.0fx^%d", temp1->coeff1, temp1->exp1);
        temp1 = temp1->next1;
        if (temp1 != NULL) 
        {
            printf(" + ");
        }
    }
    printf("\n");

    float coeff2;
    int power2, n2, i2,x2;
    printf("Enter the number of terms in the 2nd polynomial: "); // Input for 2nd polynomial.
    scanf("%d", &n2);

    for (i2 = 0; i2 < n2; i2++) 
    {
        printf("Enter coefficient and exponent for term %d: ", i2 + 1); // Input for 2nd polynomial.
        scanf("%f  %d", &coeff2, &power2);
        insert2(coeff2, power2);
    }

    printf("The polynomial is: "); // Display 2nd polynomial.
    struct poly2* temp2 = start2;
    while (temp2 != NULL) 
    {
        printf("%.0fx^%d", temp2->coeff2, temp2->exp2);
        temp2 = temp2->next2;
        if (temp2 != NULL) 
        {
            printf(" + ");
        }
    }
    printf("\n");
    // Addition of two polynomials.
    temp1 = start1;
    temp2 = start2;
    struct poly1* result = NULL; // Resultant polynomial initialization.

    while (temp1 != NULL && temp2 != NULL) 
    {
        if (temp1->exp1 > temp2->exp2) 
        {
            insert(temp1->coeff1, temp1->exp1); // Insert term from 1st polynomial.
            temp1 = temp1->next1;
        } 
        else if (temp1->exp1 < temp2->exp2) 
        {
            insert(temp2->coeff2, temp2->exp2); // Insert term from 2nd polynomial.
            temp2 = temp2->next2;
        } 
        else 
        {
            float sumCoeff = temp1->coeff1 + temp2->coeff2; // Same exponent addition.
            if (sumCoeff != 0) 
            {
                insert(sumCoeff, temp1->exp1);
            }
            temp1 = temp1->next1;
            temp2 = temp2->next2;
        }
    }

    while (temp1 != NULL) 
    {
        insert(temp1->coeff1, temp1->exp1);
        temp1 = temp1->next1;
    }

    while (temp2 != NULL) 
    {
        insert2(temp2->coeff2, temp2->exp2);
        
        temp2 = temp2->next2;
    }

    printf("The resultant polynomial after addition is: ");
    struct poly1* tempRes = start1; // Problem here.............................................................
    while (tempRes != NULL) 
    {
        printf("%.0fx^%d", tempRes->coeff1, tempRes->exp1); // Display resultant polynomial.
        tempRes = tempRes->next1;
        if (tempRes != NULL) 
        {
            printf(" + ");
        }
    }
    printf("\n");

    return 0;
}
