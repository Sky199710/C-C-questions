/*************************************************************************
	> File Name: 1.c
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Fri 27 Nov 2020 02:35:26 AM PST
 ************************************************************************/

#include<stdio.h>
int main()
{	char ch;
	int blank_num=0;
	int enter_num=0;
	int others_num=0;
	printf("请输入字符:\n");
	while((ch=getchar())!='#')
	{
		if (ch==' ')
			blank_num++;
		else if (ch=='\n')
			enter_num++;
		else
			others_num++;
	}
	printf("共有%d个空格数，%d个换行符，%d个其他字符/n",blank_num,enter_num,others_num);
}
