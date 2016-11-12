#include<stdio.h>
#define MAX 255
int main(void)
{
	int n;
	char line[MAX];

	printf("Enter a line:");
	for (n = 0; n < MAX ; n++)
		scanf("%c", line[n]);
	for (; n > 0; n--)
		printf("%c", line[n]);

	getchar();
	getchar();
	return 0;
}