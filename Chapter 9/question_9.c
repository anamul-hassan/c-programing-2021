#include <stdio.h>
typedef struct date{
    int date, month, year;
}date;
void show(date d){
    printf("The date is : %d/%d/%d \n",d.date,d.month,d.year);
}
int datecmp(date d1, date d2){
    if(d1.year > d2.year){
        return 1;
    }
    if(d1.year < d2.year){
        return -1;
    }
    if(d1.month > d2.month){
        return 1;
    }
    if(d1.month < d2.month){
        return -1;
    }
    if(d1.date > d2.date){
        return 1;
    }
    if(d1.date < d2.date){
        return -1;
    }
    return 0;
}
int main(){
    date d1 = {1,11, 2021};
    date d2 = {2,10, 2021};
    show(d1);
    show(d2);
    int a = datecmp(d1, d2);
    printf("Date comparison function return is : %d",a);
    return 0;
}