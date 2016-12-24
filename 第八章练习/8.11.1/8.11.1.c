#include<stdio.h>
int main(void)
{
	int n = 0;
	while (getchar() != EOF)
		n++;
	printf("%d", n);
	return 0;
}