// percenrage of thrre subject marks....hin,eng,math

#include<stdio.h>

float percen(float Tmarks);
int main()
{
    int hin = 82, eng = 73, math = 85;
    float Tmarks = hin + eng + math;
    printf("Percentage is %f", percen(Tmarks));   // basically here we calling function
}

float percen(float Tmarks){
    return (Tmarks)/3;
}

