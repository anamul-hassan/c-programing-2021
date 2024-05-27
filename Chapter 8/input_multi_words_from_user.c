#include <stdio.h>

int main(){
    char input_strings[40];
    printf("Enter your comment below this line. \n");
    gets(input_strings);

    printf("Your comment is  --> %s \n", input_strings);

    return 0;
}