/*************************************************************************
	> File Name: 6.c
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Tue 08 Dec 2020 03:20:56 AM PST
 ************************************************************************/

#include<stdio.h>
#include<string.h>
char * s_gets(char[], int);
int is_within(char ,const char []);
void main()
{
	int verify;
	char str[50];
	char ch;
	printf("请输入字符串：\n");
	while(s_gets(str,50)&&str[0]!='\0')
	{
		printf("请输入字符\n");
		ch=getchar();
		while(getchar()!='\n')
			continue;
		verify=is_within(ch,str);
		if(verify)
			printf("该字符在字符串中\n");
		else
			printf("该字符不在字符串中\n");
		printf("请输入字符串\n");
	}
}
char*s_gets(char ch[],int n)
{
	char * verify;
	char * find;
	verify=fgets(ch,n,stdin);
	if(verify)
	{
		find=strchr(ch,'\n');
		if(find)
			*find='\0';
		else
		{
			while(getchar()!='\n')
				continue;
		}
		return ch;
	}
	else
		return NULL;
}
int is_within(char ch, const char str[])
{
	int exist=0;
	while(!exist&&*str!='\0')
	{
		if(ch==*str)
			exist=1;
		str++;
	}
	return exist;
}
