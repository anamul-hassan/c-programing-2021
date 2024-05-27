#include <stdio.h>

int main(){
    int num;
    int i;
    printf("Enter the number. \n");
    scanf("%d", &num);
    printf("The Multiplication Table \n");

   for( i = 1 ; i <= 10; i++)
   {
       printf("%d X %d = %d \n", num, i, num*i);
   }

    return 0;
}