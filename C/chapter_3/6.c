/*************************************************************************
	> File Name: 6.c
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: Tue 24 Nov 2020 04:24:39 AM PST
 ************************************************************************/

#include<stdio.h>
int main()
{
	int kuatuo;
	double fenzi;
	printf("请输入水的夸脱数：\n");
	scanf("%d",&kuatuo);
	fenzi = kuatuo*950*3.0e-23;
	printf("%d夸脱水中包含%e个水分子\n",kuatuo,fenzi);
}
