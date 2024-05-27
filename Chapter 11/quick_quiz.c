#include <stdio.h>
#include <stdlib.h>

int main(){
    float *pointer;
    pointer =(float*)malloc(5*sizeof(float));

    // for(int i = 0; i < 5; i++){
    //     printf("Enter the value of %d element \n",i+1);
    //     scanf("%f",&pointer[i]);
    // }
    for(int i = 0; i < 5; i++){
        printf("The value of %d element is: %.2f\n",i+1,pointer[i]);
    }

    return 0;
}