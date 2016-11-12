#include<stdio.h>
#define SIZE 26
int main(void)
{
	int i;
	char name[SIZE];

	for (i = 0; i < SIZE; i++)
	{
		name[i] = 'a' + i;
		printf("%c\n", name[i]);
	}

	getchar();
	return 0;
}