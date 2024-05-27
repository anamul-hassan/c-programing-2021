#include <stdio.h>
    int occurrence(char string[], char character){
        char *ptr = string;
        int count = 0;
        while(*ptr != '\0'){
            if(*ptr == character){
                count++;
            }
            ptr++;
            }
            return count;

    }

int main(){
    char string[]="confidence";
    int count_occurrence_number= occurrence(string,'n');
    printf("Occurrence: %d", count_occurrence_number);
    return 0;
}