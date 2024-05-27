#include <stdio.h>
void slice(char *string, int starting_point, int ending_point){
    int i = 0;
    while((starting_point+i)<ending_point){
        string[i] = string [starting_point+i];
        i++;
    }
    string[i]='\0';
}

int main(){
    char string[]="I am the boss of mine";
    slice(string, 0, 8);
    printf("'%s' is a slice of string.",string);
    return 0;
}