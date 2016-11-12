#include <stdio.h>
int main(void)
{
	int bph2o = 212;
	int rv;
	
	rv = printf("%d F is water's boling point.\n", bph2o);
	printf("The printf() function printed %d characters.\n",
		rv);

	getchar();
	return 0;
}