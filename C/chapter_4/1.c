/*************************************************************************
	> File Name: 1.c
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: Tue 24 Nov 2020 04:46:48 AM PST
 ************************************************************************/

#include<stdio.h>
int main()
{
	char name[10];
	char x[5];
	printf("请输入名字：\n");
	scanf("%s",name);
	printf("请输入姓氏：\n");
	scanf("%s",x);
	printf("%s,%s\n",name,x);
}
