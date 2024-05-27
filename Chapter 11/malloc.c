#include <stdio.h>
#include <stdlib.h>

int main(){
    int *pointer;
    pointer =(int*) malloc(6*sizeof(int));
    for(int i = 0; i <6; i++){
        printf("Enter the %d element\n",i+1);
        scanf("%d",&pointer[i]);
    }
    for(int i = 0; i <6; i++){
        printf("The value of %d element is : %d\n",i+1,(pointer[i]));
    }
    return 0;
}