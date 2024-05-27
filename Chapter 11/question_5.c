#include <stdio.h>
#include <stdlib.h>

int main(){
    int *pointer;
    int number;
    pointer =(int*)malloc(10*sizeof(int));
    printf("Enter the multiplication table number.\n");
    scanf("%d",&number);
    printf("The multiplication table number is: %d\n",number);
    for(int i = 0; i < 10; i++){
        printf("%d X %d = %d\n",number, i+1,number*(i+1));
    }
    pointer =realloc(pointer,15*sizeof(int));
    printf("The multiplication table number is: %d\n",number);
    for(int i = 0; i < 15; i++){
        printf("%d X %d = %d\n",number,i+1,number*(i+1));
    }
return 0;
}