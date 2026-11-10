// calculate price after adding 18% GST

#include<stdio.h>

void totalprice(float price);

int main(){
    float price = 900.0; 
    totalprice(price);

}

void totalprice(float price){
    price = price +( 0.18 * price);

    printf("Final price is %f ", price);

}