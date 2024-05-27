#include<stdio.h>
char *my_strcpy(char *destination, char *source);

int main()
{
    char ch_arr1[20];
    char ch_arr2[20];

    printf("Enter first string (ch_arr_1): ");
    gets(ch_arr1);

    printf("Enter second string(ch_arr_1): ");
    gets(ch_arr2);

    printf("\nCopying first string into second... \n\n");
    my_strcpy(ch_arr2, ch_arr1); // copy the contents of ch_arr1 to ch_arr2

    printf("First string (ch_arr_1) = %s\n", ch_arr1);
    printf("Second string (ch_arr_2) = %s\n", ch_arr2);

    // signal to operating system program ran fine
    return 0;
}

char *my_strcpy(char *destination, char *source)
{
    char *start = destination;

    while(*source != '\0')
    {
        *destination = *source;
        destination++;
        source++;
    }

    *destination = '\0';
    return start;
}