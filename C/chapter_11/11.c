/*************************************************************************
	> File Name: 9.c
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Tue 08 Dec 2020 10:40:14 PM PST
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#include<ctype.h>
char * s_gets(char[], int);
void manu();
void  word(char[]);
int main()
{
	int n=0;
	char ch;
	char str[10][50];
	char ptstr[10][50];
	char temp[50];
	printf("请输入字符串：\n");
	while(n<10&&s_gets(str[n],50)!=NULL&&str[n][0]!=EOF)
	{
		strcpy(ptstr[n],str[n]);
		n++;
	}
	manu();
	while((ch=getchar())!='q')
	{
		while(getchar()!='\n')
			continue;
		switch(ch)
		{
			case 'a' : for(int i=0;i<n;i++)
							puts(str[i]);
					   break;
			case 'b' : for(int i=0;i<n-1;i++)
					   {
							for(int j=i+1;j<n;j++)
							{
								if(strcmp(ptstr[i],ptstr[j])>0)
								{
									strcpy(temp,ptstr[i]);
									strcpy(ptstr[i],ptstr[j]);
									strcpy(ptstr[j],temp);
								}
							}
					   }

						 for(int i=0;i<n;i++)
							puts(ptstr[i]);
					   break;
			case 'c' : for(int i=0;i<n-1;i++)
					   {
							for(int j=i+1;j<n;j++)
							{
								if(strlen(ptstr[i])>strlen(ptstr[j]))
								{
									strcpy(temp,ptstr[i]);
									strcpy(ptstr[i],ptstr[j]);
									strcpy(ptstr[j],temp);
								}
							}
						}
						 for(int i=0;i<n;i++)
							puts(ptstr[i]);
					   break;
			case 'd' : for (int i=0;i<n;i++)
					   {
							word(str[i]);
							printf("\n");
					   }
		}
		manu();
	
	}
}

void manu()
{
	printf("a.打印源字符串列表\tb.以ASCII顺序打印\n"
			"c.按长度递增顺序打印\td.按字符串中第一个单词的长度打印字符串\n"
			"q.退出\n");
}


char*s_gets(char str[], int n)
{
	char *find;
	char *verify;
	verify=fgets(str,n,stdin);
	if(verify)
	{
		find=strchr(str,'\n');
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
void word(char str[])
{
	int i=0;
	while(isspace(str[i]))
		i++;
	while(isalpha(str[i]))
	{
		putchar(str[i]);
		i++;
	}
}
