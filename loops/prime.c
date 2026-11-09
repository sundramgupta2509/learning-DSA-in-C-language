#include<stdio.h>
int main()
{
    int i, n, count = 0;
    printf("Enter the number: ");   // which you have to check for prime
    scanf("%d", &n);

    for(i=2; i<n; i++)
    {
        if(n%i==0)
        {
            count = count + 1;
        }
    }

    if(count==0 && n>=2)
    {
        printf("PRIME");
    }
    else
    {
        printf("Not Prime");
    }

    return 0;

}