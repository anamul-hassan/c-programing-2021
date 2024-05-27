# include <stdio.h>
int fibonacci (int number);
int main(){
    int number, result;
    printf("Enter any number to find nth fibonacci number. \n");
    scanf("%d", &number);

    result = fibonacci(number);
    printf("The Fibonacci term of %d is %d \n", number, result);

    return 0;
}
int fibonacci (int number){
    if(number == 0){
        return 0;
    }
    else if (number == 1){
        return 1;
    }
    else 
    return (fibonacci(number - 1) + fibonacci(number - 2));
}