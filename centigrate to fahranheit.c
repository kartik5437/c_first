#include <stdio.h>

int main()
{
    float centigrate;
    float fahrenheit;
    printf("Enter temperature in centigrate: ");
    scanf("%f", &centigrate);
    fahrenheit = (centigrate * 9 / 5) + 32;
    printf("Temperature in Fahrenheit: %2f\n", fahrenheit);

    return 0;
}