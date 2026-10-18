# include<stdio.h>
int main()
{
    char character = '*';
    printf("%c\n", character);

    int issunday = 1;
    int isholiday = 1;
    printf("%d\n", issunday && isholiday );

    int is_sunday = 0;
    int is_holiday = 1;
    printf("%d\n", is_sunday && is_holiday );

    int ismonday = 1;
    int israiny = 1;
    printf("%d\n", ismonday || israiny );

    int is_monday = 1;
    int is_rainy = 1;
    printf("%d\n", is_monday || is_rainy );

    int a = 6;

    printf("%d\n", a>9 && a<100);
    
    return 0;
}