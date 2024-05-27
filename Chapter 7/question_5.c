#include <stdio.h>
void reverse(int *array, int n){
int temp;
for(int i = 0; i < n/2; i++)
{
    temp = array[i];
    array[i] = array[n- i-1];
    array[n-i-1] = temp;
}
}

int main()
{
    int array[] = {1, 2, 3, 4, 5, 6, 7};
    reverse(array, 7);
    for(int i = 0; i < 7; i++){
    printf("The value of %d element is: %d \n", i+1, array[i]);
}

    return 0;
}