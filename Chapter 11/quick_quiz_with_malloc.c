#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    int *pointer;
    printf("How many integer do you want to enter. \n");
    scanf("%d",&n);
    pointer =(int*)malloc(5*sizeof(int));
    for(int i = 0; i < n; i++){
        printf("Enter the %d value of the element of Dinamic Array.\n",i+1);
        scanf("%d",&pointer[i]);
    }
    for(int i = 0; i < n; i++){
        printf("The %d value of the element of Dinamic Array is: %d\n",i+1,pointer[i]);
    }


    return 0;
}