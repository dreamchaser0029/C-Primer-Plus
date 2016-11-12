//按照要求打印数字
#include<stdio.h>
int main(void)
{
	int n1, n2;

	printf("Enter a integer: ");
	scanf("%d", &n1);
	n2 = n1 + 10;

	while (n1 <= n2)
	{
		printf("%d\n", n1);
		n1++;
	}

	printf("Done!\n");

	getchar();
	getchar();
	return 0;
}