#include<stdio.h>
int main(void)
{
	float max = 100, min = 0;
	float n = 50;
	char ch, response;
	printf("Please a number from 0 to 100.");
	printf("Is it %d?", n);

	while ((ch = getchar()) != 'y')
	{
		while (ch == '\n')
			continue;
		if (ch == 'n')
		{
			printf("Is it bigger or litter(b/l)?");
			scanf("%c", &response) == 1;
			if (response == 'b')
			{
				max = n;
				n = (max + min) / 2;
				continue;
			}
			else if ((response = getchar()) == 'l')
			{
				min = n;
				n = (max + min) / 2;
				continue;
			}
			else if (response == '\n')
				continue;
			else
			{
				printf("Enter b\l");
				
			}
		}
	}
}