#include <stdio.h>
#include <string.h>

typedef struct clint_info{
    int accountNum;
    char name[25];
    char address[80];
    char mail[20];
    int phoneNum;
    char accountType[20];
}details;
void display(details info){
    printf("*********************************\n");
    printf("Bank account number is : %d\n",info.accountNum);
    printf("Clint name is : %s\n",info.name);
    printf("Clint address is : %s\n",info.address);
    printf("Clint email address is : %s\n ",info.mail);
    printf("Clint contact number is : %d\n",info.phoneNum);
    printf("Account type is : %s\n",info.accountType);
    printf("*********************************\n");
}
int main(){
    details clint1;
    printf("Enter your account number.\n");
    scanf("%d",&clint1.accountNum);
    fflush(stdin);
    printf("Enter your name.\n");
    fgets(clint1.name, sizeof(clint1.name),stdin);
    printf("Enter your current address.\n");
    fgets(clint1.address, sizeof(clint1.address),stdin);
    printf("Enter your email address.\n");
    fgets(clint1.mail, sizeof(clint1.mail),stdin);
    printf("Enter your phone number.\n");
    scanf("%d",&clint1.phoneNum);
    fflush(stdin);
    printf("Enter your account types.\n");
    fgets(clint1.accountType, sizeof(clint1.accountType),stdin);

    display(clint1);
return 0;
}