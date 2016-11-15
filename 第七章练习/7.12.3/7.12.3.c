#include<stdio.h>
int main(void)
{
	int n,
		even = 0, odd = 0,
		even_all = 0, odd_all = 0,
		even_age = 0, odd_age = 0;
	
	while (scanf("%d", &n) == 1)
	{
		if (n != 0)
		{
			if (n % 2 == 1)
			{
				odd++;
				odd_all += n;
			}
			else if (n % 2 == 0)
			{
				even++;
				even_all += n;
			}
		}
		else
			break;
	}
	
	even_age = even_all / even;
	odd_age = odd_all / odd;
	printf("%d \n%d \n%d \n%d",
		even, even_age, odd, odd_age);

	return 0;
}