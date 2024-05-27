#include <stdio.h>

int main(){
    int array[10];
    int num;
    printf("Enter the multiplication number. \n");
    scanf("%d",&num);

    for(int i = 0; i < 10; i++){
        array[i] = num*(i+1);
        printf(" %d X %d = %d \n",num, i+1, array[i]);
    }

    return 0;
}