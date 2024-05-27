#include <stdio.h>

int main(){
    char letter;
    printf("Write your letter. \n");
    scanf("%c", &letter);

    if(letter >=97 && letter <= 122){
        printf("Your letter is lowercase.\n", letter);
    }
    else{
        printf("Your letter is not lowercase.\n");
    }

    return 0;
}