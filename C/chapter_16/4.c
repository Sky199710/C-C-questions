/*************************************************************************
	> File Name: 4.c
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Sun 20 Jun 2021 01:52:56 AM PDT
 ************************************************************************/

#include<stdio.h>
#include<time.h>
void delay(double);
int main()
{
	int ans;
	double time;
	puts("Please enter delay.");
	while((scanf("%lf",&time))==1)
	{
		while(getchar()!='\n')
			continue;
		delay(time);
	}
}
void delay(double time)
{
	clock_t start,end;
	start =(double)clock();
	end =(double)clock();
	while(((end-start)/CLOCKS_PER_SEC)<time)
	{
		end=(double)clock();
	}
	printf("delay %lf seconds\n",(double)(end-start)/CLOCKS_PER_SEC);
}
