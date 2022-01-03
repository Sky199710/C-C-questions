/*************************************************************************
	> File Name: 7fun.c
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Thu 03 Dec 2020 12:25:56 AM PST
 ************************************************************************/

#include<stdio.h>
#include<ctype.h>
int isb(char ch)
{
	if(isalpha(ch))
	{
		tolower(ch);
		printf("%c是字母，在字母表中的位置为%d\n",ch,ch-'a'+1);
	}
	else
		return -1;
	
}
