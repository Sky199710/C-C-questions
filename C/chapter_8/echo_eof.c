/*************************************************************************
	> File Name: echo_eof.c
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Sun 29 Nov 2020 05:42:18 PM PST
 ************************************************************************/

#include<stdio.h>
int main(void)
{
	int ch;
	while ((ch=getchar())!=EOF)
		putchar(ch);
	return 0;
}
