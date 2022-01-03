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
	char in[100];
	char ch;
	char find;
	FILE *file;
	int count=0;
	if (argc<2)
		printf("Usage: %s filename\n",argv[0]);
	else if (argc==2)
	{	
		printf("请输入: ");
		fgets(in,100,stdin);
		fputs(in,stdout);
	}
	else
	{
		find=argv[1][0];
		for(int i=2;i<argc;i++)
		{
			count=0;
			if ((file=fopen(argv[i],"r"))==NULL)
			{
				printf("Can't open %s\n",argv[1]);
				exit(EXIT_FAILURE);
			}
			while((ch=getc(file))!=EOF)
			{	
				putchar(ch);
				if(ch==find)
					count++;
			}
			printf("\n");
			printf("%s file has %d %c\n\n",argv[i],count,find);
			if (fclose(file)!=0)
				printf("Could not close file %s\n",argv[1]);
		}	
	}
}
