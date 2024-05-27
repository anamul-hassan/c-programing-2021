#include <stdio.h>
struct students{
    char name[20];
    int code;
    float number;
};

int main(){
    struct students num1;
    struct students *pointer;
    pointer = &num1;
    // num1.code = 444;
    (*pointer).code = 445;
    // pointer->code = 555;
    printf("The code of student is %d \n",num1.code);
   return 0; 
}