#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int snakegunwater(char you, char computer){
    // Part 2 // Game Function.
    // Function for draw.
    if(you == computer){
        return 0;
    }
    // Function for win and lose
    // s - w
    if(you == 's' && computer == 'w'){
        return 1;
    }
    else if(you == 'w' && computer == 's'){
        return -1;
    }
    // g - s
    if(you == 'g' && computer == 's'){
        return 1;
    }
    else if(you == 's' && computer == 's'){
        return -1;
    }
    // w - g
    if(you == 'w' && computer == 'g'){
        return 1;
    }
    else if(you == 'g' && computer == 'w'){
        return -1;
    }
}

int main(){
    // Part 1 // User input.
    char you, computer;
    char blank1[20];
    char blank2[20];
    char *pointer1 = blank1;
    char *pointer2 = blank2;
    srand(time(0));
    int number = rand()%100+1;
    if(number <33){
        computer = 's';
    }
    else if(number > 33 && number < 66){
        computer = 'g';
    }
    else{
        computer = 'w';
    }
    printf("\nEnter 's' for snake, 'g' for gun and 'w' for water.\n");
    scanf("%c",&you);
    // Better understanding for user input .
     if(you == 's'){
        pointer1 = "Snake";
    }
    else if(you == 'w'){
        pointer1 = "Water";
    }
    else {
        pointer1 = "Gun";
    }
    // Better understanding for system input .
    if(computer == 's'){
        pointer2 = "Snake";
    }
    else if(computer == 'w'){
        pointer2 = "Water";
    }
    else {
        pointer2 = "Gun";
    }
    // Function Link.
    int result = snakegunwater(you,computer);
    printf("You have picked: %s\n",pointer1);
    printf("Computer has picked: %s\n",pointer2);
    // Part 3 // Print same result.
    if( result == 0){
        printf("\n");
        printf("The game has been drawn.\n");
        printf("\n");
    }
    else if( result == 1){
        printf("\n");
        printf("Congratulation!\n");
        printf("You are win in the game.\n");
        printf("\n");
    }
    else{
        printf("\n");
        printf("Opps!\n");
        printf("You are lose in the game.\n");
        printf("\n");
    }
    return 0;
}