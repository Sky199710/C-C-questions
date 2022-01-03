/*************************************************************************
	> File Name: 3.c
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: Tue 24 Nov 2020 06:09:57 AM PST
 ************************************************************************/

#include<stdio.h>
int main()
{
	float a;
	printf("请输入一个浮点数：\n");
	scanf("%f",&a);
	printf("a. The input is %3.1f or %1.1e\n",a,a);
	printf("b. The input is %+3.3f or %1.3e\n",a,a);
}
