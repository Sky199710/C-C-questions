/*************************************************************************
	> File Name: 7.c
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Tue 08 Dec 2020 04:49:27 AM PST
 ************************************************************************/

#include<stdio.h>
#include<string.h>
char * mystrncpy(char [], char [], int );
char * s_get(char [], int);
void main()
{
	int n;
	char * fin;
	char s1[60];
	char s2[60];
	printf("请输入第一个字符串：\n");
	while(s_get(s1,60)&&s1[0]!='\0')
	{
		printf("请输入第二个字符串：\n");
		s_get(s2,60);
		printf("请输入复制的字符数：\n");
		scanf("%d",&n);
		fin=mystrncpy(s1,s2,n);
		printf("%s\n",fin);
		while(getchar()!='\n')
			continue;
		printf("请输入第一个字符串：\n");
	}
}
char*s_get(char ch[],int n)
{
	char *verify;
	char *find;
	verify=fgets(ch,n,stdin);
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

char * mystrncpy(char tar[], char sour[], int n)
{
	int i=0;
	char * temp=tar;
	if (strlen(sour)<n)
	{
		while(*sour!='\0')
			*tar++=*sour++;
		*tar='\0';
	}
	else if(strlen(sour)==n)
	{
		while(*sour!='\0')
			*tar++=*sour++;
	}
	else
	{
		while(i++<n)
		{
			*tar++=*sour++;
		}
	}
	return temp;

}
