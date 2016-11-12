//计算整数的平方和
#include<stdio.h>
int main(void)
{
	int count, sum;
	int n, x;

	count = 0;
	sum = 0;
	printf("Enter the number:");
	scanf("%d", &n);
	while (count++ < n)
	{
		x = count * count;
		sum = sum + x;
	}
	printf("sum = %d\n", sum);

	return 0;
}