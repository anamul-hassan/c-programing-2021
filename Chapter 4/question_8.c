# include <stdio.h> 

int main(){
    int i, n, factorial=1;
    printf("Enter a number. \n");
    scanf("%d", &n);

    for(i=1; i <=n; i++){
        factorial*=i;
    }
    printf("%d is the factorial number. \n", factorial);
return 0;
}