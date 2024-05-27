#include <stdio.h>
int main()
{
    int user_number, system_number = 1, range;
    printf("Enter the number. \n");
    scanf("%d", &user_number);

    printf("Enter the multiplication range. \n");
    scanf("%d", &range);

        printf("**Your Multiplication Table** \n");
    while(system_number <= range){
        printf("%d X %d = %d \n", user_number, system_number, user_number*system_number);
        system_number++;
    }
    return 0;
}