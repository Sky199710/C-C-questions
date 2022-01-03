/*************************************************************************
	> File Name: 6.c
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: Wed 25 Nov 2020 01:41:25 AM PST
 ************************************************************************/

#include<stdio.h>
#include<string.h>
int main()
{
	char words[40];
	int length;
	printf("请输入单词：\n");
	scanf("%s",words);
	length=strlen(words);
	for(int i=length-1;i>=0;i--)
	{
		printf("%c",words[i]);
	}
	printf("\n");
}
