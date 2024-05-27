# include <stdio.h> 

int main(){
    char str[]={'T', 'h', 'a', 'n', 'k', 's', ' ', 'Y', 'o', 'u','\0'};
    // char str[]="Thank You";
    char *ptr = str;
    while(*ptr != '\0'){
    printf("%c", *ptr);
    ptr++;
    }
return 0;
}