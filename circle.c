#include <stdio.h>

int main()
{
    float radius;
    float height;
    float volume;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    printf("Enter the height of the cylinder: ");
    scanf("%f", &height);
    volume = 3.14 * radius * radius * height;
    printf("The volume of the cylinder is: %.2f\n", volume);

    return 0;
}