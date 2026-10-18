# include<stdio.h>
int main(){
    int age;
    printf("Enter the age: ");
    scanf("%d", &age);

    if(age>18){ 
        printf("adult\n");
        printf("can vote and drive\n");
    }
    else{
        printf("not adult\n");
        printf("cannot vote and drive\n");
    }
    
  printf("THANK YOU");

  

}