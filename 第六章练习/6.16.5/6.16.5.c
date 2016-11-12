#include<stdio.h>
int main(void)
{
	int x, i;
	char n, z, m;

	printf("Enter a upperase letter:");
	scanf("%c", &n);

	for (i = 'A'; i <= n; i++)
	{
		for (x = i; n - x > 0; x++)
			printf(" ");
		for (z ='A'; z <= i; z++)
			printf("%c", z);
		for (m = z - 1; --m >= 'A'; )
			printf("%c", m);
		
		printf("\n");
	}

	getchar();
	getchar();
	return 0;
}