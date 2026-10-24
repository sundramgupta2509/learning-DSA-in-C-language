// print number from 0 to n, n is input from user

#include<stdio.h>
int main()
{
    int n;
    printf("input number 'n':");
    scanf("%d", &n);

    int i = 0 ;
    while(i <= n){
        printf("%d\n", i);
        i++;
    }
}