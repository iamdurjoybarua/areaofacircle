#include <stdio.h>
#include <stdlib.h>

#define PI 3.1416


int main()
{
    float radius, area;

    printf("Enter the radius: \n");
    scanf("%f", &radius);

    area = ( radius * radius ) * PI ;

    printf("The Area of Circle is : %.2f\n" , area);

    return 0;
}
