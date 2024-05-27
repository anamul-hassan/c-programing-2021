# include <stdio.h>
# include <stdlib.h>
# include <time.h>

int main(){
    int number, guess, num_guess = 1;
    srand(time(0));
    number = rand()%100 + 1;
    // printf("The number is %d \n", number);


    do{
        printf("Guess a number between 1 and 100 \n");
        scanf("%d",&guess);

        if(guess > number){
            printf("Enter a lower number please. \n");

        }
        else if(guess < number){
            printf("Enter a higher number please. \n");
        }
        else {
            printf("You guessed it in %d attempt. \n", num_guess);
        }
        num_guess++;

    }while(guess != number);
    return 0;
}