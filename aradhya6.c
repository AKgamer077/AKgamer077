/*Program to calculate area of a triangle.*/

#include <stdio.h>
#include <math.h>
void main()
{
    float a,b,c,s,area;
    printf("Enter the First side length: ");
    scanf("%f", &a);
    printf("Enter the Second side length: ");
    scanf("%f", &b);
    printf("Enter the Third side length: ");
    scanf("%f", &c);

    s=(a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("The area of the triangle is %.2f square units.", area);
}