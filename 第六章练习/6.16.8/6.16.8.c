#include<stdio.h>
int main(void)
{
	float num1, num2;


	
	printf("Enter two floating numbers:");
	while (scanf("%f %f", &num1, &num2) == 2)
	{
	
		printf("%f\n", (num1 - num2) / (num1 * num2));
		printf("Enter two next floating numbers:");
	}

	return 0;
}