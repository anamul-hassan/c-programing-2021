# include <stdio.h>

int main(){
    int user_number, range ;

    printf("Enter the number. \n");
    scanf("%d", &user_number);

    printf("Enter the range number. \n");
    scanf("%d", &range);

    for(user_number <= range; range; range--){
        printf("%d X %d = %d \n", user_number, range, user_number*range);
    }

    return 0;
}