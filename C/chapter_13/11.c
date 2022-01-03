/*************************************************************************
	> File Name: 11.c
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Mon 14 Dec 2020 08:12:24 PM PST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc, char * argv[])
{	
	char temp[256];
	FILE *fa;
	if((fa=fopen(argv[2],"r"))==NULL)
	{
		printf("Can't open %s file\n",argv[2]);
		exit(EXIT_FAILURE);
	}
	while(fgets(temp,256,fa)!=NULL)
	{
		if (strstr(temp,argv[1]))
			fputs(temp,stdout);
	}
}
