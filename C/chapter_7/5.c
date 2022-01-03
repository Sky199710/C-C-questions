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
		switch(ch)
		{
			case '.' :putchar('!');
					  num++;
					  break;
			case '!' :putchar('!');
					  putchar('!');
					  num++;
					  break;

			default  :putchar(ch);
		}
	}
	printf("共进行了%d次替换\n",num);
			
		
}
