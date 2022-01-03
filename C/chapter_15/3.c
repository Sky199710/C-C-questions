/*************************************************************************
	> File Name: 3.c
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Wed 16 Jun 2021 08:16:55 PM PDT
 ************************************************************************/

#include<stdio.h>
#include<limits.h>
#include<string.h>
int open(int);
char *itobs(int,char*);
const static int size = CHAR_BIT * sizeof(int);
int main()
{
	int num;
	puts("please enter the number(q to quit)");
	while(scanf("%d",&num)==1)
	{
		printf("The open bits are %d\n",open(num));
		while(getchar()!='\n')
			continue;
	puts("please enter the number(q to quit)");

	}
	puts("bye.");
}
int open(int n)
{
	int num=0;
	char str[CHAR_BIT*sizeof(int)+1];
	itobs(n,str);
	for(int i=0;i<size;i++)
	{
		if(str[i]=='1')
			num++;
	}
	return num;
}
char *itobs(int n,char*str)
{
	int i;

	for(i=size-1;i>=0;i--,n>>=1)
		str[i]=(01&n)+'0';
	str[size]='\0';

	return str;
}
