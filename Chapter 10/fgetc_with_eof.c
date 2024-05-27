#include <stdio.h>

int main(){
    FILE *pointer;
    pointer =fopen("newTextfile.txt","r");
    char c =fgetc(pointer);
    while(c != EOF){
        printf("%c",c);
        c =fgetc(pointer);
    }

    return 0;
}