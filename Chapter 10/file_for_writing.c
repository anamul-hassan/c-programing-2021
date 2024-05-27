#include <stdio.h>

int main(){
    FILE *pointer;
    pointer =fopen("newFile.txt","w");
    int number = 44;
    fprintf(pointer, "The new file number is %d",number);
    fclose(pointer);
    return 0;
}