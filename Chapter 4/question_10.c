# include <stdio.h>

int main(){
    int i, num, count = 0;

    printf("Enter any positive number, \n");
    scanf("%d", &num);

    while(i < num){
        if(i = 2){
            count%i == 0;
            i++;
            break;
        }

        if(count==0){
            printf("It's a prime number. \n");
        }
        else{
            printf("It's not a prime number \n");
        }

    }

    return 0;
}