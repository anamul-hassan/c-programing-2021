#include <stdio.h>
#include <stdlib.h>
int main(){
    char *pointer;
    pointer =(char*)malloc(5*sizeof(char));

    for(int i = 0; i < 5; i++){
        printf("Enter the %d name of employee.\n",i+1);
        scanf("%s",&pointer[i]);
    }
    fflush(stdin);

    for(int i = 0; i < 5; i++){
        printf("The %d employee name is: %s\n",i+1,pointer[i]);
    }

    return 0;
}