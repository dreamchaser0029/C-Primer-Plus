#include<stdio.h>
int main(void)
{
	//������ת��Ϊ����
	int ages = 18;
	int days, years;
	years = 365;
	days = years * ages;
	printf("My age = %d\n", ages);
	printf("%d years = %d days\n", ages, days);

	getchar();
	getchar();
	return 0;
}