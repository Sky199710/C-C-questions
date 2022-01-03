/*************************************************************************
	> File Name: 7.c
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: Tue 24 Nov 2020 10:35:32 PM PST
 ************************************************************************/

#include<stdio.h>

float calc(float a)
{
	a=a*a*a;
	return a;
}
int main()
{
	float a,ans;
	printf("请输入一个float型数： \n");
	scanf("%f",&a);
	ans=calc(a);
	printf("该数的立方为：%f\n",ans);
}
