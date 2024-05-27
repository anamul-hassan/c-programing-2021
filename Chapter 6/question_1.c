# include <stdio.h>

int main(){
    int a =8 ;
    int *j = &a;

    printf("The address of a is %u \n", &a);
    printf("The address of a is %u \n", *j);


    return 0;
}