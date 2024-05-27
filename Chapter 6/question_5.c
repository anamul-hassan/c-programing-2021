# include <stdio.h>

int main(){
    int i = 300;
    int *ptr, **ptr_ptr;

    ptr = &i;
    ptr_ptr = &ptr;

    printf("The value of i is %d", **ptr_ptr);

    return 0;
}