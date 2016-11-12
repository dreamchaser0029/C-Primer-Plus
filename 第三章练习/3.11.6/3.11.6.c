#include<stdio.h>
int main(void)
{
	//特定质量中的水分子数量
	long double woter_weight = 3.0*10e-23;
	int quarter_per_kg = 950;
	int quarter;
	long double number;
	long double quality;

	printf("Enter the water's quarter:");
	scanf("%d", &quarter);
	quality = quarter * quarter_per_kg;
	number = quality / woter_weight;
	printf("%d quarter water has %Le water.\n", quarter, number);

	getchar();
	getchar();
	return 0;
}