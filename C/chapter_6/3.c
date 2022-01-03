/*************************************************************************
	> File Name: 2.c
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: Wed 25 Nov 2020 01:05:47 AM PST
 ************************************************************************/

#include<stdio.h>
int main()
{
	for (int i=1;i<=6;i++)
	{
		for (int j=1;j<=i;j++)
		{
			printf("%c",'F'-j+1); 
		}
		printf("\n");
	}
}
