/*************************************************************************
	> File Name: 3.c
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: Tue 24 Nov 2020 01:57:06 AM PST
 ************************************************************************/

#include<stdio.h>
int main()
{
	int age;
	printf("请输入你的年龄\n");
	scanf("%d",&age);
	age = age * 365;
	printf("您活了%d天\n",age);
}
