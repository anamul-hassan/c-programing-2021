#include <stdio.h>

int main(){
//     FILE *pointer;
//     int number1;
//     int number2;
//     int number3;
//     pointer =fopen("integer.txt", "r");
//    fscanf(pointer, "%d", &number1);
//    fscanf(pointer, "%d", &number2);
//    fscanf(pointer, "%d", &number3);
//    printf("The value of first number is %d\n",number1);
//    printf("The value of second number is %d\n",number2);
//    printf("The value of third number is %d\n",number3);
// Alternative Way to solve this problem
    FILE *pointer;
    pointer =fopen("integer.txt", "r");
    int number1, number2, number3;
    fscanf(pointer,"%d %d %d",&number1, &number2, &number3);
    printf("The value of newTextfile.txt are : %d , %d, %d \n",number1,number2,number3);
    return 0;
}