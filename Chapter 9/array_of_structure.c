# include <stdio.h> 
# include <string.h>
    struct employee
    {
        int code;
        float salary;
        char name[30];
    };

int main(){
    struct employee fbook[100];
    fbook[0].code = 100;
    fbook[0].salary = 34.55;
    strcpy(fbook[0].name, "Harry");

    fbook[1].code = 100;
    fbook[1].salary = 34.55;
    strcpy(fbook[1].name, "Hell");

    fbook[2].code = 100;
    fbook[2].salary = 34.55;
    strcpy(fbook[2].name, "Hell");
    printf("Done");
return 0;
}