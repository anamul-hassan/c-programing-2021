#include <stdio.h>

int main(){
    FILE *pointer;
    pointer=fopen("fputcDemo.txt", "w");
    fputc('H',pointer);
    fputc('e',pointer);
    fputc('l',pointer);
    fputc('l',pointer);
    fputc('o',pointer);
    fputc(' ',pointer);
    fputc('W',pointer);
    fputc('o',pointer);
    fputc('r',pointer);
    fputc('l',pointer);
    fputc('d',pointer);
    fclose(pointer);
    return 0;
}