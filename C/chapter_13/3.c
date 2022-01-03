/*************************************************************************
	> File Name: 2.c
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Mon 14 Dec 2020 04:52:44 AM PST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main(int argc ,char* argv[])
{
	char temp[100];
	char ch;
	FILE *source;
	int i=0;
	char * p;
	p=temp;
	if (argc<2)
	{	
		printf("Usage: %s filename\n",argv[0]);
		exit(EXIT_FAILURE);
	}
	if ((source=fopen(argv[1],"r"))==NULL)
	{
		printf("Can't open %s\n",argv[1]);
		exit(EXIT_FAILURE);
	}
	while ((ch=getc(source))!=EOF)
	{
		temp[i]=toupper(ch);
		i++;
	}
	if (fclose(source)!=0)
		printf("Could not close file %s\n",argv[1]);
	if ((source=fopen(argv[1],"w"))==NULL)
		printf("Can't open %s\n",argv[1]);
	while(*p!='\0')
	{
		putc(*p,source);
		p++;
	}
	if (fclose(source)!=0)
		printf("Could not close file %s\n",argv[1]);
}
