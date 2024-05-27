#include <stdio.h>

int main(){
    FILE *pointer;
    pointer =fopen("newFile.txt","r");
    // char c =fgetc(pointer);
    printf("The value of sample.txt is %c \n",fgetc(pointer));
    printf("The value of sample.txt is %c \n",fgetc(pointer));
    printf("The value of sample.txt is %c \n",fgetc(pointer));
    printf("The value of sample.txt is %c \n",fgetc(pointer));
    printf("The value of sample.txt is %c \n",fgetc(pointer));
    printf("The value of sample.txt is %c \n",fgetc(pointer));
    
    fclose(pointer);
    return 0;
}