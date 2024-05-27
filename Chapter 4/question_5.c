# include <stdio.h>

int main(){
    int i=1, n, sum=0;

    printf("Enter a positive number. \n");
    scanf("%d", &n);

    while(i <= n)
    {
        sum += i;
        i++;
    }
    printf("Sum of your number is %d",sum);

    return 0;
}