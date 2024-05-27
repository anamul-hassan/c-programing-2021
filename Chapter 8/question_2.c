#include <stdio.h>
#include <string.h>

int main(){
    char string1[30];
    char string2[30];
    char string2_rec;
    int i = 0;
    printf("Enter the value of first string. \n");
    scanf("%s", string1);
    printf("Enter the value of second string character by character. \n");
    while(string2_rec != '\n'){
        fflush(stdin);
        scanf("%c",&string2_rec);
        string2[i]=string2_rec;
        i++;
    }
    string2[i-1]='\0';
    printf("The value of string1 is %s\n", string1);
    printf("The value of string2 is %s\n", string2);
    printf("strcmp between two strings is %d", strcmp(string1, string2));
    return 0;
}