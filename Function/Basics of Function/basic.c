#include<stdio.h>

void PRINT_HELLO();   // Declaration/Prototype

int main()
{
    PRINT_HELLO();      // Function calling
    PRINT_HELLO();
    PRINT_HELLO();
    PRINT_HELLO();
}

void PRINT_HELLO()
{
    printf("hello!\n");   // Function defination
}