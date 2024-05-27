#include <stdio.h>
#include <string.h>
 struct employee{
     char name[20];
     int code;
     float salary;
 };
 void show(struct employee emp){
     printf("The name of employee is: %s\n",emp.name);
     printf("The Code of employee is: %d\n",emp.code);
     printf("The Salary of employee is: %.2f\n",emp.salary);
 }

int main(){
    struct employee e1;
    struct employee *ptr;
    ptr = &e1;
    strcpy(ptr->name, "Hello");
    ptr->code = 121;
    ptr->salary = 234.56;
    show(e1);
    return 0;
}