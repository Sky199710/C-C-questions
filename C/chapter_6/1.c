/*************************************************************************
	> File Name: 1.c
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: Wed 25 Nov 2020 12:56:27 AM PST
 ************************************************************************/

#include<stdio.h>
int main()
{	
	int m = 'a';
	char a[26];
	int i = 0;
	for (i;i<26;i++,m++)
	{
		a[i]=m;
	}
	for (i=0;i<26;i++)
	{
		printf("%c\n",a[i]);
	}
}
