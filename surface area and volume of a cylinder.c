#include<stdio.h>

int main()
{
    const float PI = 3.14;
          float r, h, Area , Volume;

    printf("Enter Radius and Height of the Cylinder\n");
    scanf("%f%f", &r, &h);

    Area = (2 * PI * r * (r + h));
    Volume = PI * r * r * h ;

    printf("Surface Area of Cylinder is %f\n", Area);
    printf("Volume of the Cylinder is %f\n" , Volume);

    return 0;
}
