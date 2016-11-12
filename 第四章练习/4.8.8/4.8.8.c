#include<stdio.h>
#define gallon_per_liter 3.785;
#define mile_per_km 1.609;
int main(void)
{
	
	float fuel_amount_km, gallons, miles, kilometers, liters, fuel_amount_miles;
	printf("Enter the travel mileage:\n");
	scanf("%f", &miles);
	printf("Enter the gallons:\n");
	scanf("%f", &gallons);
	fuel_amount_miles = miles / gallons;
	printf("The fuel amount mile is %0.1f\n", fuel_amount_miles);
	liters = gallons * gallon_per_liter;
	kilometers = miles * mile_per_km;
	fuel_amount_km = kilometers / liters;
	printf("The fuel amount km is %0.1f \n", fuel_amount_km);
	
	getchar();
	getchar();
	return 0;
}