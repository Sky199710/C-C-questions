/*************************************************************************
	> File Name: 2.c
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Wed 02 Dec 2020 05:31:44 AM PST
 ************************************************************************/

#include<stdio.h>
void chline(char ch, int i, int j)
{
	for (int x=0;x<i;x++)
	{
		for (int y=0;y<j;y++)
			putchar(ch);
		printf("\n");
	}
	printf("\n");
}
int main()
{
	char ch;
	int m,n;
	printf("请输入字符,#结束程序\n");
	while((ch=getchar())!='#')
	{
		if(ch=='\n')
			continue;
		printf("行数和列数:\n");
		if((scanf("%d %d",&m,&n))!=2)
			break;
		chline(ch,m,n);
		printf("请输入字符,#结束程序\n");
	}
	printf("bye\n");
}
