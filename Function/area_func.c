#include<stdio.h>

float squareArea(float a);
float circleArea(float r);
float rectArea(float l, float b);

int main()
{
    float a = 4, r = 7, l = 2.5, b = 10;
    printf("Area of rectangle is %f\n", rectArea(l, b));
    printf("Area of square is %f\n", squareArea(a));
    return 0;
}
//float a = 4, r = 7, l = 2.5, b = 10;

float squareArea(float a){
    return a*a;
}

float circleArea(float r){
    return 3.14*r*r;
    
}

float rectArea(float l, float b){
    return l*b;
    
}