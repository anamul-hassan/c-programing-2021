#include <stdio.h>
#include <string.h>
// strlen means string length
    int string_length(char *string){
        int length=0;
        while(*string != '\0'){
            length++;
            string++;
    }
    return length;

    }

int main(){
    char string[]="abcdefghijklmnopqrstuvwxyz";
    int length = string_length(string);
    printf("The length of the string is %u",length);
    

    return 0;
}