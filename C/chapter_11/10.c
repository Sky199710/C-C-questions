/*************************************************************************
	> File Name: 9.c
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Tue 08 Dec 2020 10:40:14 PM PST
 ************************************************************************/

#include<stdio.h>
#include<string.h>
char * s_gets(char[], int);
void nospace(char[]);
int main()
{
	char str[100];
	printf("请输入字符串：\n");
	while(s_gets(str,100)&&str[0]!='\0')
	{
		nospace(str);
		puts(str);
		printf("请输入字符串\n");
	}
}
char*s_gets(char str[], int n)
{
	char *find;
	char *verify;
	verify=fgets(str,n,stdin);
	if(verify)
	{
		find=strrchr(str,'\n');
		if(find)
			*find='\0';
		else
			while(getchar()!='\n')
				continue;
		return str;
	}
	else 
		return NULL;
}
void nospace(char str[])
{
	char *mark;
	mark=str;
	while(*str!='\0')
	{
		while(*str==' ')
			strcpy(str,str+1);
		str++;
	}
}
