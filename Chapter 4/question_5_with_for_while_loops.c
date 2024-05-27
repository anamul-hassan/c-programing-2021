# include <stdio.h> 

int main(){
    int i,n,sum=0;

    printf("Enter a positive number. \n");
    scanf("%d", &n);

    for(i=1; i <= n; i++)
    {
        sum +=i;
    }
    printf("%d is your sum. \n", sum);
return 0;
}