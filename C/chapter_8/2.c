/*************************************************************************
	> File Name: 2.c
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Sun 29 Nov 2020 06:39:21 PM PST
 ************************************************************************/

#include<stdio.h>
int main()
{
	int ch;
	int n=0;
	printf("请输入字符：\n");
	while((ch=getchar())!=EOF)
	{
		if(ch>=32)
			printf("%c",ch);
		else if (ch=='\t')
			printf("\\t");
		else if (ch=='\n')
			printf("\\n\n");
		else if (ch<32)
			printf("Ctrl+%c",ch+64);
		printf("%d",ch);
		printf("\t");
		n++;
		if (n%10==0)
			printf("\n");
	}
	printf("\n");
}
