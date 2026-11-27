#include<stdio.h>
int main(){
    int x;
    int *ptr;

    ptr = &x;
    *ptr = 0;

    printf("%d\n", x);
    printf("%d\n", *ptr);

    *ptr += 5;
    printf("%d\n", *ptr);
    printf("%d\n", x);

    x++;
    printf("%d\n", x);
    printf("%d\n", *ptr);
}