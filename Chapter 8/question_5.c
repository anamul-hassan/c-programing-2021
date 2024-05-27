#include <stdio.h>
#include <string.h>
void *own_strcpy(char*destination,char *source){
    char *start = destination;
    while(*source != '\0'){
        *destination = *source;
        destination++;
        source++;
    }
    *destination = '\0';
    return start;

}

int main(){
    char source[]="Hello World";
    char destination[40];
    own_strcpy(destination,source);
    printf("Now the value of destination is %s",destination);


    return 0;
}