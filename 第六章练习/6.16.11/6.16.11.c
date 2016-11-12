#include<stdio.h>
#define MAX 8
int main(void)
{
	int n;
	int num[MAX];

	for (n = 0; n < MAX; n++)
		scanf("%d", &num[n]);
	for (n = MAX - 1; n >= 0; n--)
		printf("%d", num[n]);

	getchar();
	getchar();
	return 0;
}