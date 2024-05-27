#include <stdio.h>

int main(){
    // for reading the inside text of txt file.
    FILE *pointer;
    FILE *pointer1;
    pointer =fopen("questionFile.txt","r");
    pointer1 =fopen("newQuestionFile.txt","w");

    char c = fgetc(pointer);
    
    while(c != EOF){
    printf("%c",c);
    
    fputc(c,pointer1);
    c = fgetc(pointer);
    }
    // while(c != EOF){
    // }
    fclose(pointer);
    fclose(pointer1);

    return 0;
}