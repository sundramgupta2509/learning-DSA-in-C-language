// sum of two numbers using function

#include<stdio.h>

int sum(int a , int b);

int main()
{
    int a, b;
    printf("Enter a: ");
    scanf("%d",&a);
    printf("Enter b: ");
    scanf("%d",&b);

    int s = sum(a , b);
    printf("Sum is %d ", s);

}

int sum(int x , int y)
{
    return x+y;
}