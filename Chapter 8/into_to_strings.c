# include <stdio.h> 

int main(){
    // char strings[]={'S', 't', 'r', 'i', 'n', 'g', '\0'};
    char strings[]="Strings";
    char *ptr = strings;
    printf("The string text is %c \n", *ptr);
return 0;
}