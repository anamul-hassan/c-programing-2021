# include <stdio.h> 
# include <string.h>
    struct employee{
        char name[20];
        int code;
        float salary;
    };
int main(){
    struct employee e1;
    struct employee *ptr;
    ptr = &e1; 
    (*ptr).code = 100; // e1.code = 100;
    printf("Enter the value of e1.code is %d", e1.code);

    
return 0;
}