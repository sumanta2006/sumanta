/* sum and average of two numbers by using user input */
/*#include <stdio.h>
int main()
{
    int a,b,sum,avg;
    printf("\n Enter the value of a and b: ");
    scanf("\n %d,%d",&a,&b);
    sum=a+b;
    avg=sum/2;
    printf("\n sum of numbers is: %d",sum);
    printf("\n avg is: %d",avg);
    return 0;
}*/


/* Biggest of three number using conditional operator.*/
/*#include <stdio.h>
int main()
{
    int a,b,c,big;
    printf("\n Enter the three numbers a,b,c: ");
    scanf("\n %d,%d,%d",&a,&b,&c);
    big=a>b?(a>c?a:c):(b>c?b:c);
    printf("\n the big number is: %d",big);
    return 0;
}*/

/* Area and perimeter of a triangle of a circle .*/

/*#include <stdio.h>
#include <math.h>
int main()
{
    int r,a,b,c,at,pt,ac,pc,s;
    float pi=3.14;
    printf("\n Enter the redious of circle: ");
    scanf("\n %d",&r);
    printf("\n Enter three side  of triangle: ");
    scanf("\n %d,%d,%d",&a,&b,&c);
    ac=pi*r*r;
    pc= 2*pi*r;
    printf("\n The area of circle is: %d",ac);
    printf("\n The perimeter of circle is: %d",pc);
    s=(a+b+c)/2;
    at=sqrt(s*(s-a)*(s-b)*(s-c));
    pt=a+b+c;
    printf("\n The area of triangle is: %d",at);
    printf("\n The perimeter of triangle is: %d",pt);
    return 0;
}
*/

/* chekck wheather a word is vowel or consonent.*/
/*#include <stdio.h>
int main()
{
    char ph;
    printf("\n Enter the a character: ");
    scanf("\n %c",&ph);
    switch(ph)
    {
        case 'a':
        printf("\n It is a vowel");
        break;
        case 'e':
        printf("\n It is a vowel");
        break;
        case 'i':
        printf("\n It is a vowel");
        break;
        case 'o':
        printf("\n It is a vowel");
        break;
        case 'u':
        printf("\n It is a vowel");
        break;
        default:
        printf("\n its a consonent");

    }

    return 0;
} */

/* Goes the internal marks  */

/*#include <stdio.h>
int main()
{
    int marks1,marks2,sum,avg;
    printf("\n Enter the Two marks of internal: ");
    scanf("%d,%d",& marks1,& marks2);
    if(((marks1>10&&marks2>10))||((marks1<10&&marks2)))
    {
        if(marks1>marks2)
        printf("\n The highest mark is: %d",marks1);
        else
        printf("\n The highest mark is: %d",marks2);
    }
    else 
    {
        sum=marks1+marks2;
        avg=sum/2;
        printf("\n The average of the two internal marks is :  %d",avg);
    }
   
    return 0;
}*/

