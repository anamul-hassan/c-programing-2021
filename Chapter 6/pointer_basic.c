# include <stdio.h> 

int main(){
    int a = 100;
    int *k = &a;
    int **j = *k;

    printf("The value of a is %d \n", a);
    printf("The value of a is %d \n", *k);
    printf("The address of a is %u \n", &a);
    printf("The address of a is %u \n", k);
    printf("The address of a is %u \n", &k);
    printf("The value of k is %u \n", *(&k));

    printf("The value of *k is %d \n", **j);



    return 0;
}