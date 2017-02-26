/*
 * *需改进算法
 */

#include<stdio.h>
void swap(double * p1, double * p2, double * p3);
int main(void)
{
	double first, second, last;
	printf("Enter three numbers for sorting:\n");
	scanf("%lf %lf %lf", &first, &second, &last);
	swap(&first, &second, &last);
	printf("%lf\n%lf\n%lf\n ", first, second, last);
	return 0;
}

void swap(double * p1, double * p2, double * p3)
{
	double temp1, temp2, temp3;
	if (*p1 > *p2 && *p2 > *p3)
		return;
	else if (*p1 > *p3 && *p3 > *p2)
	{
		temp1 = *p3;
		*p3 = *p2;
		*p2 = temp1;
	}
	else if (*p2 > *p1 && *p1 > *p3)
	{
		temp1 = *p1;
		*p1 = *p2;
		*p2 = temp1;
	}
	else if (*p2 > *p3 && *p3 > *p1)
	{
		temp1 = *p1;
		*p1 = *p2;
		*p2 = *p3;
		*p3 = temp1;
	}
	else if (*p3 > *p1 && *p1 > *p2)
	{
		temp1 = *p1;
		*p1 = *p3;
		*p3 = *p2;
		*p2 = temp1;
	}
	else if (*p3 > *p2 && *p2 > *p1)
	{
		temp1 = *p1;
		*p1 = *p3;
		*p3 = temp1;
	}
	else if (*p3 == *p2 && *p3 > *p1);
	{
		
	}
}