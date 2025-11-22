/*Program to convert the temperature from celsius to fahrenheit.*/

#include <stdio.h>
void main()
{
    float c,f;
    printf("Enter temperature (in degree Celsius): ");
    scanf("%f", &c);

    f = (1.8*c)+32;
    printf("The temperature (in degree Fahrenheit) is %.2f.\n", f);
}