/*************************************************************************
	> File Name: 7.c
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Wed 02 Dec 2020 06:56:29 PM PST
 ************************************************************************/

#include<stdio.h>
#include<ctype.h>
void isa();
int isb(char ch);
int main()
{
	isa();
}
void isa()
{
	int ch;
	printf("请输入字符\n");
	while((ch=getchar())!=EOF)
	{
		isb(ch);
	}
}
