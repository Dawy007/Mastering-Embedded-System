#include <stdio.h>

int main()
{
    int m = 29;
    int *ptr;
    printf("Addres of m: %x\n", &m);
    printf("Value of m: %d\n\n", m);
    ptr = &m;
    printf("Adress of Pointer ab: %x\n", ptr);
    printf("Content of Pointer ab: %d\n\n", *ptr);
    m = 34;
    printf("Adress of Pointer ab: %x\n", ptr);
    printf("Content of Pointer ab: %d\n\n", *ptr);
    *ptr = 7;
    printf("Adress of Pointer ab: %x\n", ptr);
    printf("Content of Pointer ab: %d\n\n", *ptr);
    return 0;
}