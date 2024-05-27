#include <stdio.h>
#include <string.h>

int main(){
    char string1[25];
    char string2[25];

    printf("Enter the value of first string. \n");
    fgets(string1, sizeof(string1), stdin);
    printf("Enter the value of second string. \n");
    fgets(string2, sizeof(string2), stdin);

    printf("The value of first strings is: %s",string1);
    printf("The value of second strings is: %s",string2);
    printf("strcmp between two strings is %d",strcmp(string1,string2));

}