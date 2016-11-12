#include<stdio.h>
int main(void)
{
	//ASCIIÂëÖµ»¥»»
	int code;
	printf("Enter an ASCII code: \n");
	scanf("%d", &code);
	printf("ASCII code %d is %c\n", code, code);

	getchar();
	getchar();
	return 0;
}