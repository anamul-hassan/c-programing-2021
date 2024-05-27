#include <stdio.h>
// Structure for employee information.
typedef struct info{
    char name[20];
    int salary;
}info;

int main(){
    info person1,person2;
    // Person1 user input part.
    printf("Please, Put here first employee information\n");
    printf("Enter your name. \n");
    gets(person1.name);
    printf("Enter your salary. \n");
    scanf("%d",&person1.salary);
    fflush(stdin);
    // Person2 user input part.
    printf("Please, Put here second employee information\n");
    printf("Enter your name. \n");
    gets(person2.name);
    printf("Enter your salary. \n");
    scanf("%d",&person2.salary);
    fflush(stdin);


    // printf("Your name is : %s\n",person1.name);
    // printf("Your salary is : %d Taka \n.",person1.salary);
    FILE *pointer;
    pointer =fopen("employeeInfo.txt","w");
    // First Employee Information.
    fprintf(pointer, "First Employee Information.\n");
    fprintf(pointer, "Employee name is: %s\n",person1.name);
    fprintf(pointer, "Employee salary is: %d US dollar\n",person1.salary);
    // For Organized
    fprintf(pointer, "\n");
    // Second Employee Information.
    fprintf(pointer, "Second Employee Information.\n");
    fprintf(pointer, "Employee name is: %s\n",person2.name);
    fprintf(pointer, "Employee salary is: %d US dollar\n",person2.salary);
    // New file closer.
    fclose(pointer);
    // Confirmation text.
    printf("Your new employee file is successfully generated.");
    return 0;
}