# include <stdio.h>

int main(){
    double i;
    double *ptr = &i;

    printf("The value of ptr is %u \n", ptr);
    ptr++;
    printf("The value of ptr is %u \n", ptr);
    return 0;
}