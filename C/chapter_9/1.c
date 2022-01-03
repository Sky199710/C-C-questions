/*************************************************************************
	> File Name: 1.c
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Wed 02 Dec 2020 05:00:30 AM PST
 ************************************************************************/

#include<stdio.h>
double min(double x, double y)
{
	return(x<y) ? x:y;
}
int main()
{
	double a,b;
	printf("请输入两个数：\n");
	while (scanf("%lf %lf",&a,&b)==2)
	{
		printf("较小的数为%lf\n",min(a,b));
		printf("请输入两个数：\n");
	}
	printf("bye!\n");
}
