#include<stdio.h>
void br(void);
void ic(void);
int main(void)
{
	//调用自定义函数分别按要求打印消息
	printf("Brazil,Russia,India,China.\n");
	ic();
	printf(",\n");
	br();

	getchar();
	return 0;
}
void br(void)
{
	printf("Brazil,Russia");
}
void ic(void)
{
	printf("India,China");
}