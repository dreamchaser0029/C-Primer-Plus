#include<stdio.h>
int main(void)
{
	char start = 'A', end;
	int i;
	
	for (i = 0; i < 6; i++)
	{
		for (end = start + i; start <= end; start++)
			printf("%c", start);

		printf("\n");
	}

	getchar();
	return 0;
}