#include <stdio.h>

int main(){
    FILE *pointer;
    pointer =fopen("newTextfile.txt","w");
    char text[] ="Hello,how are you?";
    fprintf(pointer,"This is the new file text: %s",text);
    fclose(pointer);
}