#include <stdio.h>
float celcius_to_fahrenheit(float celcius);
int main()
{
    int celcius;
    printf("Enter the celcius number, \n");
    scanf("%d", &celcius);

    printf("The tempearture is %.1f\n", celcius_to_fahrenheit(celcius));
    return 0;
}
float celcius_to_fahrenheit(float celcius)
{
    float result;
    // (0°C × 9/5) + 32 = 32°F (Formula)
    result = (float)(celcius * 9 / 5) + 32;
    return result;
}