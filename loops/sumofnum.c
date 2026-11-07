// Sum of n numbers

#include<stdio.h>
int main()
{
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    int sum = 0;

    for(int i = 0; i <= n; i++)
    {
        sum = sum + i;
    }
     
    printf("Sum of n numbers is: %d\n", sum);

    
    for(int i = n; i > 0; i--)
    {
        printf("%d\n",i);
    }
    
}