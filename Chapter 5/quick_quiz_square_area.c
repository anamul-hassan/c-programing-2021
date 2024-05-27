# include <stdio.h>
# include <math.h>
int main(){
    int side;
    printf("Enter the side of area. \n");
    scanf("%d", &side);

    printf("The area of the square is %f", pow(side,2));
    // pow fucntion require (%f) for deliverd a exact result.


    return 0;
}