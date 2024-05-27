#include <stdio.h>
#include <string.h>

int main(){
    char main_platform[30]="Hello";
    char supplement[]="world";
    // char *supplement="world";
    strcat(main_platform,supplement);
    printf("The main plateform text is %s",main_platform);
    // strcat function just concatenate 
    //two strings and there will be no space between two words.



    return 0;
}