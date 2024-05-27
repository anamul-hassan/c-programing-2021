# include <stdio.h>

int main(){
    int principle = 1000, rate = 4, years = 1;
    int simpleinterest = principle*rate*years/100;
    printf("The value of the simpleinterest is %d", simpleinterest);
    return 0;
}