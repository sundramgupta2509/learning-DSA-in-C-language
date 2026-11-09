// input from user if odd comes break the loop

#include<stdio.h>
int main()
{
    do{

        int n;
        printf("Enter the even number: \n");
        scanf("%d", &n);
        printf(" the numbers are %d\n", n);

        if(n%2 != 0)
        {
            printf("The inputed number is not even.\n ");
            break;
        }

    }while(1);
    printf("End\n");
    printf("Thank You!");

}