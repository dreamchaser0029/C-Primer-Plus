#include<stdio.h>
int main(void)
{
	//读取一个浮点数，分别打印成小数点形式，指数形式和p计数法
	float number;
	printf("Enter a floating-point value:");
	scanf("%f", &number);
	printf("fixed-point notation: %f\n", number);
	printf("exponential notation: %e\n", number);
	printf("P notation: %a\n", number);

	getchar();
	getchar();
	return 0;
}