/*************************************************************************
	> File Name: 1.c
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Wed 16 Jun 2021 07:01:52 AM PDT
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#include<math.h>
int btoi(char *);
int main()
{
	char * pbin = "00010111";
	int ans;
	ans=btoi(pbin);
	printf("%d\n",ans);
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



