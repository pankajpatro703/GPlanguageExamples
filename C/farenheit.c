#include<stdio.h>
void main()
{
	float F,C;
	printf("Enter temperature in celcius: ");
	scanf("%f",&C);
	F=((9*C)/5)+32;
	printf("Temperature in farenheit is %f\n",F);
}
