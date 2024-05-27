#include <stdio.h>
#include <string.h>

int main(){
    char *string1="kell";
    char *string2="kellee";
    int value = strcmp(string1,string2);
    printf("The value of two string is %d",value);
    return 0;
}