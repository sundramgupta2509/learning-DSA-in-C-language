# include<stdio.h>
int main()
{
    float marks;
    printf("enter marks: ");
    scanf("%f", &marks);

    if(marks<30 && marks>=23)
    {
        printf("grade D");
    }
    else if(marks>=30 && marks<60)
    {
        printf("grade C");
    }

    else if(marks>=60 && marks<90)
    {
        printf("grade B");
    }

    else if(marks>=90 && marks<=100)
    {
        printf("grade A");
    }
    else if(marks>100)
    {
        printf("invalid marks!");
    }    

    else
        printf("FAIL");


}