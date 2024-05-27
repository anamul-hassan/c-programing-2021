#include <stdio.h>

int main(){
    FILE *ptr;
    int number;
    ptr =fopen("integer.txt","r");
    if(ptr == NULL){
        printf("This file does not exist. \n");
    }
    else{
    fscanf(ptr, "%d", &number);
    printf("The value of number is %d", number);
    }
    return 0;
}