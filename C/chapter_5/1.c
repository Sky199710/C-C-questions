/*************************************************************************
	> File Name: 1.c
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: Tue 24 Nov 2020 07:01:50 PM PST
 ************************************************************************/

#include<stdio.h>
#define temp 60
int main()
{
	int time;
	int hours,minutes;
	printf("请输入时间（分钟）：");
	scanf("%d",&time);
	while(time>0)
    {	
		hours=time/temp;
		minutes=time%temp;
		printf("%d小时%d分钟\n",hours,minutes);	
		printf("请再输入一个时间（分钟）：");
		scanf("%d",&time);
	}
}
