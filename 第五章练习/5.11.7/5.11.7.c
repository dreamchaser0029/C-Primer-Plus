//自定义函数计算立方
#include<stdio.h>
void cubed(double n);
int main(void)
{
	double x;

	printf("Enter a double_point number:");
	scanf("%lf", &x);

	cubed(x);

	return 0;
}
void cubed(double n)
{
	printf("%f cubed is %f.\n", n, n*n*n);
}