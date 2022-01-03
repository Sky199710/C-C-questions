/*************************************************************************
	> File Name: 2.c
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: Wed 25 Nov 2020 01:05:47 AM PST
 ************************************************************************/

#include<stdio.h>
int main()
{
	char note;
	int sign;
	printf("请输入字母：\n");
	scanf("%c",&note);
	sign = note-'A';
	for (int i=0;i<=sign;i++)
	{
		for (int j=0;j<sign-i;j++)
		{
			printf(" "); 
		}
		for (int k=0;k<=i;k++)
		{
			printf("%c",'A'+k);
		}	
		for (int k=0;k<i;k++)
		{
			printf("%c",'A'+i-1-k);
		}
		for (int j=1;j<=sign;j++)
		{
			printf(" "); 
		}
		printf("\n");
	}
}
