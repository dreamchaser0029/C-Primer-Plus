#include<stdio.h>
int main(void)
{
	//�������λת��
	float cp,pint, ounce, tablespoon, teaspoon;  //cp ���� 

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