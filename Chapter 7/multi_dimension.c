#include <stdio.h>

int main(){
int stu_num = 4;
int sub_num = 3;
int marks[4][3];

for(int i = 0; i < stu_num; i++){
    for(int j = 0; j < sub_num; j++){
        printf("Enter the marks of student %d in subject %d \n", i+1, j+1);
        scanf("%d", &marks[i][j]);
    }
}

for(int i = 0; i < stu_num; i++){
    for(int j = 0; j < sub_num; j++){
        printf("The marks of student %d in subject %d is %d \n", i+1, j+1, marks[i][j]);
    }
}

    return 0;
}