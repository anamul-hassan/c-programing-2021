# include <stdio.h>

int main(){
    int multiplication[10];
    for(int i = 0; i < 10; i++){
        multiplication[i] = 5*(i+1);
        printf("5 X %d = %d \n", i+1, multiplication[i]);
    }
    return 0;
}