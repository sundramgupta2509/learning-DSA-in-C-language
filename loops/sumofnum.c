// Sum of n numbers

#include<stdio.h>
int main()
{
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    int sum = 0;

    for(int i = 0, j = n; i <= n && j >= 1; i++ , j--)
    {
        sum = sum + i;
        printf("%d\n" , j);
    }
     
    printf("Sum of n numbers is: %d\n", sum);
    
}