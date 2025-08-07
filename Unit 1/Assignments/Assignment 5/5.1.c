#include <stdio.h>
#include <string.h>
struct Sstudent
{
    char name[50];
    int roll_no;
    float marks;
};

int main()
{
    struct Sstudent student1;
    printf("Enter Information of student:\n");
    printf("Enter Name: ");
    scanf("%s", student1.name);
    printf("Enter Roll Number: ");
    scanf("%d", &student1.roll_no);
    printf("Enter Marks: ");
    scanf("%f", &student1.marks);

    printf("\nDisplaying Information:\n");
    printf("Name: %s\n", student1.name);
    printf("Roll Number: %d\n", student1.roll_no);
    printf("Marks: %.2f\n", student1.marks);
    return 0;
}