#include <stdio.h>
#include <string.h>
typedef struct employee{
        char name[20];
        int code;
        float salary;
// typedef is used to make shortcup text to point structure function.
    }emp;
    void show(emp emp1){
        printf("The name of employee is: %s\n", emp1.name);
        printf("The Code of employee is: %d\n", emp1.code);
        printf("The Salary of employee is: %.2f\n", emp1.salary);
    }

int main(){
    emp e1;
    emp *ptr;
    ptr = &e1;
    strcpy((*ptr).name, "Farah");
    ptr->code = 121;
    (*ptr).salary = 232.45;
    show(e1);
}