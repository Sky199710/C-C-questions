/*************************************************************************
	> File Name: 3.c
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Fri 27 Nov 2020 03:52:40 AM PST
 ************************************************************************/

#include<stdio.h>
int main()
{
	int a;
	int odd=0;
	int dou=0;
	double odd_even=0.0;
	double dou_even=0.0;
	printf("请输入整数：\n");
	while(scanf("%d",&a)==1&&a!=0)
	{
		if (a%2==0)
		{	
			dou++;
			dou_even+=a;
		}
		else
		{
			odd++;
			odd_even+=a;
		}
	}
	dou_even/=dou;
	odd_even/=odd;
	printf("输入奇数的个数为%d,奇数的平均值为%lf\n"
			"偶数的个数为%d偶数的平均值为%lf\n",odd,odd_even,dou,dou_even);
}
