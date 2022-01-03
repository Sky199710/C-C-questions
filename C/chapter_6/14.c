/*************************************************************************
	> File Name: 14.c
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Wed 25 Nov 2020 06:52:12 PM PST
 ************************************************************************/

#include<stdio.h>
#include<string.h>
int main()
{	int i=0;
	char sentence[256];
	printf("请输入一行字: \n");
	do
	{
		scanf("%c",&sentence[i]);
		i++;
	}while(sentence[i-1]!='\n');
	for (i-1;i>=0;i--)
		printf("%c",sentence[i]);
	printf("\n");
}
