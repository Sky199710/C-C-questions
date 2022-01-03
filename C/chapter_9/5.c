/*************************************************************************
	> File Name: 5.c
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Wed 02 Dec 2020 05:40:23 PM PST
 ************************************************************************/

#include<stdio.h>
void larger_of(double * a, double * b)
{
	*a=(*a>=*b) ? *a:*b;
	*b=*a;
}
int main()
{
	double a,b;
	printf("请输入两个数：");
	while(scanf("%lf %lf",&a,&b)==2)
	{
		larger_of(&a,&b);
		printf("%g %g\n",a,b);
		printf("请输入两个数：");
	}

}
