/*************************************************************************
	> File Name: 3.c
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Sat 05 Dec 2020 06:42:11 PM PST
 ************************************************************************/

#include<stdio.h>
double cha(const double ar[], int n)
{
	double max=0;
	double min=1e8;
	for (int i=0;i<n;i++)
	{
		if (ar[i]>max)
			max=ar[i];
		if (ar[i]<min)
			min=ar[i];
	}
	return max-min;
}
int main()
{
	double a[]={1.6, 9.9595, 6.15498, 3.95916, 2.333, 5.1984, 8.1948, 9, 6.98489, 8.33, 5.3, 4, 2, 6, 3};
	double max=(cha(a,sizeof(a)/8));
	printf("%g\n",max);
}
