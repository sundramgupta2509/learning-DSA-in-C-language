// convert celcius into farhenheit

#include<stdio.h>

float convertTemp(float celcius);
int main()
{
    float celcius;
    printf("Enter temp in celcius :");
    scanf("%f", &celcius);

    float far = convertTemp(celcius);
    printf("Temperature in farenheit is %f\n", far);
}

float convertTemp(float celcius){
    float far = celcius * (9.0/5.0) + 32;
    return far;
}