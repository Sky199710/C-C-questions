/*************************************************************************
	> File Name: debug.c
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Thu 24 Jun 2021 01:02:12 AM PDT
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
	char word[100];
	FILE *file;
	char choice;
	if(argc<2)
	{
		fprintf(stderr,"Usage:%s filename\n",argv[0]);
		exit(EXIT_FAILURE);
	}
	if((file=fopen(argv[1],"r"))==NULL)
	{
		fprintf(stderr,"I couldn't open the file \"%s\"\n",argv[1]);
		exit(EXIT_FAILURE);
	}
	while(fscanf(file,"%s",word)==1)
	{
		printf("%s\n",word);
	}
}
