/* write a c Program to check whether a year is a leap year or not using loop */
#include <stdio.h>
int main()
{
    int item;
    printf("Enter a year: ");
    scanf("%d", &item);
    if (item % 4 == 0)
    {
        if (item % 100 == 0)
        {
            if (item % 400 == 0)
            {
                printf("%d is a leap year.\n", item);
            }
            else
            {
                printf("%d is not a leap year.\n", item);
            }
        }
        else
        {

            printf("%d is a leap year.\n", item);
        }
    }
    else
    {
        printf("%d is not a leap year.\n", item);
    }
    return 0;
   
}
