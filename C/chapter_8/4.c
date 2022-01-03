/*************************************************************************
	> File Name: 4.c
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Mon 30 Nov 2020 12:07:03 AM PST
 ************************************************************************/

#include<stdio.h>
#include<ctype.h>
#include<stdbool.h>
int main()
{
	bool inword = false;
	int ch;
	float num=0;
	float length=0;
	printf("请输入单词:\n");
	while((ch=getchar())!=EOF)
	{
		if (ch=='\n')
			continue;
		else if(!isblank(ch)&&!inword)
		{
			num++;
			length++;
			inword=true;
		}	
		else if (!isblank(ch)&&inword)
			length++;
		else 
			inword=false;
	}
	printf("平均每个单词有%f个字母。\n",length/num);
}
