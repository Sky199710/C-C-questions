/*************************************************************************
	> File Name: 4.c
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Fri 27 Nov 2020 04:21:42 AM PST
 ************************************************************************/

#include<stdio.h>
int main()
{
	int num=0;
	char ch;
	printf("请输入：\n");
	while((ch=getchar())!='#')
	{
		if (ch=='.')
		{
			ch='!';
			putchar(ch);
			num++;
		}
		else if (ch=='!')
		{
			putchar(ch);
			putchar('!');
			num++;
		}
		else
			putchar(ch);
	}
	printf("共进行了%d次替换\n",num);
			
		
}
