/*************************************************************************
	> File Name: 3.c
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: Tue 24 Nov 2020 07:47:38 PM PST
 ************************************************************************/

#include<stdio.h>
int main()
{
	int n,weeks,days;
	printf("请输入天数： \n");
	scanf("%d",&n);
	weeks=n/7;
	days=n%7;
	printf("%d days are %d weeks, %d days.\n",n,weeks,days);
}
