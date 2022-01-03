/*************************************************************************
	> File Name: 3.c
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Mon 30 Nov 2020 12:01:57 AM PST
 ************************************************************************/

#include<stdio.h>
int main()
{
	int ch;
	int big=0;
	int small=0;
	printf("请输入字符：\n");
	while((ch=getchar())!=EOF)
	{
		if (ch>=65&&ch<=90)
			big++;
		if (ch>=97&&ch<=122)
			small++;
	}
	printf("您输入了%d个大写字符，%d个小写字符。\n",big,small);
}
