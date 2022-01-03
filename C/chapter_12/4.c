/*************************************************************************
	> File Name: 4.c
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Sun 13 Dec 2020 04:17:28 AM PST
 ************************************************************************/

#include<stdio.h>
static int count;
int hello(void);
int main()
{
	int num;
	for (int i=0;i<6;i++)
	{
		num=hello();
		printf("函数被调用了%d次\n",num);
	}
}
int hello(void)
{
	extern int count;
	count++;
	return count;
}
