#include <stdio.h>
// The TIMESTAMP data type is used for values that contain both 
// date and time parts. TIMESTAMP has a range of '1970-01-01 00:00:01'
//  UTC to '2038-01-19 03:14:07' UTC. ... With the fractional part 
//  included, the format for these values is ' YYYY-MM-DD hh:mm:ss.
typedef struct timestamp{
    int year, month, date, hour, minute, second;
}timestamp;
void show(timestamp dt){
    printf("The timestamp is : %d-%d-%d %d:%d:%d \n",dt.year, dt.month, dt.date, dt.hour, dt.minute, dt.second);
}
int timestampcmp(timestamp t1, timestamp t2){
    if(t1.year > t2.year){
        return 1;
    }
    if(t1.year < t2.year){
        return -1;
    }
    if(t1.month > t2.month){
        return 1;
    }
    if(t1.year < t2.month){
        return -1;
    }
    if(t1.date > t2.date){
        return 1;
    }
    if(t1.date < t2.date){
        return -1;
    }
    if(t1.hour > t2.hour){
        return 1;
    }
    if(t1.hour < t2.hour){
        return -1;
    }
    if(t1.minute > t2.minute){
        return 1;
    }
    if(t1.minute < t2.minute){
        return -1;
    }
    if(t1.second > t2.second){
        return 1;
    }
    if(t1.second < t2.second){
        return -1;
    }
    return 0;
}
int main(){
    timestamp t1 = {2021, 11, 4, 8, 16, 33};
    timestamp t2 = {2021, 12, 4, 8, 16, 33};
    show(t1);
    show(t2);
    int cmp = timestampcmp(t1,t2);
    printf("Timestamp function return: %d",cmp);
    return 0;
}