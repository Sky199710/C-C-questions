/*************************************************************************
	> File Name: 2.c
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: Tue 24 Nov 2020 07:42:24 PM PST
 ************************************************************************/

#include<stdio.h>
int main()
{
	int m,n;
	printf("请输入一个整数：\n");
	scanf("%d",&n);
	m=n+10;
	while(n<=m)
	{
		printf("%d\t",n);
		n++;
	}
	printf("\n");
}
