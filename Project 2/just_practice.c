#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int snakegunWater(char you, char computer){
    if(you == computer){
        return 0;
    }
    if(you == 's' && computer == 'g'){
        return -1;
    }
    else if(you == 'g' && computer == 'w'){
        return -1;
    }
     else if(you == 'w' && computer == 's'){
        return -1;
    }
    if(you == 'g' && computer == 's'){
        return 1;
    }
    else if(you == 'w' && computer == 'g'){
        return 1;
    }
     else if(you == 's' && computer == 'w'){
        return 1;
    }

}

int main(){
    char you,computer;
    printf("\nEnter 's' for snake, 'g' for gun and 'w' for water\n");
    scanf("%c",&you);
    if(you == 's' || you == 'w' || you == 'g'){ 
    char blank1[20];
    char blank2[20];
    char *pointer1 = blank1;
    char *pointer2 = blank2;
    srand(time(0));
    int number = rand()%100+1;
    if(number <33){
        computer ='s';
    }
    else if(number > 33 && number < 66){
        computer ='g';
    }
    else{
        computer ='w';
    }
    if(you == 's'){
        pointer1="Snake";
    }
    else if(you == 'g'){
        pointer1="Gun";
    }
    else{
        pointer1="Water";
    }
    if(computer == 's'){
        pointer2="Snake";
    }
    else if(computer == 'g'){
        pointer2="Gun";
    }
    else{
        pointer2="Water";
    }
    printf("You have picked: %s\n",pointer1);
    printf("Computer have picked: %s\n",pointer2);
    int result = snakegunWater(you, computer);
    if(result == 1){
        printf("\nCongratulation\n");
        printf("You are win! \n");
    }
    if(result == -1){
        printf("\nOpps\n!");
        printf("You are lose! \n");
    }
    if(result == 0){
        printf("Opps!\n");
        printf("Game is draw.\n");
    }
    
    }
    else{
        printf("This command is unavailable. \n");
    }
   
return 0;
}