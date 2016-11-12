#include<stdio.h>
int main(void)
{
	//计算双倍和平方，并打印出来
	int toes;
	toes = 10;
	int A, B;  //A是toes的双倍，B是平方
	A = toes * 2;
	B = toes * toes;
	printf("Twice toes = %d, toes cubed = %d\n", A, B);

	getchar();
	return 0;
}