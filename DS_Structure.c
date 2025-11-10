/* write a c program to implement of the structure */
#include <stdio.h>
#include <string.h>

struct Student 
{
    int roll_no;
    float marks;
};

int main()
{
    struct Student s1,s2;
    int r;
    float m;
    // Input student details
    printf("Enter the value of roll: ");
    scanf("%d", &r);
    s1.roll_no = r;
    printf("Enter the value of marks: ");
    scanf("%f", &m);
    s1.marks = m;
    printf("Enter the roll & marks for another student: ");
    scanf("%d, %f", &s2.roll_no, &s2.marks);

    // Display student details
    printf("Roll Number: %d\n", s1.roll_no);
    printf("Marks: %.2f\n", s1.marks);
    printf("Roll Number: %d\n", s2.roll_no);
    printf("Marks: %.2f\n", s2.marks);

    return 0;
}
