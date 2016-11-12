//根据要求计算
#include<stdio.h>
int main(void)
{
	int s_num, f_num, anw;

	printf("This program computes moduli.\n");
	printf("Enter an integer to serve as the second operand:");
	scanf("%d", &s_num);
	printf("Now enter the first operand:");
	scanf("%d", &f_num);

	while (f_num > 0)
	{
		anw = f_num % s_num;
		printf("%d %% %d = %d\n", f_num, s_num, anw);
		printf("Enter next number for first operand ( <=0 to quit):");
		scanf("%d", &f_num);
	}

	printf("Done!\n");

	return 0;
}