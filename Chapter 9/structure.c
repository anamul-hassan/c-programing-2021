# include <stdio.h> 
# include <string.h>
struct employee{
    char name[20];
    int code;
    float salary;
};
int main(){
    struct employee e1;
    e1.code = 100;
    e1.salary = 80.34;
    strcpy(e1.name,"Harry");

    printf("%s\n", e1.name);
    printf("%d\n", e1.code);
    printf("%.3f\n", e1.salary);
    
return 0;
}