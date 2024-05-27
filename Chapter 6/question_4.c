 # include <stdio.h> 
 int sumandAvg(int a, int b, int *sum, float *avg){
    *sum = a + b;
    *avg = (float) (*sum) / 2;
 }
 
 int main(){
     int a = 5, b = 8, sum;
     float avg;
     sumandAvg(a, b, &sum, &avg);
     printf("The sum of a and b is %d\n", sum);
     printf("The avg of a and b is %.2f\n", avg);
 return 0;
 }