/*************************************************************************
	> File Name: 10.c
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Sun 06 Dec 2020 01:09:18 AM PST
 ************************************************************************/

#include<stdio.h>
void add(int [], int[], int[],int n);
int main()
{
	int a[]={2,4,5,8};
	int b[]={1,0,4,6};
	int c[4];
	add(a,b,c,4);
	for (int i=0;i<4;i++)
		printf("%d\t",c[i]);
	printf("\n");
}
void add (int a[],int b[],int c[],int n)
{
	for (int i=0;i<n;i++)
		c[i]=a[i]+b[i];
}
