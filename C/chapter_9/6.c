/*************************************************************************
	> File Name: 6.c
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Wed 02 Dec 2020 06:05:29 PM PST
 ************************************************************************/

#include<stdio.h>
void order(double * min,double * mid,double * max)
{
	double temp;
	if(*min>*mid)
	{
		temp=*min;
		*min=*mid;
		*mid=temp;
	}
	if(*max<=*min)
	{
		temp=*max;
		*max=*mid;
		*mid=*min;
		*min=temp;
	}
	else if(*max<=*mid)
	{
		temp=*max;
		*max=*mid;
		*mid=temp;
	}
}
int main()
{
	double a,b,c;
	printf("请输入三个数：\n");
	while(scanf("%lf %lf %lf",&a,&b,&c)==3)
	{
		order(&a,&b,&c);
		printf("从小到大的排序为%g %g %g\n",a,b,c);
		printf("请输入三个数：\n");

	}
}
