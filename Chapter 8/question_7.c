#include <stdio.h>
void decrypt(char*string){
    char *ptr = string;
    while(*ptr != '\0'){
        *ptr = *ptr-1;
        ptr++;
    }
}

int main(){
char string[]="ibmmp";
decrypt(string);
printf("Decrypt file is: %s", string);
return 0;
}