#include <stdio.h>

int main()
{
    int radius;
    float area;
    printf("enter the radius of circle \n: ");
    scanf("%d", &radius);
    area = 3.14 * radius * radius;
    printf("area of the circle is %f", area);
    return 0;
}
