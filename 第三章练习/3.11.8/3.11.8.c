#include<stdio.h>
int main(void)
{
	//各体积单位转换
	float cp,pint, ounce, tablespoon, teaspoon;  //cp 杯数 

	printf("Enter the cup number:");
	scanf("%f", &cp);
	pint = 2 * cp;
	ounce = 0.125 * cp;
	tablespoon = 0.5 * ounce;
	teaspoon = tablespoon / 3;

	printf("%f cupnumber = %f pint = %f ounce =%f tablespoon = %f teaspoon ", cp, pint, ounce, tablespoon, teaspoon);

	getchar();
	getchar();
	return 0;
}