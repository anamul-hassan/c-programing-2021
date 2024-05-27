# include <stdio.h> 

int main(){
    int i=1, n, sum=0;

    printf("Enter a positive number \n");
    scanf("%d", &n);

    do{
        sum +=i;
        i++;
    }while(i <= n);
    printf("%d is your sum", sum);
return 0;
}