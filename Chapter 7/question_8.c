# include <stdio.h>
void multiplicationTable(int *array, int num, int limit);
int main(){
    int array[4][10];
    multiplicationTable(array[0], 5,10);
    multiplicationTable(array[1], 3,10);
    multiplicationTable(array[2], 7,10);
    multiplicationTable(array[3], 9,10);

    return 0;
}
void multiplicationTable(int *array, int num, int limit){
    for(int i = 0; i < limit; i++){
        array[i]= num*(i+1);
    }
    printf("The Multiplication Table %d is : ----> \n",num);
    for(int i = 0; i < limit; i++){
        printf("%d X %d = %d \n", num, i+1, array[i]);
    }
    printf("--------------------------------\n");

}