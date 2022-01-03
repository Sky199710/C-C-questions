/*************************************************************************
	> File Name: 10.c
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Mon 14 Dec 2020 07:39:42 PM PST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
	char ch;
	int n;
	char name[40];
	FILE * fa;
	printf("请输入文件名: ");
	scanf("%s",name);
	if((fa=fopen(name,"r"))==NULL)
	{
		printf("can't open %s file.\n",name);
		exit(EXIT_FAILURE);
	}
	printf("请输入一个位置(<0或非数字时退出): ");
	while(scanf("%d",&n)==1&&n>=0)
	{
		fseek(fa,(long)n,SEEK_SET);
		while((ch=getc(fa))!='\n')
			putchar(ch);
		printf("\n请输入一个位置(<0或非数字时退出): ");
	}
}
