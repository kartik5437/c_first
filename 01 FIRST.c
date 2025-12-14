#include <stdio.h>

int main()
{
    int length, cir, breadth, area;
    printf("enter length and breadth of rectangle");
    scanf("%d %d", &length, &breadth);
    area = length * breadth;
    printf("area of rectangle is %d", area);
    return 0;
}