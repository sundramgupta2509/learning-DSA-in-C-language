#include <stdio.h>

int main() {
    int numbers[3]; 
    int i;

    printf("Enter 3 integers:\n");
    for(i = 0; i < 3; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &numbers[i]); 
    }

    printf("\nYou entered:\n");
    for(i = 0; i < 3; i++) {
        printf("Element %d = %d\n", i + 1, numbers[i]);
    }

}