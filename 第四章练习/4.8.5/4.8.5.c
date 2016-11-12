#include<stdio.h>
int main(void)
{
	float dspeed, dtime, dbytes;

	printf("Enter the download speed(Mb/s):\n");
	scanf("%f", &dspeed);
	printf("Enter the download bytes£¨MB£©:");
	scanf("%f", &dbytes);
	dtime = dbytes / dspeed * 8;
	printf("a file of %.2f megabits per second, a file of %.2f megabits\n", dspeed, dbytes);
	printf("download in %.2f seconds.", dtime);

	getchar();
	getchar();
	return 0;
}