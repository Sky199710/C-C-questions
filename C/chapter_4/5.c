/*************************************************************************
	> File Name: 5.c
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: Tue 24 Nov 2020 05:40:42 PM PST
 ************************************************************************/

#include<stdio.h>
#include<string.h>
int main()
{	
	char first_name[10];
	char last_name[10];
	printf("请输入您的名字：\n");
	scanf("%s",first_name);
	int f_len=strlen(first_name);
	printf("请输入您的姓：\n");
	scanf("%s",last_name);
	int l_len=strlen(last_name);
	printf("%s %s\n",first_name,last_name);
	printf("%*d %*d\n",f_len,f_len,l_len,l_len);
	printf("%s %s\n",first_name,last_name);	
	printf("%-*d %-*d\n",f_len,f_len,l_len,l_len);

}
