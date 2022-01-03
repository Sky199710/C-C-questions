/*************************************************************************
	> File Name: 2.c
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: Tue 24 Nov 2020 05:20:32 AM PST
 ************************************************************************/

#include<stdio.h>
#include<string.h>
int main()
{
	char name[20];
	int length;
	printf("请输入名字： \n");
	scanf("%s",name);
	length = strlen(name);
	length = length+3;
	printf("\"%20s\"",name);
	printf("\"%-20s\"",name);
	printf("\"%12s\"\n",name);

}
