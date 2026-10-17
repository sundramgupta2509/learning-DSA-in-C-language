# include<stdio.h>

int main() {
    float l,b,r;   // where l & b are sides of a rectangle and r is the radius of circle.
    
    printf(" enter lenght of rectangle: ");
    scanf("%f", & l);

    printf(" enter breadth of rectangle: ");
    scanf("%f", & b);

    printf(" enter radius of circle: ");
    scanf("%f", & r);

    printf("Area of rectangle is %f\n", l*b);
    printf("Area of circle is %f", 3.14*r*r);
}