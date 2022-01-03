/*************************************************************************
	> File Name: 5.c
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Wed 16 Jun 2021 11:44:23 PM PDT
 ************************************************************************/

#include<stdio.h>
#include<limits.h>
#include<math.h>
#include<string.h>
const static int size = CHAR_BIT*sizeof(unsigned int);
char *itobs(unsigned int,char*);
unsigned int rotate_l(unsigned int,int);
int btoi(char *p);
int main()
{
	unsigned int m=1;
	int times=31;
	char str[CHAR_BIT*sizeof(unsigned int)+1];
	printf("%u\n",rotate_l(m,times));
	printf("%s\n",itobs(rotate_l(m,times),str));
	
}
char *itobs(unsigned int n,char*str)
{
	int i;

	for(i=size-1;i>=0;i--,n>>=1)
		str[i]=(01&n)+'0';
	str[size]='\0';

	return str;
}
unsigned int rotate_l(unsigned int old,int bits)
{
	char temp;
	char str[CHAR_BIT*sizeof(unsigned int)+1];
	itobs(old,str);
	for(int i=0;i<bits;i++)
	{
		temp=str[0];
		old=old<<1;
		itobs(old,str);
		str[size-1]=temp;
		old=btoi(str);
	}
	return old;
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
