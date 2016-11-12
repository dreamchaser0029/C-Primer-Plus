#include<stdio.h>
int main(void)
{
	//调用printf()函数，按要求打印姓名

	printf("Yue Wei\n");    //调用一次函数，在一行打印姓名
	printf("Yue\n" "Wei\n");  //调用一次函数，将姓名分别打印在两行
	printf("Yue ");           //调用两次函数，把姓名打印在一行
	printf("Wei\n");

	getchar();
	return 0;
}