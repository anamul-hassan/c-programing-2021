#include <stdio.h>

int main(){
    FILE *pointer;
    int number;
    printf("Enter the multiplication number. \n");
    scanf("%d", &number);
    pointer =fopen("Multiplicatontable.txt","w");
    for(int i = 0; i <10;i++){
        int result = number*(i+1);
        fprintf(pointer,"%d X %d = %d \n",number,i+1,result);
    }
    fclose(pointer);
    printf("Your table successfully genarated.");

    return 0;
}