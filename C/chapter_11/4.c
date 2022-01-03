/*************************************************************************
	> File Name: 1.c
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Mon 07 Dec 2020 05:30:28 PM PST
 ************************************************************************/

#include<stdio.h>
#include<ctype.h>
#define len 40
char *getwords(char[],int);
int main()
{	
	char ch[len];
	char *check;
	printf("请输入字符：\n");
	check=getwords(ch,5);
	if (check==NULL)
		printf("The input failed.");
	else
		puts(ch);
}
char *getwords(char ch[], int n)
{	
	int str;
	int i=0;
	while((str=getchar())!=EOF&&isspace(str))
		continue;
	if (str==EOF)
		return NULL;
	else
	{
		*ch++=str;
		i++;
	}
	while((str=getchar())!=EOF&&!isspace(str)&&i<n)
	{	
		*ch++=str;
		i++;
	}
	*ch='\0';
	if (str==EOF)
		return NULL;
	else
	{
		while(str!='\n')
			str=getchar();
		return ch;
	}

}

