//�����ӻ����Сʱ�ͷ���
#include<stdio.h>
#define M_PER_H 60     //һСʱ60��
int main(void)
{
	int min, mmin, mhour;

	printf("Enter the minutes:");
	scanf("%d", &min);
	while (min > 0)
	{
		mhour = min / M_PER_H;
		mmin = min % M_PER_H;
		printf("%d minutes has %d hours and %d minutes\n",
			min, mhour, mmin);
		printf("Enter next time:(0 < = to exit)\n");
		scanf("%d", &min);
	}
	
	printf("Bye!\n");

	return 0;
}