#include<stdio.h>
int main()
{
	float celsius,fahrenheit;
	printf("Enter Temp in Fahrenheit:");
	scanf("%F",&fahrenheit);
	celsius=(fahrenheit-32)/1.8;
	printf("Temperature in celsius:%.2f",celsius);
	return 0;
}
