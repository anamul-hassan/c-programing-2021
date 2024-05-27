#include <stdio.h>

int main(){
    char you, computer;
    char *pointer1;
    char *pointer2;
    printf("Enter 's' for snake, 'w' for water and 'g' for gun \n");
    scanf("%c", &you);
    pointer1 = you;
    pointer2 = computer;
    // Condition for batter understanding of user input.
    if(you == 's'){
        pointer1 = "Snake";
    }
    else if(you == 'g'){
        pointer1 = "Gun";
    }
    else if(you == 'w'){
        pointer1 = "Water";
    }
    // Condition for batter understanding of user input.
    if(computer == 's'){
        pointer2 = "Snake";
    }
    else if(computer == 'g'){
        pointer2 = "Gun";
    }
    else if(computer == 'w'){
        pointer2 = "Water";
    }

    // Print function for messages that will be pick up.
    printf("You've picked: %s\n",pointer1);
    printf("Computer's picked: %s\n",pointer2);
    return 0;
}