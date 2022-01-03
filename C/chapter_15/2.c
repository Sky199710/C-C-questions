/*************************************************************************
	> File Name: 2.c
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Wed 16 Jun 2021 06:59:34 PM PDT
 ************************************************************************/

#include<stdio.h>
#include<limits.h>
#include<string.h>
#include<math.h>
int btoi(char * p);
char *itobs(int ,char *);
int main(int argc,char * argv[])
{
	int len,a,b;
	char str[8*sizeof(int)+1];
	if(argc!=3)
	puts("The number of inputs is incorrect.");
	else
	{
		a=btoi(argv[1]);
		b=btoi(argv[2]);
		printf("~%s=%s\n",argv[1],itobs(~a,str));
		printf("~%s=%s\n",argv[2],itobs(~b,str));
		printf("%s&%s=%s\n",argv[1],argv[2],itobs(a&b,str));
		printf("%s|%s=%s\n",argv[1],argv[2],itobs(a|b,str));
		printf("%s^%s=%s\n",argv[1],argv[2],itobs(a^b,str));
	}


}
int btoi(char * p)
{
	int n;
	int ans=0;
	n=strlen(p);
	for(int i=n-2;i>-1;i--)
	{
		ans=ans+(p[i]-'0')*pow(2,n-1-i);
	}
	if(p[n-1]=='1')
		ans++;
		return ans;
}
char *itobs(int n,char*str)
{
	int i;
	const static int size = CHAR_BIT * sizeof(int);

	for(i=size-1;i>=0;i--,n>>=1)
		str[i]=(01&n)+'0';
	str[size]='\0';

	return str;
}
