# include <stdio.h> 
// Sum is a function which takes a and b as input value 
//and return and intiger as a output
int sum( int a, int b); // Function prototype diclarationl.
// Here a and b are called perameters.
int main(){
    int c;
    c = sum(2, 8); // Fucntion call
    // Here 2 and 3 are called arguments.
    printf("The value of a and b is %d",c);
    
return 0;
}
// Function defination.
int sum( int a, int b){
    int result;
    result = a * b;
    return result;
}