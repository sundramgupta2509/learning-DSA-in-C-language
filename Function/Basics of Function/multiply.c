#include<stdio.h>

int multiply(int a, int b);

int main()
{
    int a,b;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);

    int m = multiply(a,b);    // yahi execute hota hai
    printf("multiply is %d ", m);   // function calling

}

// Function defination
int multiply(int x, int y){
    return x*y;
}