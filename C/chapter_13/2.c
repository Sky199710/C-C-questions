/*************************************************************************
	> File Name: 2.c
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Mon 14 Dec 2020 04:52:44 AM PST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
int main(int argc ,char* argv[])
{
	char ch;
	FILE *source;
	FILE *dest;
	if (argc<3)
	{	
		printf("Usage: %s filename\n",argv[0]);
		exit(EXIT_FAILURE);
	}
	if ((source=fopen(argv[1],"rb"))==NULL)
	{
		printf("Can't open %s\n",argv[1]);
		exit(EXIT_FAILURE);
	}
	if ((dest=fopen(argv[2],"wb"))==NULL)
	{
		printf("Can't open %s\n",argv[2]);
		exit(EXIT_FAILURE);
	}
	while ((ch=getc(source))!=EOF)
	{
		putc(ch,dest);
	}
	if (fclose(source)!=0)
		printf("Could not close file %s\n",argv[1]);
	if (fclose(dest)!=0)
		printf("Could not close file %s\n",argv[2]);
}
