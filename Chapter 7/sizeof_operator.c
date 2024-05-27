#include <stdio.h>
int main()
{
    int arr[] = { 1, 2, 3, 4, 7, 98, 0, 12, 35, 99, 14 };
    //Sizeof can be used to calculate number of elements of 
    //the array automatically. Let see Example : 
    printf("Number of elements:%lu ", sizeof(arr) / sizeof(arr[0]));
    return 0;
}