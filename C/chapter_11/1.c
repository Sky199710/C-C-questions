/*************************************************************************
	> File Name: 1.c
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Mon 07 Dec 2020 05:30:28 PM PST
 ************************************************************************/

#include<stdio.h>
char *getchars(char[],int);
int main()
{	
	int n=8;
	char ch[40];
	char *check;
	printf("请输入字符：\n");
	check=getchars(ch,n);
	if (check==NULL)
		printf("The input failed.");
	else
		puts(ch);
}
char *getchars(char ch[], int n)
{	
	int str;
	int i;
	for (i=0;i<n;i++)
	{
		str=getchar();
		if (str!=EOF)
			ch[i]=str;
		else
			break;
	}
		if (str==EOF)
			return NULL;
		else
		{
			ch[i]='\0';
			return ch;
		}
}

