# include <stdio.h>
// void printArray( int *ptr, int n){
//     for(int i = 0; i < n; i++){
//         printf("The value of element %d is %d \n", i+1, *(ptr+i));
//     }
// }

// Alternative Way

void printArray( int ptr[], int n){
    for(int i = 0; i < n; i++){
        printf("The value of element %d is %d \n", i+1, ptr[i]);
    }
ptr[1] = 5550;
}

int main(){
    int array[] = {2, 44, 55, 66, 67,244, 535};
    printArray(array, 7);
    printf("The value of ptr %d", array[1]);
    return 0;
}