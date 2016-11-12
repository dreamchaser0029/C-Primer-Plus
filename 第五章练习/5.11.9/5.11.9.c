#include<stdio.h>
void Temperatures(double n);
const double K_TO_C = 273.16;
const double C_TO_F = 32.0;
const double A = 0.56;
int main(void)
{
	double f;

	printf("Enter a temperature(F):\n");

	while (scanf("%lf", &f) == 1)
	{
		Temperatures(f);
		printf("Enter a temperature(F)(q to quit):");
	}

	getchar();
	getchar();
	return 0;
}
void Temperatures(double n)
{
	double kelvin, celsius;
	celsius = A * (n - C_TO_F);
	kelvin = celsius + K_TO_C;
	printf("�����¶ȣ� %.2lf F\n �����¶�: %.2lf C\n �����¶� %.2lf K \n",
		n, celsius, kelvin);
}