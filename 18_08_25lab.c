#include <stdio.h>
struct student
{
    int roll;
    int marks;
    int attendance;
};
int main()
{
    struct student s1,s2,s3;
    printf("Enter roll number, marks and attendance for student 1: ");
    scanf("%d %d %d", &s1.roll, &s1.marks, &s1.attendance);
    printf("Enter roll number, marks and attendance for student 2: ");
    scanf("%d %d %d", &s2.roll, &s2.marks, &s2.attendance);
    printf("\nStudent 1:\n");
    printf("Roll Number: %d\n", s1.roll);
    printf("Marks: %d\n", s1.marks);
    printf("Attendance: %d\n", s1.attendance);
    printf("\nStudent 2:\n");
    printf("Roll Number: %d\n", s2.roll);
    printf("Marks: %d\n", s2.marks);
    printf("Attendance: %d\n", s2.attendance);
    if(s1.marks > s2.marks)
    {
        printf("\nStudent 1 has higher marks percentage than Student 2.\n");
    }
    else
    {
        printf("\nStudent 2 has higher marks percentage than Student 1.\n");
    }
    if(s1.attendance > s2.attendance)
    {
        printf("Student 1 has higher attendance percentage than Student 2.\n");
    }
    else
    {
        printf("Student 2 has higher attendance percentage than Student 1.\n");
    }
    struct student *ptr = &s3;
    printf("\nEnter roll number, marks and attendance for student 3: ");
    scanf("%d %d %d", &ptr->roll, &ptr->marks, &ptr->attendance);
    printf("\n3rd Student information\n");
    printf("Roll Number: %d\n", ptr->roll);
    printf("Marks: %d\n", ptr->marks);
    printf("Attendance: %d\n", ptr->attendance);
    return 0;
}