# include <stdio.h>
int positiveNum(int *array, int num){
    int positive_count = 0;
    for(int i = 0; i < num; i++){
        if(array[i]> 0)
        positive_count++;
    }
    return positive_count;
}

int negativeNum(int *array, int num){
    int negative_count = 0;
    for(int i = 0; i < num; i++){
        if(array[i] < 0)
        negative_count++;
    }
    return negative_count;
}
void printArray(int *array, int num){
        printf("These are the element of the array. \n");
        for(int i = 0; i < num; i++){
        printf("%d \t", array[i]);
    }
    printf("\n");
}
int main(){
    int array[] = {5,-6,9,0,1,11,55,-4,66};
    int num;
    num = sizeof(array)/ sizeof(array[0]);
    printArray(array, num);
    printf("These are the positive element of the array: %d\n", positiveNum(array, num));
    printf("These are the negative element of the array: %d\n", negativeNum(array, num));
    return 0;
}