#include<stdio.h>
int main(void)
{
	char name[40];
	float M, CM;

	printf("Enter your name:\n");
	scanf("%s", name);
	printf("OK!Then enter your height(cm):\n");
	scanf("%f", &CM);
	M = CM / 100;
	printf("%s , you are %.2fm tall.\n", name, M);

	getchar();
	getchar();
	return 0;
}