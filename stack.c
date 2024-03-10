// Demonstrate the behavior of the stack: growing up or growing down.

#include <stdio.h>

void f(int*);

int main()
{
    int x = 1;
    f(&x);
}

void f(int *x)
{
    int y = 1;
    
    printf("address of x: %p\n", x);
    printf("address of y: %p\n", &y);

    if (x > &y) {
        printf("The stack grows downward.\n");
    } else {
        printf("The stack grows upward.\n");
    }
}
