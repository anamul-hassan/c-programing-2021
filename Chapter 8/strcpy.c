#include <stdio.h>
#include <string.h>

int main(){
    // char source[]="This is my new code";
    // char target[35];
    // strcpy(target, source);
    // printf("Now the target text is %s", target);

    // Another way to write this code.......>

    char *source="this is my new code";
    char target[30];
    strcpy(target, source);
    printf("Now the target text is %s", target);

    return 0;
}