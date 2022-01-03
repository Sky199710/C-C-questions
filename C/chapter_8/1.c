/*************************************************************************
	> File Name: 1.c
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Sun 29 Nov 2020 06:26:37 AM PST
 ************************************************************************/

#include<stdio.h>
int main()
{
	int ch;
	int i=0;
	printf("请输入字符：\n");
	while((ch=getchar())!=EOF)
		i++;
	printf("\n");
	printf("%d\n",i);
}
