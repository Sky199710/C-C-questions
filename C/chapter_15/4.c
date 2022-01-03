/*************************************************************************
	> File Name: 4.c
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Wed 16 Jun 2021 08:33:35 PM PDT
 ************************************************************************/

#include<stdio.h>
#include<limits.h>
const static int size = CHAR_BIT*sizeof(int);
int isopen(int ,int);
char *itobs(int,char*);
int main()
{
	int num,pos;
	char str[CHAR_BIT*sizeof(int)+1];
	puts("Please enter number and position.");
	while(scanf("%d %d",&num,&pos)==2)
	{
		itobs(num,str);
		if(str[31-pos]=='1')
			printf("opened\n");
		else
			printf("close\n");
		puts("Please enter number and position.");

	}

}
char *itobs(int n,char*str)
{
	int i;

	for(i=size-1;i>=0;i--,n>>=1)
		str[i]=(01&n)+'0';
	str[size]='\0';

	return str;
}
