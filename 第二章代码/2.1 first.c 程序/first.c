#include <stdio.h>
int main(void)                     /*一个简单的C程序*/
{
	int num;                       /*定义一个名为num的变量*/
	num = 1;

	printf("I am a simple");        /*使用printf()函数*/
	printf("computer\n");
	printf("My favorite number is %d because it is first.\n", num);

	getchar();                      /*等待下一次键击*/
	return 0;
}