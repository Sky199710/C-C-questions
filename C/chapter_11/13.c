/*************************************************************************
	> File Name: 13.c
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Wed 09 Dec 2020 07:12:04 PM PST
 ************************************************************************/

#include<stdio.h>
int main(int argc, char *argv[])
{
	for(int i=argc-1;i>0;i--)
		printf("%s ",argv[i]);
	printf("\n");
}
