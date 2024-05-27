# include <stdio.h>
void change (int a);

int main(){
    int b = 344;
    printf("The value of before b is %d \n", b);
    change(b);
    printf("The value of after b is %d \n", b);

    return 0;
}
void change (int a){
    a = 77;
}