#include<stdio.h>
int main()
{
    int age;
    printf("enter the age: ");
    scanf("%d", &age);

    if(age>=18)
    {printf("can vote\n");
        if(age<=80)
        printf("can drive and can vote\n");
        else
        printf("can vote but cannot drive\n");
}

    else
    printf("cannot vote and drive coz underaged\n");


}