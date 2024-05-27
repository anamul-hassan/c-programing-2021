# include <stdio.h> 

int main(){
int a; int b = a; // it's valid.
// int a;  b = a; it's invalid
int v = 3 ^ 3; // it's valid but it's not prodiuce 9
char dt = '21 Dec 2020'; // it's valid 
printf("%d", v);
return 0;
}