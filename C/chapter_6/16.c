/*************************************************************************
	> File Name: 16.c
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Wed 25 Nov 2020 07:32:55 PM PST
 ************************************************************************/

#include<stdio.h>
int main()
{
	float money=100;
	int i=0;
	do
	{
		money=money*1.08-10;
		i++;
	}while(money>=0);
	printf("%d年后Chuckie的账户会被清空\n",i);
}
