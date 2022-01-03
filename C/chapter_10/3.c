/*************************************************************************
	> File Name: 3.c
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Sat 05 Dec 2020 06:42:11 PM PST
 ************************************************************************/

#include<stdio.h>
int maximum(const int ar[], int n)
{
	int max=0;
	for (int i=0;i<n;i++)
	{
		if (ar[i]>max)
			max=ar[i];
	}
	return max;
}
int main()
{
	int a[]={1, 9, 6, 3, 2, 5, 8, 2, 6, 8, 5, 4, 2, 6, 3};
	int max=(maximum(a,sizeof(a)/4));
	printf("%d\n",max);
}
