# include <stdio.h> 
int sum(int a, int b);
int main(){
    int a = 5, b = 10;

    printf("The value of a is %d\n", a);
    printf("The value of b is %d\n", b);
    printf("The sum of a and b is %d\n", sum(a,b));
return 0;
}

int sum (int a, int b){
    return a*b;
}