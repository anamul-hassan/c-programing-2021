// There are two major differences between malloc and calloc in C programming 
// language: 
// first, in the number of arguments. The malloc() takes a single 
// argument, while calloc() takes two. 
// Second, malloc() does not initialize 
// the memory allocated, while calloc() initializes the allocated memory to ZERO.
#include <stdio.h>
#include <stdlib.h>
int main(){
    float *pointer;
    pointer = (float*)calloc(5, sizeof(float));
    for(int i = 0; i < 5; i++){
        printf("Enter the %d element of the Dinamic Memory. \n",i+1);
        scanf("%f",&pointer[i]);
    }
    for(int i = 0; i < 5; i++){
        printf("The value of %d element of the Dinamic Memory is:%.3f\n",i+1, pointer[i]);
    }
    return 0;
}