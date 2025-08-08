#include <stdio.h>

void begin(void);
void finish(void);

void __attribute__((constructor)) begin();
void __attribute__((destructor)) finish();

void begin(void)
{
    printf("Hello, this runs without main!\n");
}

void finish(void)
{
    printf("Goodbye, program ended.\n");
}
