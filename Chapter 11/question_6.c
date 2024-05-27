#include <stdio.h>
#include <stdlib.h>

int main(){
    int *pointer;
    pointer =(int*)calloc(5,sizeof(int));
    for(int i = 0; i < 5; i++){
        printf("Enter the value of %d element. \n",i+1);
        scanf("%d",&pointer[i]);
    }
    for(int i = 0; i < 5; i++){
        printf("The value of %d element is: %d \n",i+1,pointer[i]);
    }
    // Reallocate using realloc()
    pointer =realloc(pointer,10*sizeof(int));
    // We can use realloc dinamic array function with malloc and calloc but one 
    // confusing thing is realloc syntex. we have to use relloc syntex similar 
    // way with malloc and calloc.

    for(int i = 0; i < 10; i++){
    printf("Enter the value of %d element. \n",i+1);
        scanf("%d",&pointer[i]);
    }
    for(int i = 0; i < 10; i++){
        printf("The value of %d element is: %d \n",i+1,pointer[i]);
    }

    return 0;
}
