# include <stdio.h> 

int main(){
    int i = 25;
    int *j = &i;
    int **k = *j;

    printf("The value of i is %d\n", i);
    printf("The address of i is %u\n", j);
    printf("The value of j is %u \n", *(&j));
    //or
    printf("The address of i is %u\n", &i);
    // 2nd step
    printf("The address of *j is %u \n", &j);
    printf("The address of **k is %u \n", **k);

    return 0;
}