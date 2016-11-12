#include<stdio.h>
#define SIZE 5
int main(void)
{
	int a, i;

	for (i = 0; i < SIZE; i++)
	{
		for (a = 0; a <= i; a++)
			printf("$");

		printf("\n");
	}

	getchar();
	return 0;
}