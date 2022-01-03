/*************************************************************************
	> File Name: 8.c
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: Tue 24 Nov 2020 10:46:26 PM PST
 ************************************************************************/

#include<stdio.h>
double Temperatures(double a)
{
	const float x=1.8;
	const float y=32.0;
	const float z=273.16;
	double sheshi,absolute;
	sheshi=x*a+y;
	absolute=sheshi+z;
	printf("华氏度为:%.2f 摄氏度为：%.2f 绝对温度为：%.2f\n",a,sheshi,absolute);
	
}
int main()
{
	double huashi;
	int rv;
	printf("请输入一个温度（华氏）： \n");
	rv=scanf("%lf",&huashi);
	while(rv==1)
	{
		Temperatures(huashi);
		printf("请再输入一个温度（华氏）： \n");
		rv=scanf("%lf",&huashi);
	}
}
