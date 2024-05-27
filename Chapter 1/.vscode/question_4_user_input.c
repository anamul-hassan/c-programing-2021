# include <stdio.h>

int main(){
    float principle, rate, years;
    printf("How much amount is your principle? \n");
    scanf("%f", &principle);
    printf("How much amount is your interest rate \n?");
    scanf("%f", &rate);
    printf("How many years is your duration? \n");
    scanf("%f", &years);
    printf("This is your simple interest amount- %f", principle*rate*years/100);
    return 0;
}