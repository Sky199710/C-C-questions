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
	FILE *file;
	if (argc<2)
	{	
		printf("Usage: %s filename\n",argv[0]);
		exit(EXIT_FAILURE);
	}
	for(int i=1;i<argc;i++)
	{	
		if ((file=fopen(argv[i],"r"))==NULL)
		{
			printf("Can't open %s\n",argv[1]);
			exit(EXIT_FAILURE);
		}
		while((ch=getc(file))!=EOF)
			putchar(ch);
		printf("\n");
		if (fclose(file)!=0)
			printf("Could not close file %s\n",argv[1]);
	}
}
