#include<stdio.h>
int main(void)
{
	int n, double_n, cubed_n;
	int biggest, least;

	printf("Enter the biggest number:");
	scanf("%d", &biggest);
	printf("Then enter the least number:");
	scanf("%d", &least);

	for (n = least; n <= biggest; n++) 
	{
		double_n = n * n;
		cubed_n = n * n * n;
		printf("%5d %10d %15d\n", n, double_n, cubed_n);
	}

	getchar();
	getchar();
	return 0;
}