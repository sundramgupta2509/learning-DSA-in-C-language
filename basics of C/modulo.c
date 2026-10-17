# include<stdio.h>
int main()
{   // even-> 0
    // odd-> 1
    
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);

    printf("%d", num % 2 == 0);
}