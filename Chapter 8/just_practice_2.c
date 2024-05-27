#include <stdio.h>
char *my_strcpy(char *destination, char *source){
    if(destination = NULL){
        return NULL;
    }
    char *pointer = destination;
    while(*source != '\0'){
        *destination = *source;
        destination++;
        source++;
    }
    *destination = '\0';
    return pointer;
    }
int main(){
    char source[]="Hi gays, whats up";
    char destination[40];
    printf("The value of destination is: %s",my_strcpy(destination,source));
    return 0;
}