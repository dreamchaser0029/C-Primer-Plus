#include<stdio.h>
int main(void)
{
	//自己尝试系统如何处理整数上溢、浮点数上溢和浮点数下溢的情况
	int i = 2147483647;
	unsigned j = 85248546258436695;
	float toobig = 3.4e20;
	float toosmall = 0.1234e-10;

	printf("%d    %d     %d\n", i, i + 1, i + 2);
	printf("%u    %u     %u\n", j, j + 1, j + 2);
	printf("%f    %f\n", toobig, toobig * (float)100);
	printf("%f    %f\n", toosmall, toosmall / 10);

	getchar();
	return 0;
}