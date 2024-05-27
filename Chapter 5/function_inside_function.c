#include <stdio.h>
void goodmorning();
void goodafternoon();
void goodnight();
int main()
{
    goodmorning();

    return 0;
}
void goodmorning()
{
    printf("Hello, Good Morning. \n");
    goodafternoon();
}
void goodafternoon()
{
    printf("Hello, Good Afternoon. \n");
    goodnight();
}
void goodnight()
{
    printf("Hello, Good Night. \n");
}
