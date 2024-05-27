#include <stdio.h>

// Is S[3] is a 1-D array of integers. Then *(s+3)
// refer to the third element:
// true
// false
// depends
// The answer is ==> false

int main(){
    int s[6] = {3, 4, 5, 12, 3, 5};
    int ptr = s[3];
    
    printf("The value of s[3] elment is %d", ptr);
    // This function print 4th element of araays.
 return 0;
}