/*************************************************************************
	> File Name: 8.c
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Tue 08 Dec 2020 06:04:24 AM PST
 ************************************************************************/

#include<stdio.h>
#include<string.h>
char * s_gets(char[], int);
char * string_in(char[],char[]);
int main()
{
	char str1[70];
	char str2[70];
	char * add;
	printf("请输入第一个字符串：\n");
	while(s_gets(str1,70)&&str1[0]!='\0')
	{
		printf("请输入第二个字符串：\n");
		s_gets(str2,70);
		add=string_in(str1,str2);
		if(add)
			printf("%s\n",add);
		printf("请输入第一个字符串：\n");
	}
}

char*s_gets(char ch[], int n)
{
	char * verify;
	char * find;
	verify = fgets(ch,n,stdin);
	if(verify)
	{
		find=strchr(ch,'\n');
		if(find)
			*find='\0';
		else
			while(getchar()!='\n')
				continue;
		return ch;
	}
	else
		return NULL;
}
char*string_in( char str1[], char str2[])
{
	int find=0;
	int len=strlen(str2);
	while(*str1!='\0')
	{
		if (!strncmp(str1,str2,len))
		{
			find=1;
			break;
		}
		else
			str1++;
	}
	if(find)
		return str1;
	else
		return NULL;
}
