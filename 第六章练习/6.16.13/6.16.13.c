#include<stdio.h>
#define MAX 8
int main(void)
{
	int number[MAX];
	int num = 0, n, num2;
	for (n = 0, num2 = 1; n < MAX; n++)
	{
		number[n] = num2;
		num2 *= 2;
	}
	do
	{
		printf("%d\n", number[num]);
		num++;
	} while (num < 8);

	getchar();
	return 0;
}