#include <stdio.h>
typedef struct complex{
    int real;
    int imaginary;
}complex;

int main(){
    complex a, b, c;
// We can get user input indevedually or together.
    // printf("Enter the 1st real and imaginary number: \n");
    // scanf("%d %d", &a.real, &a.imaginary);
    // printf("Enter the 2st real and imaginary number: \n");
    // scanf("%d %d", &b.real, &b.imaginary);

    printf("Enter the 1st real number: ");
    scanf("%d",&a.real);
    printf("Enter the 1st imaginary number: ");
    scanf("%d",&a.imaginary);
    printf("Enter the 2st real number: ");
    scanf("%d",&b.real);
    printf("Enter the 2st imaginary number: ");
    scanf("%d",&b.imaginary);
    c.real = a.real + b.real;
    c.imaginary = a.imaginary + b.imaginary;

    if(c.imaginary >= 0){
        printf("%d + %d(i)", c.real, c.imaginary);
    }
    else{
        printf("%d, %d",c.real, c.imaginary);
    }
    return 0;
}