#include <stdio.h>
#include <stdlib.h>

int main(){
    int *pointer;
    pointer =(int*)malloc(60000*sizeof(int));

for(int i = 0; i < 60000; i++){
    printf("Enter the %d value of element.\n",i+1);
    scanf("%d",&pointer[i]);
}
free(pointer);
for(int i = 0; i < 60000; i++){
    printf("The value of %d element is: %d\n",i+1, pointer[i]);
}
    return 0;
}