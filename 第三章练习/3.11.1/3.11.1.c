#include<stdio.h>
int main(void)
{
	//�Լ�����ϵͳ��δ����������硢����������͸�������������
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