#include <stdio.h>
#include <stdlib.h>

int main(){
    int *pointer;
    pointer =(int*)malloc(5*sizeof(int));
    for(int i = 0; i < 5; i++){
        printf("Enter the value of %d element. \n",i+1);
        scanf("%d",&pointer[i]);
    }
    for(int i = 0; i < 5; i++){
        printf("The value of %d element is: %d\n",i+1, pointer[i]);
    }
    pointer =realloc(pointer,10*sizeof(int));

    for(int i = 0; i < 10; i++){
        printf("Enter the value of %d element. \n");
        scanf("%d",&pointer[i]);
    }
    for(int i = 0; i < 10; i++){
        printf("The value of %d element is: %d\n",i+1,pointer[i]);
    }
    return 0;
}