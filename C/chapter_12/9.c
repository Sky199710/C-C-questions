/*************************************************************************
	> File Name: 9.c
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Sun 13 Dec 2020 05:52:12 PM PST
 ************************************************************************/

#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char ch;
	char * * p;
	char temp[20];
	int num,ini;
	printf("How many words do you wish to enter? ");
	scanf("%d",&num);
	p=(char * *)malloc(num*sizeof(char *));
	printf("Enter %d words now:\n",num);
	while(getchar()!='\n')
		continue;
	for (int i=0;i<num;i++)
	{
		for(int j=0;j<20;j++)
			temp[j]='\0';
		ini=0;
		while(isalpha(ch=getchar()))
		{
			temp[ini]=ch;
			ini++;
		}
		p[i]=(char *)malloc(strlen(temp)*sizeof(char));
		for(int k=0;k<strlen(temp);k++)
			p[i][k]=temp[k];
	}
	printf("Here are your words:\n");
	for (int i=0;i<num;i++)
	{
		printf("%s\n",p[i]);
	}
}


