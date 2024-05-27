# include <stdio.h>
int sum (int a, int b);
int main(){
    int a = 7, b = 4;
    printf("The value of a and b is %d and %d \n", a, b);
    printf("The value of a and b is %d \n", sum(a,b));
    printf("The value of a and b is %d and %d \n", a, b);

    return 0;
}
int sum (int a, int b){
    int c;
    c = a + b;
}