# include <stdio.h>

int main(){
    float tax, income;
    printf("Enter your income figure. \n");
    scanf("%f",&income);
    
    // if (income == 250000){
    //     printf("You won't pay any income tex");
    // }
    if (income >= 250000 && income <= 500000){
        tax = tax + 0.05 * (income -250000); 
    }
    if (income >= 500000 && income <= 1000000){
        tax = tax + 0.20 * (income - 500000); 
    }
    if (income >= 1000000){
        tax = tax + 0.30 * (income - 1000000); 
    }
        printf("Your net tex is %f and you have to pay the tax by 26th December\n", tax);
    
    else (){
        printf("You won't pay any tax.");
    }
    
return 0;
}