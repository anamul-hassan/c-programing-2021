#include <stdio.h>

int main(){
    FILE *pointer;
    int number, index = 0;
    pointer =fopen("multiplication_number_input.txt","r");
    fscanf(pointer, "%d",&number);
    printf("The multiplication Number is : %d\n",number);

    for(int i = 0; i < 10; i++){
        printf("%d X %d = %d\n",number, i+1, number*(i+1));
    }
    return 0;
}