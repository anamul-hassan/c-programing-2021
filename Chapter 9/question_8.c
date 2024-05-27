# include <stdio.h>
# include <string.h>

typedef struct clint_info{
    int acnum;
    char name[30];
    char address[100];
    char email[40];
    int phonenum;
    float acbalance;
}details;
void display( details info){
printf("The account number is: %d\n",info.acnum);
printf("The clint name is: %s\n",info.name);
printf("The address of clint is: %s\n",info.address);
printf("The mail address of the clint is: %s\n",info.email);
printf("The clint phone number is: %s\n",info.phonenum);
printf("The account balance is: %.2f\n",info.acbalance);
}
int main(){
    details clint1;
    clint1.acnum = 356562656;
    strcpy(clint1.name, "Akram khan");
    strcpy(clint1.address, "Alirtek, Narayanganj");
    strcpy(clint1.email, "akramkhan@gmail.com");
    strcpy(clint1.phonenum,"0172650175");
    clint1.acbalance = 53453.53;
    display(clint1);
    return 0;
}