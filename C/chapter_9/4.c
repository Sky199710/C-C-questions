/*************************************************************************
	> File Name: 4.c
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Wed 02 Dec 2020 06:08:31 AM PST
 ************************************************************************/

#include<stdio.h>
double tiaohe(double a, double b)
{
	a=1/a;
	b=1/b;
	a=(a+b)/2;
	return 1/a;
}
int main()
{
	double a,b;
	printf("请输入两个数\n");
	while((scanf("%lf %lf",&a,&b))==2)
	{
		printf("它们的调和平均数为%lf\n",tiaohe(a,b));
		printf("请输入两个数\n");
	}
}
