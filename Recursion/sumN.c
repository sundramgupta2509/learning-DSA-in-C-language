#include<stdio.h>

int sum(int n);  // Sum of natural num till 'n'.

int main(){

    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("sum is %d", sum(n));
    
    return 0;
}

int sum(int n){         // logic: sum till n = "sum" = sum till(n-1) + n

    if(n==1){
        return 1;
    }

    int sumNm1 = sum(n-1);
    int sum = sumNm1 + n;
    return sum;
}