/*************************************************************************
	> File Name: 11.c
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Thu 03 Dec 2020 03:50:12 AM PST
 ************************************************************************/

#include<stdio.h>
unsigned long fibonacci()
{
	long long  a[80];
	a[0]=1;
	a[1]=1;
	for (int i=2;i<80;i++)
		a[i]=a[i-1]+a[i-2];
	for (int i=0;i<80;i++)
		printf("%lld\t",a[i]);
	printf("\n");
}
int main()
{
	fibonacci();
}


