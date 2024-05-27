# include <stdio.h>
void display();

int main(){
    int a;
    printf("This is my first print out in c programme.\n");
    display();
    printf("Above the text has been called by using function.\n");


    return 0;
}
void display(){
    printf("This is a fucntion called display.\n");
}