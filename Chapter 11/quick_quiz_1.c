#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    int *pointer;
    printf("How many integer do you want to enter? \n");
    scanf("%d",&n);
    fflush(stdin);
    pointer=(int*)calloc(5,sizeof(int));
    for(int i = 0; i < n; i++){
        printf("Enter the value of %d integer.\n",i+1);
        scanf("%d",&pointer[i]);
    }
    for(int i = 0; i < n; i++){
        printf("The %d integer value is: %d\n",i+1, pointer[i]);
    }

    return 0;
}