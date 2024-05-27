#include <stdio.h>
#include <math.h>

int main()
{
    int a = 4;
    int b = 8;
    int c = a * b;
    printf("The value of a and b is %d \n", a + c);
    printf("The value of a and b is %d \n", a - b);
    printf("The value of a and b is %d \n", a * b);
    printf("The value of a and b is %d \n", a / b);

    int z;
    z = b * a;
    printf("The value of z is %d \n", z);

    printf("The value 4 to the power 5 is %f \n", pow(4, 5));

    printf("The value of is 4 * 5 is %d \n", 4 * 5);
    printf("The value of is 4 * 5.5 is %f \n", 4 * 5.5);
    printf("The value of is 4.4 * 5.5 is %f \n", 4.4 * 5.5);
    printf("The value of is 2/5 is %d \n", 2/5);
    printf("The value of is 2/5 is %f \n", 2/5);

    printf("The value of 3.0 and 9 is %f \n", 3.0/9);

    return 0;
}