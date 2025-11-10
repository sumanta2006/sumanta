#include<stdio.h>
#include<stdlib.h>
#define n 5

// global declaration of variables
int array[n];
int topA=-1, topB=n;



// declaration of functions
void pushA(int item);
void pushB(int item);
int popA();
int popB();
void displayA();
void displayB();




// main function
int main()
{

    while(1)
    {
        int choice,item;
        printf(" \n 1.Push A \n 2.Push B \n 3.Pop A \n 4.Pop B \n 5.Display A \n 6.Display B \n 7.Exit \n ");
        printf(" \n Enter your choice: ");
        scanf("%d" , &choice);
        switch(choice)
        {
        case 1:
            printf("Enter element to insert in Stack A: ");
            scanf("%d", &item);
            pushA(item);
            break;

        case 2:
            printf("Enter element to insert in Stack B: ");
            scanf("%d", &item);
            pushB(item);
            break;

        case 3:
            item = popA();
            if (item != -1)
            printf("\nElement deleted successfully. Deleted element is: %d\n", item);
            break;

        case 4:
            item = popB();
            if (item != -1)
            printf("\nElement deleted successfully. Deleted element is: %d\n", item);
            break;

        case 5:
            printf("Your Stack A is:  ");
            displayA();
            break;

        case 6:
            printf("Your Stack B is:  ");
            displayB();
            break;

        case 7:
            exit(0);

        default:
            printf("Invalid choice.\n");
        }

    }
    return 0;

}


// definition of pushA function
void pushA(int  item)
{
    if((topA==-1 && topB==0) || (topA==n-1 && topB==n) || (topA+1==topB))
    {
        printf("stack A is full. \n");
    }
    else
    {
        topA=topA+1;
        array[topA]=item;
        printf("Inserted %d into Stack A. \n", item);
    }

}



// definition of pushB function
void pushB(int  item)
{
    if((topA==-1 && topB==0) || (topA==n-1 && topB==n) || (topA+1==topB))
    {
        printf("stack B is full. \n");
    }
    else
    {
        topB=topB-1;
        array[topB]=item;
    }
}




// definition of popA function
int popA()
{
    if(topA==-1)
    {
        printf("stack is empty. \n");
        return -1;
    }
    else
    {
        return array[topA--];
    }
}





// definition of popB function
int popB()
{
    if(topB==n)
    {
        printf("stack B is empty. \n");
        return -1;
    }
    else
    {
        return array[topB++];
    }
}






// definition of displayA function
void displayA()
{
    if(topA==-1)
    {
        printf("stack A is empty. \n");
    }
    else
    {
        for(int i=0; i<=topA; i++)
        {
            printf("%d " , array[i]);
        }
        printf("\n ");
    }
}






// definition of displayB function
void displayB()
{
    if(topB==n)
    {
        printf("stack B is empty. \n");
    }
    else
    {
        for(int i=(n-1); i>=topB; i--)
        {
            printf("%d " , array[i]);
        }
        printf("\n ");
    }
}
