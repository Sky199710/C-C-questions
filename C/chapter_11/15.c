/*************************************************************************
	> File Name: 15.c
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Wed 09 Dec 2020 07:32:09 PM PST
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#include<ctype.h>
int atoi(char str[])
{
	int ans=0;
	int i=0;
	int len=strlen(str);
	for(i;i<len;i++)
	{
		if(isdigit(str[i]))
			ans=10*ans+str[i]-48;
		else
			break;
	}
	if (i==len)
		return ans;
	else
		return 0;
		
}
int main(int argc, char*argv[])
{
	int i;
	i=atoi(argv[1]);
	printf("%d\n",i);
}

