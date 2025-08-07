#include <stdio.h>
struct Sstudent
{
    char name[50];
    int roll_no;
    float marks;
};
void students_input(struct Sstudent *students);
void students_display(struct Sstudent *students);
struct Sstudent students[10];

int main()
{
    students_input(students);
    students_display(students);

    return 0;
}

void students_input(struct Sstudent *students)
{
    for (int i = 0; i < 10; i++)
    {
        printf("\nFor Roll Number %d:\n", i + 1);
        printf("Enter Name: ");
        scanf("%s", students[i].name);
        printf("Enter Marks: ");
        scanf("%f", &students[i].marks);
        students[i].roll_no = i + 1;
    }
}

void students_display(struct Sstudent *students)
{
    printf("\nDisplaying Information of Students:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("\nRoll Number: %d\n", students[i].roll_no);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
    }
}