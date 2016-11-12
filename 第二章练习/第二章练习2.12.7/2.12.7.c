#include<stdio.h>
void smile(void);
int main(void)
{
	//自己定义一个函数，按要求打印
	smile();
	smile();
	smile();
	printf("\n");
	smile();
	smile();
	printf("\n");
	smile();

	getchar();
	return 0;
}
void smile(void)
{
	printf("Smile!");
}