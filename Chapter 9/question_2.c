#include <stdio.h>

struct vector{
    int a;
    int b;
};
struct vector sumVector(struct vector v1, struct vector v2){
    struct vector result;
    result.a = v1.a + v2.a;
    result.b = v1.b + v2.b;
    return result;
}
int main(){
    struct vector v1, v2, sum;

    v1.a = 5;
    v1.b = 6;
    printf("A dim is %d and B dim is %d \n", v1.a, v1.b);
    v2.a = 7;
    v2.b = 8;
    printf("A dim is %d and B dim is %d \n", v2.a, v2.b);
    sum = sumVector(v1, v2);
    printf("A dim of result is %d and B dim of result is %d \n",sum.a, sum.b);
    return 0;
}