/* Write a C program to define a structure student with the data members to store name,
roll no and grade of the student. Also write the member functions to read, display, and
sort student information according to the roll number of the student. All the member
functions will have array of objects as arguments.  */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student
{
    char name[30];
    int roll_no;
    float grade;
};

void Read () {
    int n;
    printf("\n>> Enter number of students: ");
    scanf("%d",&n);

    printf("\n> Enter student details of %d students:", n);

    for (int i = 0; i < 5; i++)
    {
        printf("\n\n++ Student %d details -\n\n", i + 1);

        printf("> Name: ");
        scanf("%s", student[i].name);

        printf("> Roll Number: ");
        scanf("%d", &student[i].roll_no);

        printf("> Grade: ");
        scanf("%f", &student[i].grade);
    }
}

int main()
{
    int n=5;
    struct Student student[n];
    printf("\n\n>> Enter student details of 3 students:");

    for (int i = 0; i < 5; i++)
    {
        printf("\n\n>> Student %d details -\n\n", i + 1);

        printf("> Name: ");
        scanf("%s", student[i].name);

        printf("> Roll Number: ");
        scanf("%d", &student[i].roll_no);

        printf("> Grade: ");
        scanf("%f", &student[i].grade);
    }



    printf("\n\n-- Entered Student Details ordered by their roll numbers are:");

    for (int i = 0; i < 5; i++)
    {
        printf("\n\n>> Student %d details:\n", i + 1);
        printf("\n> Roll Number:  %d", student[i].roll_no);
        printf("\n> Name:  %s", student[i].name);
        printf("\n> Grade:  %f", student[i].grade);
    }

    printf("\n\n");
    return 0;
}
