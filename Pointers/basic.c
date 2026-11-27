#include<stdio.h>
int main()
{
    int age = 19;
    int *ptr = &age;

    // int AGE = *ptr;

    printf("%d\n", *ptr);   
    printf("%p\n", ptr);  
    printf("%p\n", &age); // it will print **address of age** = 19
    printf("%p\n", &ptr);

}
