#include <stdio.h>

int main(){
    // File pointer for reading.
    FILE *pointer;
    // Integer to collect file number.
    int number;
    // Reading process
    pointer =fopen("question_5_1.txt", "r");
    fscanf(pointer, "%d",&number);
    // Writing process
    pointer =fopen("question_5_1.txt", "w");
    fprintf(pointer, "%d",number*2);
    // for closing the file
    fclose(pointer);
    // Operation message.
    printf("Process successfully complete.");
    return 0;
}