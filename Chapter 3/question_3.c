# include <stdio.h>

int main(){
    float tax = 0, income;
    printf("Write your income tax in the box \n");
    scanf("%f", &income);

    if(income>=250000 && income<=500000){
        tax=tax+0.05*(income - 250000);
    }
    if(income>=500000 && income<=1000000){
        tax=tax+0.05*(income - 500000);
    }
    if(income>=1000000){
        tax=tax+0.05*(income - 1000000);
    }
    printf("Your net tax is %f \n", tax);
    printf("The tax has to be paid by 26th December 2021 \n");
    return 0;
}