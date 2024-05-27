#include <stdio.h>

int main(){
    float bangla, english, maths, total, percentage;
    printf("Enter your Bangla marks. \n");
    scanf("%f", &bangla);
    printf("Enter your English marks. \n");
    scanf("%f", &english);
    printf("Enter your Maths marks. \n");
    scanf("%f", &maths);

    total = bangla+english+maths;
    printf("Your total marks is %f \n", total);

    percentage = (bangla+english+maths)/3;
    printf("Your total percentage is %f \n", percentage);

    if((percentage < 40) || bangla < 33 || english < 33 || maths < 33 ){
        printf("You are fail in the exam.");
    }
    else {
        printf("You are pass in the exam.");
    }
    
    return 0;
}