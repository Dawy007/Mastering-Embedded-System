#include <stdio.h>
struct employee
{
    char name[50];
    int id;
};
struct employee emp1 = {"Alex", 1002};
int main()
{
    struct employee *ptr;
    ptr = &emp1;
    printf("Employee Name: %s\n", ptr->name);
    printf("Employee ID: %d\n", ptr->id);
    return 0;
}