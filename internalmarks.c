/* write a c Program to check whether going the highest number of the two internal marks */
#include <stdio.h>
int main()
{
    int mark1, mark2 ,sum,avg;
    printf("Enter two internal marks: ");
    scanf("%d,%d", &mark1, &mark2);
   if((mark1>10 && mark2>10)||(mark1<10 && mark2<10))
   {
      if(mark1>mark2)
      {
          printf("The highest mark is: %d\n", mark1);
      }
      else 
      {
          printf("The highest mark is: %d\n", mark2);
      }
     
    }
    else
    {
        sum = mark1 + mark2;
        avg = sum / 2;
        printf("The average of the two marks is: %d\n", avg);
    }
    return 0;
}