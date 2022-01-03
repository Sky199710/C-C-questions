/*************************************************************************
	> File Name: 12.c
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Wed 09 Dec 2020 06:54:51 PM PST
 ************************************************************************/

#include<stdio.h>
#include<ctype.h>
int main()
{
	char ch;
	int mark=0;
	int words=0;
	int Alp=0;
	int alp=0;
	int punc=0;
	int num=0;
	printf("请输入字符：\n");
	while((ch=getchar())!=EOF)
		{
			if (islower(ch))
				alp++;
			else if(isupper(ch))
				Alp++;
			else if(ispunct(ch))
				punc++;
			else if(isdigit(ch))
				num++;
			if(isalpha(ch))
				mark=1;
			else if(mark==1)
			{
				words++;
				mark=0;
			}
		}
	printf("有%d个单词，%d个大写字母，%d个小写字母，%d个标点符号，%d个数字\n",words,Alp,alp,punc,num);
}
