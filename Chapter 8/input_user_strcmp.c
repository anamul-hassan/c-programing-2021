#include <stdio.h>
#include <string.h>

int main(){
    char *string1;
    char *string2;

    printf("Enter two string. \n");
    scanf("%s %s", string1, string2);
    int value = strcmp(string1, string2);
    printf("The value of string is %d",value);
}