/*Program to calculate roots of a quadratic equation.*/

#include <stdio.h>
#include <math.h>
void main()
{
	float a,b,c,r1,r2,D;
	printf("Enter coefficient of x^2: ");
	scanf("%f", &a);
	printf("Enter coefficient of x: ");
	scanf("%f", &b);
	printf("Enter constant value: ");
	scanf("%f", &c);
	
	D = (b*b)-(4*a*c);
	if (D>0)
		{printf("The roots of the given equation are real & distinct.\n");
		r1 = ((sqrt(D))-b)/(2*a);
		r2 = -((sqrt(D))-b)/(2*a);
		printf("The roots of the given equation are %.2f & %.2f.\n", r1,r2);}
	else if (D==0)
		{printf("The roots of the given equation are real & equal.\n");
		r1 = (-b)/(2*a);
		printf("The roots of the given equation are %.2f & %.2f.\n", r1,r1);}
	else 
		{printf("The roots of the given equation are imaginary.\n");}
}