/* write a programme to store the following information of a student using structure: roll no. of student ,%of marks,% of attendence */

#include <stdio.h>

struct Student {
    int roll_no;
    float marks;
    float attendance;
};

int main() {
    struct Student s1,s2,s3;
    int r ; float m; float att;
   
    printf("Enter roll no: ");
    scanf("%d", &r);
    s1.roll_no = r;
    printf("Enter percentage of marks: ");
    scanf("%f", &m);
    s1.marks = m;
    printf("Enter percentage of attendance: ");
    scanf("%f", &att);
    s1.attendance = att;
    printf("Roll No: %d\n", s1.roll_no);
    printf("Percentage of Marks: %.2f\n", s1.marks);
    printf("Percentage of Attendance: %.2f\n", s1.attendance);

    printf("\nEnter details for second student:\n");

    printf("Enter roll no: ");
    scanf("%d,", &r);
    s2.roll_no = r;
    printf("Enter percentage of marks: ");
    scanf("%f,", &m);
    s2.marks = m;
    printf("Enter percentage of attendance: ");
    scanf("%f,", &att);
    s2.attendance = att;
    printf("Roll No: %d , marks: %.2f, attendance: %.2f\n", s2.roll_no, s2.marks, s2.attendance);
   if (s2.marks > s1.marks && s2.attendance > s1.attendance)// separte each other in if - else statement
      {
       printf("Second student has better performance.\n");
      }
      else if (s2.marks >= s1.marks && s2.attendance <= s1.attendance)
      {
       printf("Both students have equal performance.\n");
      }
      else
      {
       printf("First student has better performance.\n");
      }


    return 0;
}
