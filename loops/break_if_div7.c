#include<stdio.h>
int main()
{
    
    
    do{
        int n;
        printf("Enter the number: ");
        scanf("%d", &n);
        printf("%d\n", n);

        if(n%7==0){
            printf("loop end!");
            break;
        }

    }while(1);

}