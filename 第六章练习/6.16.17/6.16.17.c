#include<stdio.h>
int main(void)
{
	int i = 100, d = 0;

	while (i > 0)
	{
		d++;
		i = i * 1.08 - 10;
	}
	
	printf("Chuckie need %d years ", d);

	getchar();
	return 0;
}