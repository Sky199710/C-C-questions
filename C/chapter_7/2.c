/*************************************************************************
	> File Name: 2.c
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Fri 27 Nov 2020 03:25:26 AM PST
 ************************************************************************/

#include<stdio.h>
int main()
{
	char a;
	int num=0;
	printf("请输入字符串： \n");
	while((a=getchar())!='#')
	{
		putchar(a);
		printf("%d\t",a);
		num++;
		if(num%8==0)
			printf("\n");
	}
	printf("\n");
}
