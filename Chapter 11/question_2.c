#include <stdio.h>
#include <stdlib.h>

int main(){
     int *pointer;
     pointer =(int*)malloc(6*sizeof(int));
     for(int i = 0; i < 6; i++){
         printf("Enter the %d value of element. \n",i+1);
         scanf("%d",&pointer[i]);
     }
     for(int i = 0; i < 6; i++){
         printf("The %d element value is: %d\n",i+1,pointer[i]);
     }
    return 0;
}