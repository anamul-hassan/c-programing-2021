#include <stdio.h>
void encrypt(char *string){
    char *ptr = string;
    while(*ptr != '\0'){
        *ptr = *ptr+1;
        ptr++;
    }
}

int main(){
    char string[]="hallo";
    encrypt(string);
    printf("Encrypt file is: %s", string);
    return 0;
}
