/*************************************************************************
	> File Name: 12.c
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: Wed 25 Nov 2020 06:20:42 PM PST
 ************************************************************************/

#include<stdio.h>
int main()
{
	int a[8];
	a[0]=1;
	for(int i=1;i<8;i++)
	{
		a[i]=2*a[i-1];
	}
	int begin=0;
	do
	{
		printf("%d\t",a[begin]);
		begin++;
	}while(begin<8);
	printf("\n");
}
