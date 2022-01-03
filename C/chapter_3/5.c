/*************************************************************************
	> File Name: 5.c
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: Tue 24 Nov 2020 04:18:12 AM PST
 ************************************************************************/

#include<stdio.h>
int main()
{
	int age;
	printf("输入您的年龄：\n");
	scanf("%d",&age);
	float  seconds;
	seconds = age * 3.156e7;
	printf("您的年龄合%e秒\n",seconds);
	
}
