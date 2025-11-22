/*Program to calculate the area of an ellipse.*/

#include <stdio.h>
void main()
{
    float minor, major, area;
    printf("Enter the length of Minor Axis: ");
    scanf("%f", &minor);
    printf("Enter the length of Major Axis: ");
    scanf("%f", &major);

    if (minor<=major)
        {area = 3.14*(minor/2)*(major/2);
        printf("The area of the ellipse is %.2f square units.\n", area);}
    else
        {printf("Wrong Input!\n");}
}