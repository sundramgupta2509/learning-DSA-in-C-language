// WAP to print prime number in a range.

#include<stdio.h>
int main()
{
    int a, b, n, i, count;  // n is any number in range to be check
    printf("Enter range: ");
    scanf("%d%d", &a , &b);

    for(n=a; n<=b; n++) 
    {
        count = 0;
        for(i=2; i<n; i++)
        {
            if(n%i==0)
            count++;

        }
        if(n>=2 && count==0)
            printf("%d ", n);
    

    }
   
}