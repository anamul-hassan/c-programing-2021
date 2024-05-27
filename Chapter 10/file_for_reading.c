#include <stdio.h>
int main(){
    FILE *ptr;
    int number;
    int number2;
    int number3;
    ptr =fopen("integer.txt","r");
    fscanf(ptr,"%d",&number);
    fscanf(ptr,"%d",&number2);
    fscanf(ptr,"%d",&number3);
    fclose(ptr);
    printf("The value of number is %d\n", number);
    printf("The value of number2 is %d\n", number2);
    printf("The value of number3 is %d\n", number3);
    return 0;
}