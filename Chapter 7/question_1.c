#include <stdio.h>

int main(){
    // int array[10];
    // // int *ptr = array;
    // int *ptr = &array[2];
    // // ptr = ptr +2;
    // printf("The address of ptr is %u \n",ptr);
    // printf("The address of array[2] is %u \n",&array[2]);

    int array[10];
    int *ptr = array;
    ptr = ptr + 3;

    if( ptr == &array[3]){
        printf("These point to the same address in memory. \n");
    }
    else {
        printf("These do not point to the same address in memory.\n");
    }

    return 0;
}