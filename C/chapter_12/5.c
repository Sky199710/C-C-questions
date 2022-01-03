/*************************************************************************
	> File Name: 5.c
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Sun 13 Dec 2020 04:45:00 AM PST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[100];
	int temp;
	for (int i=0;i<100;i++)
	{
		a[i]=rand()%10+1;
	}
	for (int i=0;i<99;i++)
	{
		for (int j=i;j<100;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for (int i=0;i<100;i++)
	{
		printf("%d\t",a[i]);
		if((i+1)%5==0)
			printf("\n");
	}

}
