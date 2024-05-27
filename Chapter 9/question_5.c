#include <stdio.h>
#include <string.h>
struct students_data{
    char name[30];
    char section[20];
    int code;
    float number;
};
void show(struct students_data std){
    printf("Student name: %s\n",std.name);
    printf("Student section: %s\n",std.section);
    printf("Student code: %d\n",std.code);
    printf("Student total number: %.2f\n", std.number);
}
int main(){
    struct students_data std1, std2;
    // student 1 data
    strcpy(std1.name,"Abdur Rahman");
    strcpy(std1.section,"Sunflower");
    std1.code = 55;
    std1.number = 544;
    // student 2 data
    strcpy(std2.name,"Sha Ali");
    strcpy(std2.section, "Sunflower");
    std2.code = 553;
    std2.number = 5444;
    show(std1);
    show(std2);


    return 0;
}