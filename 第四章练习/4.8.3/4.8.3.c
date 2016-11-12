#include<stdio.h>
int main(void)
{
	float num;

	printf("Enter a floating-number\n");
	scanf("%f", &num);
	printf("%f\n", num);
	printf("%e\n", num);

	getchar();
	getchar();
	return 0;
}