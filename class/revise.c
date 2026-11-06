#include<stdio.h>
int main()
{
    int marks;
    printf("Enter the marks: ");
    scanf("%d", &marks);

    marks <= 30 ? printf("Fail") : printf("Pass");
}