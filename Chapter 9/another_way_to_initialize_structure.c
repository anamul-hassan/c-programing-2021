# include <stdio.h> 
struct employee{
    char name[20];
    int code;
    float salary;
};

int main(){
    struct employee harry = {"harry", 100, 534.53};
    printf("Name %s\n",harry.name);
    printf("Code %d\n",harry.code);
    printf("Salary %.2f\n",harry.salary);
    
return 0;
}