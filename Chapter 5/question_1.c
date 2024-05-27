#include <stdio.h>
float avarage(int a, int b, int c, int d, int e);
int main()
{
    int a, b, c, d, e;

    printf("Enter the value of your five numbers to get an avarage number. \n");

    printf("Enter your first number. \n");
    scanf("%d", &a);
    printf("Enter your second number. \n");
    scanf("%d", &b);
    printf("Enter your third number. \n");
    scanf("%d", &c);
    printf("Enter your forth number. \n");
    scanf("%d", &d);
    printf("Enter your fifth number. \n");
    scanf("%d", &e);

    printf("These numbers has given %d, %d, %d, %d and %d. \n", a, b, c, d, e);

    printf("Your avarage is %.2f \n",avarage(a,b,c,d,e));
        return 0;
}
float avarage(int a, int b, int c, int d, int e)
{
    float result;
    result = (float)(a + b + c + d + e) / 5;
    return result;
}