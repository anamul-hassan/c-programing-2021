#include <stdio.h>
int my_strlen(char *string)
{
    int count = 0;
    while(*string!='\0')
    {
        count++;
        string++;
    }
    return count;
}
int main()
{
    char str[20]="Hello";
    printf("Length of string a = %u \n",my_strlen(str));
    return 0;
}