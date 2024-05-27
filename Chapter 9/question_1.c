#include <stdio.h>
struct vector{
    int a;
    int b;
}vector;

int main(){
    struct vector v1, v2;
    v1.a = 10;
    v1.b = 15;
    printf("A dim is %d and Y dim is %d\n", v1.a, v1.b);
    v2.a = 5;
    v2.b = 20;
    printf("A dim is %d and Y dim is %d\n", v2.a, v2.b);
    return 0;
}