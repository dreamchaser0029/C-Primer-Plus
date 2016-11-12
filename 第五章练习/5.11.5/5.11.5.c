//与用户交互，计算整数和
#include<stdio.h>
int main(void)
{
	int count, sum;
	int n;

	count = 0;
	sum = 0;
	printf("Enter the number:");
	scanf("%d", &n);
	while (count++ < n)
		sum = sum + count;
	printf("sum = %d\n", sum);

	return 0;
}