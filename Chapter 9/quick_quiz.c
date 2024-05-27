# include <stdio.h> 
struct employee{
    char name[20];
    int code;
    float salary;
};
int main(){
    struct employee e1, e2, e3;

    printf("Enter your name: \n");
    scanf("%s",e1.name);
    printf("Enter your code: \n");
    scanf("%d",&e1.code);
    printf("Enter your salary: \n");
    scanf("%f",&e1.salary);

    printf("Enter your name: \n");
    scanf("%s",e2.name);
    printf("Enter your code: \n");
    scanf("%d",&e2.code);
    printf("Enter your salary: \n");
    scanf("%f",&e2.salary);

    printf("Enter your name: \n");
    scanf("%s",e3.name);
    printf("Enter your code: \n");
    scanf("%d",&e3.code);
    printf("Enter your salary: \n");
    scanf("%f",&e3.salary);

    
return 0;
}